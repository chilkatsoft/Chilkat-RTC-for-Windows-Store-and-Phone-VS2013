
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHttpW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkHttpProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkHttpW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;
	ref class Hashtable;
	ref class HttpResponse;
	ref class HttpRequest;
	ref class StringArray;
	ref class CkDateTime;
	ref class PrivateKey;


public ref class Http sealed
{
#include "friendDecls.h"
		
	private:
    CkHttpW *m_impl;

	public:
	virtual ~Http(void);
	Http(void);
	//Http(Platform::IntPtr p);

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


	event ReceiveRateEventHandler ^ReceiveRate;
	void FireReceiveRate(Object ^sender, DataRateEventArgs ^args)
		{
		ReceiveRate(sender,args);
		}

	event SendRateEventHandler ^SendRate;
	void FireSendRate(Object ^sender, DataRateEventArgs ^args)
		{
		SendRate(sender,args);
		}

	event HttpChunkedEventHandler ^HttpChunked;
	void FireHttpChunked(Object ^sender, EventArgs ^args)
		{
		HttpChunked(sender,args);
		}
		
	event HttpRedirectEventHandler ^HttpRedirect;
	void FireHttpRedirect(Object ^sender, HttpRedirectEventArgs ^args)
		{
		HttpRedirect(sender,args);
		}
		
	event HttpBeginReceiveEventHandler ^HttpBeginReceive;
	void FireHttpBeginReceive(Object ^sender, EventArgs ^args)
		{
		HttpBeginReceive(sender,args);
		}
		
	event HttpBeginSendEventHandler ^HttpBeginSend;
	void FireHttpBeginSend(Object ^sender, EventArgs ^args)
		{
		HttpBeginSend(sender,args);
		}
		

	event HttpEndReceiveEventHandler ^HttpEndReceive;
	void FireHttpEndReceive(Object ^sender, StatusEventArgs ^args)
		{
		HttpEndReceive(sender,args);
		}
		

	event HttpEndSendEventHandler ^HttpEndSend;
	void FireHttpEndSend(Object ^sender, StatusEventArgs ^args)
		{
		HttpEndSend(sender,args);
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
	property Platform::String ^Accept
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AcceptCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AcceptLanguage
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean AllowGzip
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoAddHostHeader
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^AwsAccessKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AwsEndpoint
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AwsRegion
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^AwsSecretKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 AwsSignatureVersion
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^AwsSubResources
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean BasicAuth
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectFailReason
	{
		int32 get();
	}
	property int32 ConnectTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Connection
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CookieDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 DefaultFreshPeriod
	{
		int32 get();
		void set(int32);
	}
	property Boolean DigestAuth
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean FetchFromCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^FinalRedirectUrl
	{
		Platform::String ^get();
	}
	property Boolean FollowRedirects
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 FreshnessAlgorithm
	{
		int32 get();
		void set(int32);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean IgnoreMustRevalidate
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean IgnoreNoCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean KeepResponseBody
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 LMFactor
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^LastContentType
	{
		Platform::String ^get();
	}
	property Platform::String ^LastHeader
	{
		Platform::String ^get();
	}
	property Platform::String ^LastModDate
	{
		Platform::String ^get();
	}
	property Platform::String ^LastResponseBody
	{
		Platform::String ^get();
	}
	property Platform::String ^LastResponseHeader
	{
		Platform::String ^get();
	}
	property int32 LastStatus
	{
		int32 get();
	}
	property Platform::String ^Login
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^LoginDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 MaxConnections
	{
		int32 get();
		void set(int32);
	}
	property int32 MaxFreshPeriod
	{
		int32 get();
		void set(int32);
	}
	property uint32 MaxResponseSize
	{
		uint32 get();
		void set(uint32);
	}
	property int32 MaxUrlLen
	{
		int32 get();
		void set(int32);
	}
	property Boolean MimicFireFox
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean MimicIE
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 MinFreshPeriod
	{
		int32 get();
		void set(int32);
	}
	property Boolean NegotiateAuth
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NtlmAuth
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumCacheLevels
	{
		int32 get();
		void set(int32);
	}
	property int32 NumCacheRoots
	{
		int32 get();
	}
	property Boolean OAuth1
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^OAuthCallback
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthConsumerKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthConsumerSecret
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthRealm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthSigMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthToken
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthTokenSecret
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OAuthVerifier
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Platform::String ^ProxyAuthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Platform::String ^ProxyLoginDomain
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
	property int32 ReadTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^RedirectVerb
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Referer
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean RequireSslCertVerify
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^RequiredContentType
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean S3Ssl
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean SaveCookies
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SendBufferSize
	{
		int32 get();
		void set(int32);
	}
	property Boolean SendCookies
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^SessionLogFilename
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
	property Platform::String ^StreamResponseBodyPath
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Boolean UpdateCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseIEProxy
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^UserAgent
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean WasRedirected
	{
		Boolean get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddCacheRoot(Platform::String ^dir);

	Boolean AddQuickHeader(Platform::String ^name, Platform::String ^value);

	void ClearInMemoryCookies(void);

	IAsyncOperation<Boolean>^ CloseAllConnectionsAsync(void);

	void DnsCacheClear(void);

	IAsyncOperation<Boolean>^ DownloadAsync(Platform::String ^url, Platform::String ^filename);

	IAsyncOperation<Boolean>^ DownloadAppendAsync(Platform::String ^url, Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ DownloadHashAsync(Platform::String ^url, Platform::String ^hashAlgorithm, Platform::String ^encoding);

	Platform::String ^ExtractMetaRefreshUrl(Platform::String ^html);

	IAsyncOperation<Platform::String ^>^ G_SvcOauthAccessTokenAsync(Platform::String ^iss, Platform::String ^scope, Platform::String ^subEmail, int numSec, Cert ^cert);

	IAsyncOperation<Platform::String ^>^ G_SvcOauthAccessToken2Async(Hashtable ^claimParams, int numSec, Cert ^cert);

	Platform::String ^GenTimeStamp(void);

	Platform::String ^GetCacheRoot(int index);

	Platform::String ^GetCookieXml(Platform::String ^domain);

	Platform::String ^GetDomain(Platform::String ^url);

	IAsyncOperation<HttpResponse ^>^ GetHeadAsync(Platform::String ^url);

	Platform::String ^GetRequestHeader(Platform::String ^name);

	IAsyncOperation<Cert ^>^ GetServerSslCertAsync(Platform::String ^domain, int port);

	Platform::String ^GetUrlPath(Platform::String ^url);

	Boolean HasRequestHeader(Platform::String ^name);

	Boolean IsUnlocked(void);

	IAsyncOperation<HttpResponse ^>^ PBinaryAsync(Platform::String ^verb, Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip);

	IAsyncOperation<HttpResponse ^>^ PTextAsync(Platform::String ^verb, Platform::String ^url, Platform::String ^textData, Platform::String ^charset, Platform::String ^contentType, Boolean md5, Boolean gzip);

	IAsyncOperation<Platform::String ^>^ PostBinaryAsync(Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip);

	IAsyncOperation<HttpResponse ^>^ PostJsonAsync(Platform::String ^url, Platform::String ^jsonText);

	IAsyncOperation<HttpResponse ^>^ PostJson2Async(Platform::String ^url, Platform::String ^contentType, Platform::String ^jsonText);

	IAsyncOperation<HttpResponse ^>^ PostUrlEncodedAsync(Platform::String ^url, HttpRequest ^req);

	IAsyncOperation<HttpResponse ^>^ PostXmlAsync(Platform::String ^url, Platform::String ^xmlDoc, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ PutBinaryAsync(Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip);

	IAsyncOperation<Platform::String ^>^ PutTextAsync(Platform::String ^url, Platform::String ^textData, Platform::String ^charset, Platform::String ^contentType, Boolean md5, Boolean gzip);

	IAsyncOperation<Platform::String ^>^ QuickDeleteStrAsync(Platform::String ^url);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ QuickGetAsync(Platform::String ^url);

	IAsyncOperation<HttpResponse ^>^ QuickGetObjAsync(Platform::String ^url);

	IAsyncOperation<Platform::String ^>^ QuickGetStrAsync(Platform::String ^url);

	IAsyncOperation<Platform::String ^>^ QuickPutStrAsync(Platform::String ^url);

	Boolean RemoveQuickHeader(Platform::String ^name);

	void RemoveRequestHeader(Platform::String ^name);

	Platform::String ^RenderGet(Platform::String ^url);

	IAsyncOperation<Boolean>^ ResumeDownloadAsync(Platform::String ^url, Platform::String ^filename);

	IAsyncOperation<Boolean>^ S3_CreateBucketAsync(Platform::String ^bucketName);

	IAsyncOperation<Boolean>^ S3_DeleteBucketAsync(Platform::String ^bucketName);

	IAsyncOperation<HttpResponse ^>^ S3_DeleteMultipleObjectsAsync(Platform::String ^bucketName, StringArray ^objectNames);

	IAsyncOperation<Boolean>^ S3_DeleteObjectAsync(Platform::String ^bucketName, Platform::String ^objectName);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ S3_DownloadBytesAsync(Platform::String ^bucketName, Platform::String ^objectName);

	IAsyncOperation<Boolean>^ S3_DownloadFileAsync(Platform::String ^bucketName, Platform::String ^objectName, Platform::String ^localFilePath);

	IAsyncOperation<Platform::String ^>^ S3_DownloadStringAsync(Platform::String ^bucketName, Platform::String ^objectName, Platform::String ^charset);

	IAsyncOperation<int>^ S3_FileExistsAsync(Platform::String ^bucketName, Platform::String ^objectName);

	Platform::String ^S3_GenerateUrl(Platform::String ^bucket, Platform::String ^path, Chilkat::CkDateTime ^expire);

	IAsyncOperation<Platform::String ^>^ S3_ListBucketObjectsAsync(Platform::String ^bucketName);

	IAsyncOperation<Platform::String ^>^ S3_ListBucketsAsync(void);

	IAsyncOperation<Boolean>^ S3_UploadBytesAsync(Windows::Foundation::Collections::IVector<uint8>^objectContent, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^objectName);

	IAsyncOperation<Boolean>^ S3_UploadFileAsync(Platform::String ^localFilePath, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^ObjectName);

	IAsyncOperation<Boolean>^ S3_UploadStringAsync(Platform::String ^objectContent, Platform::String ^charset, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^ObjectName);

	Boolean SetCookieXml(Platform::String ^domain, Platform::String ^cookieXml);

	Boolean SetOAuthRsaKey(PrivateKey ^privKey);

	void SetRequestHeader(Platform::String ^name, Platform::String ^value);

	Boolean SetSslClientCert(Cert ^cert);

	Boolean SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword);

	Boolean SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword);

	void SleepMs(int millisec);

	IAsyncOperation<HttpResponse ^>^ SynchronousRequestAsync(Platform::String ^domain, int port, Boolean ssl, HttpRequest ^req);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Platform::String ^UrlDecode(Platform::String ^str);

	Platform::String ^UrlEncode(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ XmlRpcAsync(Platform::String ^urlEndpoint, Platform::String ^xmlIn);

	IAsyncOperation<Platform::String ^>^ XmlRpcPutAsync(Platform::String ^urlEndpoint, Platform::String ^xmlIn);



};




private class CxHttpProgress : public CkHttpProgressW
    {
	

    public:
	Chilkat::Http ^m_sender;
	CkHttpW *m_impl;
	
    private:
	 	CxHttpProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxHttpProgress(CkHttpW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxHttpProgress(void)
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








	// Now include the CkHttpProgress overrides
	void SendRate(__int64 byteCount, unsigned long bytesPerSec) 
	{ 
		if (m_sender == nullptr) return;
		
		DataRateEventArgs^ args = ref new DataRateEventArgs;
		args->ByteCount = byteCount;
		args->BytesPerSec = bytesPerSec;
		m_sender->FireSendRate(m_sender,args);
	}
	void ReceiveRate(__int64 byteCount, unsigned long bytesPerSec) 
	{ 
		if (m_sender == nullptr) return;
		
		DataRateEventArgs^ args = ref new DataRateEventArgs;
		args->ByteCount = byteCount;
		args->BytesPerSec = bytesPerSec;
		m_sender->FireReceiveRate(m_sender,args);
	}

	void HttpRedirect(const wchar_t *originalUrl, const wchar_t *redirectUrl, bool *abort) 
	{
		if (m_sender == nullptr) return;
		
		HttpRedirectEventArgs^ args = ref new HttpRedirectEventArgs;
		EVENT_ARGS_STRING(originalUrl,OriginalUrl)
		EVENT_ARGS_STRING(redirectUrl,RedirectUrl)
		args->Abort = false;	    
		m_sender->FireHttpRedirect(m_sender,args);
		if (abort) *abort = args->Abort;
	}
	
	// Called just before a chunked response is about to be received.
	// With chunked responses, it is not possible to get PercentDone callbacks because
	// the entire size of the HTTP response is not known as it is being received.
	void HttpChunked(void)
	{
		if (m_sender == nullptr) return;
		
		EventArgs^ args = ref new EventArgs;
		m_sender->FireHttpChunked(m_sender,args);
	}

	void HttpBeginReceive(void)
	{
		if (m_sender == nullptr) return;
		
		EventArgs^ args = ref new EventArgs;
		m_sender->FireHttpBeginReceive(m_sender,args);
	}
	void HttpEndReceive(bool success)
	{
		if (m_sender == nullptr) return;
		
		StatusEventArgs^ args = ref new StatusEventArgs;
		args->Success = success;
		m_sender->FireHttpEndReceive(m_sender,args);
	}
	void HttpBeginSend(void)
	{
		if (m_sender == nullptr) return;
		
		EventArgs^ args = ref new EventArgs;
		m_sender->FireHttpBeginSend(m_sender,args);
	}
	void HttpEndSend(bool success)
	{
		if (m_sender == nullptr) return;
		
		StatusEventArgs^ args = ref new StatusEventArgs;
		args->Success = success;
		m_sender->FireHttpEndSend(m_sender,args);
	}


    };







}


