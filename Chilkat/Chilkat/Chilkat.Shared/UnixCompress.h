
// This header is generated for Chilkat v9.5.0

#pragma once

class CkUnixCompressW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkUnixCompressW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class UnixCompress sealed
{
#include "friendDecls.h"
		
	private:
    CkUnixCompressW *m_impl;

	public:
	virtual ~UnixCompress(void);
	UnixCompress(void);
	//UnixCompress(Platform::IntPtr p);

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
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ CompressFileAsync(Platform::String ^inFilename, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressFileToMemAsync(Platform::String ^inFilename);

	Boolean CompressMemToFile(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath);

	Windows::Foundation::Collections::IVector<uint8>^CompressMemory(Windows::Foundation::Collections::IVector<uint8>^inData);

	Windows::Foundation::Collections::IVector<uint8>^CompressString(Platform::String ^inStr, Platform::String ^charset);

	Boolean CompressStringToFile(Platform::String ^inStr, Platform::String ^charset, Platform::String ^destPath);

	Boolean IsUnlocked(void);

	IAsyncOperation<Boolean>^ UnTarZAsync(Platform::String ^zFilename, Platform::String ^destDir, Boolean bNoAbsolute);

	IAsyncOperation<Boolean>^ UncompressFileAsync(Platform::String ^inFilename, Platform::String ^destPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UncompressFileToMemAsync(Platform::String ^inFilename);

	IAsyncOperation<Platform::String ^>^ UncompressFileToStringAsync(Platform::String ^inFilename, Platform::String ^inCharset);

	Boolean UncompressMemToFile(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath);

	Windows::Foundation::Collections::IVector<uint8>^UncompressMemory(Windows::Foundation::Collections::IVector<uint8>^inData);

	Platform::String ^UncompressString(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^inCharset);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};




private class CxUnixCompressProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::UnixCompress ^m_sender;
	CkUnixCompressW *m_impl;
	
    private:
	 	CxUnixCompressProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxUnixCompressProgress(CkUnixCompressW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxUnixCompressProgress(void)
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


