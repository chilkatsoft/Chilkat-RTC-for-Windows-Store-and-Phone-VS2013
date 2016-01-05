
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSocksProxyW;

#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSocksProxyW.h"

	
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class SocksProxy sealed
{
#include "friendDecls.h"
		
	private:
    CkSocksProxyW *m_impl;

	public:
	virtual ~SocksProxy(void);
	SocksProxy(void);
	//SocksProxy(Platform::IntPtr p);

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
	property Boolean AllowUnauthenticatedSocks5
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AuthenticatedSocks5
	{
		Boolean get();
	}
	property Platform::String ^ClientIp
	{
		Platform::String ^get();
	}
	property int32 ClientPort
	{
		int32 get();
	}
	property Boolean ConnectionPending
	{
		Boolean get();
	}
	property Platform::String ^ListenBindIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Login
	{
		Platform::String ^get();
	}
	property Platform::String ^OutboundBindIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 OutboundBindPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
	}
	property Platform::String ^ServerIp
	{
		Platform::String ^get();
	}
	property int32 ServerPort
	{
		int32 get();
	}
	property int32 SocksVersion
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ AllowConnectionAsync(void);

	Platform::String ^GetTunnelsXml(void);

	Boolean Initialize(int port);

	IAsyncOperation<Boolean>^ ProceedSocks5Async(void);

	IAsyncOperation<Boolean>^ RejectConnectionAsync(void);

	Boolean StopAllTunnels(int maxWaitMs);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<Boolean>^ WaitForConnectionAsync(int maxWaitMs);



};




private class CxSocksProxyProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::SocksProxy ^m_sender;
	CkSocksProxyW *m_impl;
	
    private:
	 	CxSocksProxyProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSocksProxyProgress(CkSocksProxyW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSocksProxyProgress(void)
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


