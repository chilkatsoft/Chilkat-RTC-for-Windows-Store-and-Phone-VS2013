
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSshTunnelW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSshTunnelW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class SshKey;
	ref class Ssh;


public ref class SshTunnel sealed
{
#include "friendDecls.h"
		
	private:
    CkSshTunnelW *m_impl;

	public:
	virtual ~SshTunnel(void);
	SshTunnel(void);
	//SshTunnel(Platform::IntPtr p);

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
	property Platform::String ^AcceptLog
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AcceptLogPath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DestHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 DestPort
	{
		int32 get();
		void set(int32);
	}
	property Boolean DynamicPortForwarding
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^HttpProxyAuthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HttpProxyPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HttpProxyPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^HttpProxyUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 IdleTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^InboundSocksPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^InboundSocksUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean IsAccepting
	{
		Boolean get();
	}
	property Boolean KeepAcceptLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean KeepTunnelLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ListenBindIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ListenPort
	{
		int32 get();
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
	property int32 SoRcvBuf
	{
		int32 get();
		void set(int32);
	}
	property int32 SoSndBuf
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SocksHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SocksPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SocksUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksVersion
	{
		int32 get();
		void set(int32);
	}
	property Boolean TcpNoDelay
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^TunnelLog
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TunnelLogPath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HostKeyFingerprint
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ AuthenticatePwAsync(Platform::String ^login, Platform::String ^password);

	IAsyncOperation<Boolean>^ AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ BeginAcceptingAsync(int listenPort);

	Boolean CloseTunnel(Boolean waitForThreads);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^hostname, int port);

	Boolean DisconnectAllClients(Boolean waitForThreads);

	Boolean StopAccepting(Boolean waitForThread);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<Boolean>^ ConnectThroughSshAsync(Ssh ^ssh, Platform::String ^hostname, int port);



};




private class CxSshTunnelProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::SshTunnel ^m_sender;
	CkSshTunnelW *m_impl;
	
    private:
	 	CxSshTunnelProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSshTunnelProgress(CkSshTunnelW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSshTunnelProgress(void)
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


