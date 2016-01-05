
// This header is generated for Chilkat v9.5.0

#pragma once

class CkMailManW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkMailManProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkMailManW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class EmailBundle;
	ref class Email;
	ref class StringArray;
	ref class Cert;
	ref class PrivateKey;
	ref class SshKey;
	ref class XmlCertVault;
	ref class Ssh;
	ref class Socket;


public ref class MailMan sealed
{
#include "friendDecls.h"
		
	private:
    CkMailManW *m_impl;

	public:
	virtual ~MailMan(void);
	MailMan(void);
	//MailMan(Platform::IntPtr p);

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


	event EmailReceivedEventHandler ^EmailReceived;
	void FireEmailReceived(Object ^sender, EmailEventArgs ^args)
		{
		EmailReceived(sender,args);
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
	property Boolean AllOrNone
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoFix
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoGenMessageId
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoSmtpRset
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoUnwrapSecurity
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DsnEnvid
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DsnNotify
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DsnRet
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EmbedCertChain
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Filter
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^HeloHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Boolean ImmediateDelete
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean IncludeRootCert
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean IsPop3Connected
	{
		Boolean get();
	}
	property Boolean IsSmtpConnected
	{
		Boolean get();
	}
	property Platform::String ^LastSendQFilename
	{
		Platform::String ^get();
	}
	property int32 LastSmtpStatus
	{
		int32 get();
	}
	property Platform::String ^LogMailReceivedFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^LogMailSentFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^MailHost
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 MailPort
	{
		int32 get();
		void set(int32);
	}
	property int32 MaxCount
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^OAuth2AccessToken
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean OpaqueSigning
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^P7mEncryptAttachFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^P7mSigAttachFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^P7sSigAttachFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property Boolean Pop3SPA
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Pop3SessionId
	{
		int32 get();
	}
	property Platform::String ^Pop3SessionLog
	{
		Platform::String ^get();
	}
	property Boolean Pop3SslServerCertVerified
	{
		Boolean get();
	}
	property Boolean Pop3Stls
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^PopPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^PopPasswordBase64
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean PopSsl
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^PopUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ReadTimeout
	{
		int32 get();
		void set(int32);
	}
	property Boolean RequireSslCertVerify
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean ResetDateOnLoad
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SendBufferSize
	{
		int32 get();
		void set(int32);
	}
	property Boolean SendIndividual
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SizeLimit
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SmtpAuthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SmtpFailReason
	{
		Platform::String ^get();
	}
	property Platform::String ^SmtpHost
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SmtpLoginDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SmtpPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean SmtpPipelining
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SmtpPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SmtpSessionLog
	{
		Platform::String ^get();
	}
	property Boolean SmtpSsl
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean SmtpSslServerCertVerified
	{
		Boolean get();
	}
	property Platform::String ^SmtpUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Boolean StartTLS
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^TlsCipherSuite
	{
		Platform::String ^get();
	}
	property Platform::String ^TlsVersion
	{
		Platform::String ^get();
	}
	property Boolean UseApop
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^TlsPinSet
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password);

	IAsyncOperation<int>^ CheckMailAsync(void);

	void ClearBadEmailAddresses(void);

	void ClearPop3SessionLog(void);

	void ClearSmtpSessionLog(void);

	IAsyncOperation<Boolean>^ CloseSmtpConnectionAsync(void);

	IAsyncOperation<EmailBundle ^>^ CopyMailAsync(void);

	IAsyncOperation<Boolean>^ DeleteBundleAsync(EmailBundle ^bundle);

	IAsyncOperation<Boolean>^ DeleteByMsgnumAsync(int msgnum);

	IAsyncOperation<Boolean>^ DeleteByUidlAsync(Platform::String ^uidl);

	IAsyncOperation<Boolean>^ DeleteEmailAsync(Email ^email);

	IAsyncOperation<Boolean>^ DeleteMultipleAsync(StringArray ^uidlArray);

	IAsyncOperation<Email ^>^ FetchByMsgnumAsync(int msgnum);

	IAsyncOperation<Email ^>^ FetchEmailAsync(Platform::String ^uidl);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ FetchMimeAsync(Platform::String ^uidl);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ FetchMimeByMsgnumAsync(int msgnum);

	IAsyncOperation<EmailBundle ^>^ FetchMultipleAsync(StringArray ^uidlArray);

	IAsyncOperation<EmailBundle ^>^ FetchMultipleHeadersAsync(StringArray ^uidlArray, int numBodyLines);

	IAsyncOperation<StringArray ^>^ FetchMultipleMimeAsync(StringArray ^uidlArray);

	IAsyncOperation<Email ^>^ FetchSingleHeaderAsync(int numBodyLines, int index);

	IAsyncOperation<Email ^>^ FetchSingleHeaderByUidlAsync(int numBodyLines, Platform::String ^uidl);

	IAsyncOperation<EmailBundle ^>^ GetAllHeadersAsync(int numBodyLines);

	StringArray ^GetBadEmailAddrs(void);

	IAsyncOperation<Email ^>^ GetFullEmailAsync(Email ^email);

	IAsyncOperation<EmailBundle ^>^ GetHeadersAsync(int numBodyLines, int fromIndex, int toIndex);

	IAsyncOperation<int>^ GetMailboxCountAsync(void);

	IAsyncOperation<Platform::String ^>^ GetMailboxInfoXmlAsync(void);

	IAsyncOperation<uint32>^ GetMailboxSizeAsync(void);

	Cert ^GetPop3SslServerCert(void);

	StringArray ^GetSentToEmailAddrs(void);

	IAsyncOperation<int>^ GetSizeByUidlAsync(Platform::String ^uidl);

	Cert ^GetSmtpSslServerCert(void);

	IAsyncOperation<StringArray ^>^ GetUidlsAsync(void);

	IAsyncOperation<Boolean>^ IsSmtpDsnCapableAsync(void);

	Boolean IsUnlocked(void);

	Email ^LoadEml(Platform::String ^emlFilename);

	EmailBundle ^LoadMbx(Platform::String ^mbxFileName);

	Email ^LoadMime(Platform::String ^mimeText);

	Email ^LoadXmlEmail(Platform::String ^filename);

	Email ^LoadXmlEmailString(Platform::String ^xmlString);

	EmailBundle ^LoadXmlFile(Platform::String ^filename);

	EmailBundle ^LoadXmlString(Platform::String ^xmlString);

	IAsyncOperation<Boolean>^ OpenSmtpConnectionAsync(void);

	IAsyncOperation<Boolean>^ Pop3BeginSessionAsync(void);

	IAsyncOperation<Boolean>^ Pop3EndSessionAsync(void);

	IAsyncOperation<Boolean>^ Pop3EndSessionNoQuitAsync(void);

	IAsyncOperation<Boolean>^ Pop3NoopAsync(void);

	IAsyncOperation<Boolean>^ Pop3ResetAsync(void);

	IAsyncOperation<Platform::String ^>^ Pop3SendRawCommandAsync(Platform::String ^command, Platform::String ^charset);

	IAsyncOperation<Boolean>^ QuickSendAsync(Platform::String ^fromAddr, Platform::String ^toAddr, Platform::String ^subject, Platform::String ^body, Platform::String ^smtpServer);

	Platform::String ^RenderToMime(Email ^email);

	Windows::Foundation::Collections::IVector<uint8>^RenderToMimeBytes(Email ^email);

	IAsyncOperation<Boolean>^ SendBundleAsync(EmailBundle ^bundle);

	IAsyncOperation<Boolean>^ SendEmailAsync(Email ^email);

	IAsyncOperation<Boolean>^ SendMimeAsync(Platform::String ^from, Platform::String ^recipients, Platform::String ^mimeText);

	IAsyncOperation<Boolean>^ SendMimeBytesAsync(Platform::String ^from, Platform::String ^recipients, Windows::Foundation::Collections::IVector<uint8>^mimeData);

	IAsyncOperation<Boolean>^ SendMimeToListAsync(Platform::String ^from, Platform::String ^distListFile, Platform::String ^mimeText);

	IAsyncOperation<Boolean>^ SendToDistributionListAsync(Email ^email, StringArray ^sa);

	Boolean SetDecryptCert(Cert ^cert);

	Boolean SetDecryptCert2(Cert ^cert, PrivateKey ^key);

	Boolean SetSslClientCert(Cert ^cert);

	Boolean SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword);

	Boolean SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword);

	IAsyncOperation<Boolean>^ SmtpAuthenticateAsync(void);

	IAsyncOperation<Boolean>^ SmtpConnectAsync(void);

	IAsyncOperation<Boolean>^ SmtpNoopAsync(void);

	IAsyncOperation<Boolean>^ SmtpResetAsync(void);

	IAsyncOperation<Platform::String ^>^ SmtpSendRawCommandAsync(Platform::String ^command, Platform::String ^charset, Boolean bEncodeBase64);

	IAsyncOperation<Boolean>^ SshAuthenticatePkAsync(Platform::String ^sshLogin, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword);

	IAsyncOperation<Boolean>^ SshCloseTunnelAsync(void);

	IAsyncOperation<Boolean>^ SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort);

	IAsyncOperation<EmailBundle ^>^ TransferMailAsync(void);

	IAsyncOperation<StringArray ^>^ TransferMultipleMimeAsync(StringArray ^uidlArray);

	Boolean UnlockComponent(Platform::String ^code);

	Boolean UseCertVault(XmlCertVault ^vault);

	Boolean UseSsh(Ssh ^ssh);

	Boolean UseSshTunnel(Socket ^tunnel);

	IAsyncOperation<Boolean>^ VerifyPopConnectionAsync(void);

	IAsyncOperation<Boolean>^ VerifyPopLoginAsync(void);

	IAsyncOperation<Boolean>^ VerifyRecipsAsync(Email ^email, StringArray ^badAddrs);

	IAsyncOperation<Boolean>^ VerifySmtpConnectionAsync(void);

	IAsyncOperation<Boolean>^ VerifySmtpLoginAsync(void);



};




private class CxMailManProgress : public CkMailManProgressW
    {
	

    public:
	Chilkat::MailMan ^m_sender;
	CkMailManW *m_impl;
	
    private:
	 	CxMailManProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxMailManProgress(CkMailManW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxMailManProgress(void)
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







	// Now include the CkMailManProgress override 
	void EmailReceived(const wchar_t *subject, 
			    const wchar_t *fromAddr, const wchar_t *fromName, 
			    const wchar_t *returnPath, 
			    const wchar_t *date, 
			    const wchar_t *uidl, 
			    int sizeInBytes)
		{ 	    
		if (m_sender == nullptr) return;
		
		EmailEventArgs^ args = ref new EmailEventArgs;
		EVENT_ARGS_STRING(subject,Subject)
		EVENT_ARGS_STRING(fromName,FromName)
		EVENT_ARGS_STRING(fromAddr,FromAddr)
		EVENT_ARGS_STRING(uidl,Uidl)
		EVENT_ARGS_STRING(returnPath,ReturnPath)
		EVENT_ARGS_STRING(date,Date)
		args->Size = sizeInBytes;
		m_sender->FireEmailReceived(m_sender,args);
		}

    };







}


