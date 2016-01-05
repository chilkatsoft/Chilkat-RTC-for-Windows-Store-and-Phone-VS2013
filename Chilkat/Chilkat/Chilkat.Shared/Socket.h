
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSocketW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSocketW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;
	ref class SshKey;
	ref class Ssh;


public ref class Socket sealed
{
#include "friendDecls.h"
		
	private:
    CkSocketW *m_impl;

	public:
	virtual ~Socket(void);
	Socket(void);
	//Socket(Platform::IntPtr p);

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
	property int32 AcceptFailReason
	{
		int32 get();
	}
	property int32 BandwidthThrottleDown
	{
		int32 get();
		void set(int32);
	}
	property int32 BandwidthThrottleUp
	{
		int32 get();
		void set(int32);
	}
	property Boolean BigEndian
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ClientPort
	{
		int32 get();
		void set(int32);
	}
	property int32 ConnectFailReason
	{
		int32 get();
	}
	property int32 ElapsedSeconds
	{
		int32 get();
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
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
	property Boolean IsConnected
	{
		Boolean get();
	}
	property Boolean KeepAlive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean KeepSessionLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean LastMethodFailed
	{
		Boolean get();
	}
	property Boolean ListenIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^LocalIpAddress
	{
		Platform::String ^get();
	}
	property int32 LocalPort
	{
		int32 get();
	}
	property int32 MaxReadIdleMs
	{
		int32 get();
		void set(int32);
	}
	property int32 MaxSendIdleMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^MyIpAddress
	{
		Platform::String ^get();
	}
	property int32 NumReceivedClientCerts
	{
		int32 get();
	}
	property int32 NumSslAcceptableClientCAs
	{
		int32 get();
	}
	property int32 ObjectId
	{
		int32 get();
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ReceiveFailReason
	{
		int32 get();
	}
	property int32 ReceivePacketSize
	{
		int32 get();
		void set(int32);
	}
	property int32 ReceivedCount
	{
		int32 get();
		void set(int32);
	}
	property int32 ReceivedInt
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^RemoteIpAddress
	{
		Platform::String ^get();
	}
	property int32 RemotePort
	{
		int32 get();
	}
	property Boolean RequireSslCertVerify
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SendFailReason
	{
		int32 get();
	}
	property int32 SendPacketSize
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SessionLog
	{
		Platform::String ^get();
	}
	property Platform::String ^SessionLogEncoding
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SoRcvBuf
	{
		int32 get();
		void set(int32);
	}
	property Boolean SoReuseAddr
	{
		Boolean get();
		void set(Boolean);
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
	property Boolean Ssl
	{
		Boolean get();
		void set(Boolean);
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
	property Platform::String ^StringCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean TcpNoDelay
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^TlsCipherSuite
	{
		Platform::String ^get();
	}
	property Platform::String ^TlsPinSet
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TlsVersion
	{
		Platform::String ^get();
	}
	property Platform::String ^UserData
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Socket ^>^ AcceptNextConnectionAsync(int maxWaitMs);

	Boolean AddSslAcceptableClientCaDn(Platform::String ^certAuthDN);

	Boolean BindAndListen(int port, int backlog);

	Platform::String ^BuildHttpGetRequest(Platform::String ^url);

	IAsyncOperation<int>^ CheckWriteableAsync(int maxWaitMs);

	void ClearSessionLog(void);

	Socket ^CloneSocket(void);

	IAsyncOperation<Boolean>^ CloseAsync(int maxWaitMs);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^hostname, int port, Boolean ssl, int maxWaitMs);

	IAsyncOperation<Boolean>^ ConvertFromSslAsync(void);

	IAsyncOperation<Boolean>^ ConvertToSslAsync(void);

	void DnsCacheClear(void);

	IAsyncOperation<Platform::String ^>^ DnsLookupAsync(Platform::String ^hostname, int maxWaitMs);

	Cert ^GetMyCert(void);

	Cert ^GetReceivedClientCert(int index);

	Platform::String ^GetSslAcceptableClientCaDn(int index);

	Cert ^GetSslServerCert(void);

	Boolean InitSslServer(Cert ^cert);

	Boolean IsUnlocked(void);

	Boolean PollDataAvailable(void);

	IAsyncOperation<Boolean>^ ReceiveByteAsync(Boolean bUnsigned);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReceiveBytesAsync(void);

	IAsyncOperation<Platform::String ^>^ ReceiveBytesENCAsync(Platform::String ^encodingAlg);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReceiveBytesNAsync(uint32 numBytes);

	IAsyncOperation<Boolean>^ ReceiveBytesToFileAsync(Platform::String ^appendFilename);

	IAsyncOperation<int>^ ReceiveCountAsync(void);

	IAsyncOperation<Boolean>^ ReceiveInt16Async(Boolean bigEndian, Boolean bUnsigned);

	IAsyncOperation<Boolean>^ ReceiveInt32Async(Boolean bigEndian);

	IAsyncOperation<Platform::String ^>^ ReceiveNBytesENCAsync(uint32 numBytes, Platform::String ^encodingAlg);

	IAsyncOperation<Platform::String ^>^ ReceiveStringAsync(void);

	IAsyncOperation<Platform::String ^>^ ReceiveStringMaxNAsync(int maxBytes);

	IAsyncOperation<Platform::String ^>^ ReceiveStringUntilByteAsync(int byteValue);

	IAsyncOperation<Platform::String ^>^ ReceiveToCRLFAsync(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReceiveUntilByteAsync(int byteValue);

	IAsyncOperation<Platform::String ^>^ ReceiveUntilMatchAsync(Platform::String ^matchStr);

	IAsyncOperation<Boolean>^ SendByteAsync(int value);

	IAsyncOperation<Boolean>^ SendBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ SendBytesENCAsync(Platform::String ^encodedBytes, Platform::String ^encodingAlg);

	IAsyncOperation<Boolean>^ SendCountAsync(int byteCount);

	IAsyncOperation<Boolean>^ SendInt16Async(int value, Boolean bigEndian);

	IAsyncOperation<Boolean>^ SendInt32Async(int value, Boolean bigEndian);

	IAsyncOperation<Boolean>^ SendStringAsync(Platform::String ^str);

	Boolean SetSslClientCert(Cert ^cert);

	Boolean SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword);

	Boolean SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword);

	void SleepMs(int millisec);

	IAsyncOperation<Boolean>^ SshAuthenticatePkAsync(Platform::String ^sshLogin, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword);

	IAsyncOperation<Boolean>^ SshCloseTunnelAsync(void);

	IAsyncOperation<Socket ^>^ SshOpenChannelAsync(Platform::String ^hostname, int port, Boolean ssl, int maxWaitMs);

	IAsyncOperation<Boolean>^ SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort);

	void StartTiming(void);

	Boolean TakeSocket(Socket ^sock);

	IAsyncOperation<Boolean>^ TlsRenegotiateAsync(void);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean UseSsh(Ssh ^ssh);



};




private class CxSocketProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Socket ^m_sender;
	CkSocketW *m_impl;
	
    private:
	 	CxSocketProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSocketProgress(CkSocketW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSocketProgress(void)
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


