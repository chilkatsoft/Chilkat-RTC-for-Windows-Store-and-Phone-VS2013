
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSshW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSshW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class SshKey;
	ref class StringArray;


public ref class Ssh sealed
{
#include "friendDecls.h"
		
	private:
    CkSshW *m_impl;

	public:
	virtual ~Ssh(void);
	Ssh(void);
	//Ssh(Platform::IntPtr p);

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
	property int32 AuthFailReason
	{
		int32 get();
	}
	property Boolean CaretControl
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ChannelOpenFailCode
	{
		int32 get();
	}
	property Platform::String ^ChannelOpenFailReason
	{
		Platform::String ^get();
	}
	property Platform::String ^ClientIdentifier
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property int32 DisconnectCode
	{
		int32 get();
	}
	property Platform::String ^DisconnectReason
	{
		Platform::String ^get();
	}
	property Platform::String ^ForceCipher
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^HostKeyAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^HostKeyFingerprint
	{
		Platform::String ^get();
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
	property Boolean IsConnected
	{
		Boolean get();
	}
	property Boolean KeepSessionLog
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 MaxPacketSize
	{
		int32 get();
		void set(int32);
	}
	property int32 NumOpenChannels
	{
		int32 get();
	}
	property Boolean PasswordChangeRequested
	{
		Boolean get();
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ReadTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^ReqExecCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SessionLog
	{
		Platform::String ^get();
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
	property Boolean StderrToStdout
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean TcpNoDelay
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^UserAuthBanner
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EnableCompression
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ AuthenticatePwAsync(Platform::String ^login, Platform::String ^password);

	IAsyncOperation<Boolean>^ AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey);

	Boolean ChannelIsOpen(int channelNum);

	IAsyncOperation<int>^ ChannelPollAsync(int channelNum, int pollTimeoutMs);

	IAsyncOperation<int>^ ChannelReadAsync(int channelNum);

	IAsyncOperation<int>^ ChannelReadAndPollAsync(int channelNum, int pollTimeoutMs);

	IAsyncOperation<int>^ ChannelReadAndPoll2Async(int channelNum, int pollTimeoutMs, int maxNumBytes);

	IAsyncOperation<Boolean>^ ChannelReceiveToCloseAsync(int channelNum);

	IAsyncOperation<Boolean>^ ChannelReceiveUntilMatchAsync(int channelNum, Platform::String ^matchPattern, Platform::String ^charset, Boolean caseSensitive);

	IAsyncOperation<Boolean>^ ChannelReceiveUntilMatchNAsync(int channelNum, StringArray ^matchPatterns, Platform::String ^charset, Boolean caseSensitive);

	Boolean ChannelReceivedClose(int channelNum);

	Boolean ChannelReceivedEof(int channelNum);

	Boolean ChannelReceivedExitStatus(int channelNum);

	void ChannelRelease(int channelNum);

	IAsyncOperation<Boolean>^ ChannelSendCloseAsync(int channelNum);

	IAsyncOperation<Boolean>^ ChannelSendDataAsync(int channelNum, Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ ChannelSendEofAsync(int channelNum);

	IAsyncOperation<Boolean>^ ChannelSendStringAsync(int channelNum, Platform::String ^strData, Platform::String ^charset);

	Boolean CheckConnection(void);

	void ClearTtyModes(void);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^hostname, int port);

	IAsyncOperation<Boolean>^ ConnectThroughSshAsync(Ssh ^ssh, Platform::String ^hostname, int port);

	IAsyncOperation<Platform::String ^>^ ContinueKeyboardAuthAsync(Platform::String ^response);

	void Disconnect(void);

	int GetChannelExitStatus(int channelNum);

	int GetChannelNumber(int index);

	Platform::String ^GetChannelType(int index);

	Windows::Foundation::Collections::IVector<uint8>^GetReceivedData(int channelNum);

	Windows::Foundation::Collections::IVector<uint8>^GetReceivedDataN(int channelNum, int numBytes);

	int GetReceivedNumBytes(int channelNum);

	Windows::Foundation::Collections::IVector<uint8>^GetReceivedStderr(int channelNum);

	Platform::String ^GetReceivedStderrText(int channelNum, Platform::String ^charset);

	Platform::String ^GetReceivedText(int channelNum, Platform::String ^charset);

	Platform::String ^GetReceivedTextS(int channelNum, Platform::String ^substr, Platform::String ^charset);

	IAsyncOperation<int>^ OpenCustomChannelAsync(Platform::String ^channelType);

	IAsyncOperation<int>^ OpenDirectTcpIpChannelAsync(Platform::String ^hostname, int port);

	IAsyncOperation<int>^ OpenSessionChannelAsync(void);

	Platform::String ^PeekReceivedText(int channelNum, Platform::String ^charset);

	IAsyncOperation<Boolean>^ ReKeyAsync(void);

	IAsyncOperation<Boolean>^ SendIgnoreAsync(void);

	IAsyncOperation<Boolean>^ SendReqExecAsync(int channelNum, Platform::String ^command);

	IAsyncOperation<Boolean>^ SendReqPtyAsync(int channelNum, Platform::String ^xTermEnvVar, int widthInChars, int heightInRows, int pixWidth, int pixHeight);

	IAsyncOperation<Boolean>^ SendReqSetEnvAsync(int channelNum, Platform::String ^name, Platform::String ^value);

	IAsyncOperation<Boolean>^ SendReqShellAsync(int channelNum);

	IAsyncOperation<Boolean>^ SendReqSignalAsync(int channelNum, Platform::String ^signalName);

	IAsyncOperation<Boolean>^ SendReqSubsystemAsync(int channelNum, Platform::String ^subsystemName);

	IAsyncOperation<Boolean>^ SendReqWindowChangeAsync(int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight);

	IAsyncOperation<Boolean>^ SendReqX11ForwardingAsync(int channelNum, Boolean singleConnection, Platform::String ^authProt, Platform::String ^authCookie, int screenNum);

	IAsyncOperation<Boolean>^ SendReqXonXoffAsync(int channelNum, Boolean clientCanDo);

	Boolean SetTtyMode(Platform::String ^name, int value);

	IAsyncOperation<Platform::String ^>^ StartKeyboardAuthAsync(Platform::String ^login);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<int>^ WaitForChannelMessageAsync(int pollTimeoutMs);



};




private class CxSshProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Ssh ^m_sender;
	CkSshW *m_impl;
	
    private:
	 	CxSshProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSshProgress(CkSshW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSshProgress(void)
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


