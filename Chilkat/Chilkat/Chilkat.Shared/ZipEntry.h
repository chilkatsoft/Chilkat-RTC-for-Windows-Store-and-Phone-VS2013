
// This header is generated for Chilkat v9.5.0

#pragma once

class CkZipEntryW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkZipEntryW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class ZipEntry sealed
{
#include "friendDecls.h"
		
	private:
    CkZipEntryW *m_impl;

	public:
	virtual ~ZipEntry(void);
	ZipEntry(void);
	//ZipEntry(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	


	event ProgressInfoEventHandler^ ProgressInfo;
	event AbortCheckEventHandler^ AbortCheck;
	event PercentDoneEventHandler^ PercentDone;

	void FireAbortCheck(bool *abort)
	    {
	    Chilkat::AbortCheckEventArgs ^args = ref new Chilkat::AbortCheckEventArgs;
	    args->Abort = false;
	    AbortCheck(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FirePercentDone(int percentDone, bool *abort)
	    {
	    Chilkat::PercentDoneEventArgs ^args = ref new Chilkat::PercentDoneEventArgs;
	    args->PercentDone = percentDone;
	    args->Abort = false;
	    PercentDone(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FireProgressInfo(Platform::String ^name, Platform::String ^value)
	    {
	    Chilkat::ProgressInfoEventArgs ^args = ref new Chilkat::ProgressInfoEventArgs;
	    args->Name = name;
	    args->Value = value;
	    ProgressInfo(this,args);
	    }



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Comment
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property uint32 CompressedLength
	{
		uint32 get();
	}
	property int64 CompressedLength64
	{
		int64 get();
	}
	property int32 CompressionLevel
	{
		int32 get();
		void set(int32);
	}
	property int32 CompressionMethod
	{
		int32 get();
		void set(int32);
	}
	property int32 Crc
	{
		int32 get();
	}
	property int32 EntryID
	{
		int32 get();
	}
	property int32 EntryType
	{
		int32 get();
	}
	property Platform::String ^FileDateTimeStr
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^FileName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^FileNameHex
	{
		Platform::String ^get();
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean IsDirectory
	{
		Boolean get();
	}
	property Boolean TextFlag
	{
		Boolean get();
		void set(Boolean);
	}
	property uint32 UncompressedLength
	{
		uint32 get();
	}
	property int64 UncompressedLength64
	{
		int64 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ AppendDataAsync(Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Boolean>^ AppendStringAsync(Platform::String ^inStr, Platform::String ^charset);

	Windows::Foundation::Collections::IVector<uint8>^Copy(void);

	Platform::String ^CopyToBase64(void);

	Platform::String ^CopyToHex(void);

	IAsyncOperation<Boolean>^ ExtractAsync(Platform::String ^dirPath);

	IAsyncOperation<Boolean>^ ExtractIntoAsync(Platform::String ^dirPath);

	CkDateTime ^GetDt(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ InflateAsync(void);

	ZipEntry ^NextEntry(void);

	ZipEntry ^NextMatchingEntry(Platform::String ^matchStr);

	Boolean ReplaceData(Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean ReplaceString(Platform::String ^inStr, Platform::String ^charset);

	void SetDt(Chilkat::CkDateTime ^dt);

	IAsyncOperation<Platform::String ^>^ UnzipToStringAsync(int lineEndingBehavior, Platform::String ^srcCharset);



};




private class CxZipEntryProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::ZipEntry ^m_sender;
	CkZipEntryW *m_impl;
	
    private:
	 	CxZipEntryProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxZipEntryProgress(CkZipEntryW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxZipEntryProgress(void)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(0);
	    m_impl = 0;
	    }


	// overrides for CkBaseProgressW methods
	void AbortCheck(bool *abort) 
	    { 
	    if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FireAbortCheck(abort);
	    }

	void PercentDone(int pctDone, bool *abort) 
	    { 
	    if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FirePercentDone(pctDone,abort);
	    }

	void ProgressInfo(const wchar_t *name, const wchar_t *value) 
	    { 
	    if (m_sender == nullptr) return;
	    Platform::String ^s1 = ref new Platform::String(name);
	    Platform::String ^s2 = ref new Platform::String(value);
		m_sender->FireProgressInfo(s1,s2);
	    }






    };







}


