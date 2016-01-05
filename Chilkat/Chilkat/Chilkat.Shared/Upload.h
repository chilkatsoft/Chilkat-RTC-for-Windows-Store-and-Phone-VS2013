
// This header is generated for Chilkat v9.5.0

#pragma once

class CkUploadW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkUploadW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Upload sealed
{
#include "friendDecls.h"
		
	private:
    CkUploadW *m_impl;

	public:
	virtual ~Upload(void);
	Upload(void);
	//Upload(Platform::IntPtr p);

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
	property int32 BandwidthThrottleUp
	{
		int32 get();
		void set(int32);
	}
	property int32 ChunkSize
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean Expect100Continue
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Hostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 IdleTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Login
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property uint32 NumBytesSent
	{
		uint32 get();
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Path
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property uint32 PercentUploaded
	{
		uint32 get();
	}
	property int32 Port
	{
		int32 get();
		void set(int32);
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ProxyDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ProxyLogin
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ProxyPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ProxyPort
	{
		int32 get();
		void set(int32);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^ResponseBody
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
	}
	property Platform::String ^ResponseHeader
	{
		Platform::String ^get();
	}
	property int32 ResponseStatus
	{
		int32 get();
	}
	property Boolean Ssl
	{
		Boolean get();
		void set(Boolean);
	}
	property uint32 TotalUploadSize
	{
		uint32 get();
	}
	property Boolean UploadInProgress
	{
		Boolean get();
	}
	property Boolean UploadSuccess
	{
		Boolean get();
	}
	property Platform::String ^TlsPinSet
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SslAllowedCiphers
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SslProtocol
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AbortUpload(void);

	void AddCustomHeader(Platform::String ^name, Platform::String ^value);

	void AddFileReference(Platform::String ^name, Platform::String ^filename);

	void AddParam(Platform::String ^name, Platform::String ^value);

	Boolean BeginUpload(void);

	IAsyncOperation<Boolean>^ BlockingUploadAsync(void);

	void ClearFileReferences(void);

	void ClearParams(void);

	void SleepMs(int millisec);

	Windows::Foundation::Collections::IVector<uint8>^UploadToMemory(void);



};




private class CxUploadProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Upload ^m_sender;
	CkUploadW *m_impl;
	
    private:
	 	CxUploadProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxUploadProgress(CkUploadW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxUploadProgress(void)
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


