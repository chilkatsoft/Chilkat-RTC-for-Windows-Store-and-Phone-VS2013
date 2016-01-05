
// This header is generated for Chilkat v9.5.0

#pragma once

class CkScpW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkScpW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Ssh;


public ref class Scp sealed
{
#include "friendDecls.h"
		
	private:
    CkScpW *m_impl;

	public:
	virtual ~Scp(void);
	Scp(void);
	//Scp(Platform::IntPtr p);

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
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SyncMustMatch
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SyncMustNotMatch
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SyncedFiles
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ DownloadBinaryAsync(Platform::String ^remotePath);

	IAsyncOperation<Platform::String ^>^ DownloadBinaryEncodedAsync(Platform::String ^remotePath, Platform::String ^encoding);

	IAsyncOperation<Boolean>^ DownloadFileAsync(Platform::String ^remotePath, Platform::String ^localPath);

	IAsyncOperation<Platform::String ^>^ DownloadStringAsync(Platform::String ^remotePath, Platform::String ^charset);

	IAsyncOperation<Boolean>^ SyncTreeDownloadAsync(Platform::String ^remoteRoot, Platform::String ^localRoot, int mode, Boolean bRecurse);

	IAsyncOperation<Boolean>^ SyncTreeUploadAsync(Platform::String ^localBaseDir, Platform::String ^remoteBaseDir, int mode, Boolean bRecurse);

	IAsyncOperation<Boolean>^ UploadBinaryAsync(Platform::String ^remotePath, Windows::Foundation::Collections::IVector<uint8>^binData);

	IAsyncOperation<Boolean>^ UploadBinaryEncodedAsync(Platform::String ^remotePath, Platform::String ^encodedData, Platform::String ^encoding);

	IAsyncOperation<Boolean>^ UploadFileAsync(Platform::String ^localPath, Platform::String ^remotePath);

	IAsyncOperation<Boolean>^ UploadStringAsync(Platform::String ^remotePath, Platform::String ^textData, Platform::String ^charset);

	Boolean UseSsh(Ssh ^sshConnection);



};




private class CxScpProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Scp ^m_sender;
	CkScpW *m_impl;
	
    private:
	 	CxScpProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxScpProgress(CkScpW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxScpProgress(void)
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


