
// This header is generated for Chilkat v9.5.0

#pragma once

class CkGzipW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkGzipW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class Gzip sealed
{
#include "friendDecls.h"
		
	private:
    CkGzipW *m_impl;

	public:
	virtual ~Gzip(void);
	Gzip(void);
	//Gzip(Platform::IntPtr p);

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
	property int32 CompressionLevel
	{
		int32 get();
		void set(int32);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^ExtraData
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}
	property Platform::String ^Filename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^LastModStr
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean UseCurrentDate
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ CompressFileAsync(Platform::String ^srcPath, Platform::String ^destPath);

	IAsyncOperation<Boolean>^ CompressFile2Async(Platform::String ^srcPath, Platform::String ^embeddedFilename, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressFileToMemAsync(Platform::String ^inFilename);

	IAsyncOperation<Boolean>^ CompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressStringAsync(Platform::String ^inStr, Platform::String ^destCharset);

	Platform::String ^CompressStringENC(Platform::String ^strIn, Platform::String ^charset, Platform::String ^encoding);

	IAsyncOperation<Boolean>^ CompressStringToFileAsync(Platform::String ^inStr, Platform::String ^destCharset, Platform::String ^destPath);

	Windows::Foundation::Collections::IVector<uint8>^Decode(Platform::String ^str, Platform::String ^encoding);

	Platform::String ^DeflateStringENC(Platform::String ^strIn, Platform::String ^charset, Platform::String ^encoding);

	Platform::String ^Encode(Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^encoding);

	Boolean ExamineFile(Platform::String ^inGzPath);

	Boolean ExamineMemory(Windows::Foundation::Collections::IVector<uint8>^inGzData);

	CkDateTime ^GetDt(void);

	Platform::String ^InflateStringENC(Platform::String ^strIn, Platform::String ^charset, Platform::String ^encoding);

	Boolean IsUnlocked(void);

	Windows::Foundation::Collections::IVector<uint8>^ReadFile(Platform::String ^path);

	Boolean SetDt(Chilkat::CkDateTime ^dt);

	IAsyncOperation<Boolean>^ UnTarGzAsync(Platform::String ^gzFilename, Platform::String ^destDir, Boolean bNoAbsolute);

	IAsyncOperation<Boolean>^ UncompressFileAsync(Platform::String ^srcPath, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UncompressFileToMemAsync(Platform::String ^inFilename);

	IAsyncOperation<Platform::String ^>^ UncompressFileToStringAsync(Platform::String ^inFilename, Platform::String ^inCharset);

	IAsyncOperation<Boolean>^ UncompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UncompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Platform::String ^>^ UncompressStringAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^inCharset);

	Platform::String ^UncompressStringENC(Platform::String ^strIn, Platform::String ^charset, Platform::String ^encoding);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean WriteFile(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^binaryData);

	Platform::String ^XfdlToXml(Platform::String ^xfdl);



};




private class CxGzipProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Gzip ^m_sender;
	CkGzipW *m_impl;
	
    private:
	 	CxGzipProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxGzipProgress(CkGzipW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxGzipProgress(void)
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


