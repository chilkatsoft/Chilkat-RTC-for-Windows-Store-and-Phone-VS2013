
// This header is generated for Chilkat v9.5.0

#pragma once

class CkFtp2W;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkFtp2ProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkFtp2W.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;
	ref class Cert;


public ref class Ftp2 sealed
{
#include "friendDecls.h"
		
	private:
    CkFtp2W *m_impl;

	public:
	virtual ~Ftp2(void);
	Ftp2(void);
	//Ftp2(Platform::IntPtr p);

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



	event UploadRateEventHandler ^UploadRate;
	void FireUploadRate(Object ^sender, DataRateEventArgs ^args)
		{
		UploadRate(sender,args);
		}
	event DownloadRateEventHandler ^DownloadRate;
	void FireDownloadRate(Object ^sender, DataRateEventArgs ^args)
		{
		DownloadRate(sender,args);
		}
		
	event BeginDownloadFileEventHandler ^BeginDownloadFile;
	void FireBeginDownloadFile(Object ^sender, FtpTreeEventArgs ^args)
		{
		BeginDownloadFile(sender,args);
		}

	event EndDownloadFileEventHandler ^EndDownloadFile;
	void FireEndDownloadFile(Object ^sender, FtpTreeEventArgs ^args)
		{
		EndDownloadFile(sender,args);
		}

	event VerifyDownloadDirEventHandler ^VerifyDownloadDir;
	void FireVerifyDownloadDir(Object ^sender, FtpTreeEventArgs ^args)
		{
		VerifyDownloadDir(sender,args);
		}
	event BeginUploadFileEventHandler ^BeginUploadFile;
	void FireBeginUploadFile(Object ^sender, FtpTreeEventArgs ^args)
		{
		BeginUploadFile(sender,args);
		}
	event EndUploadFileEventHandler ^EndUploadFile;
	void FireEndUploadFile(Object ^sender, FtpTreeEventArgs ^args)
		{
		EndUploadFile(sender,args);
		}
	event VerifyUploadDirEventHandler ^VerifyUploadDir;
	void FireVerifyUploadDir(Object ^sender, FtpTreeEventArgs ^args)
		{
		VerifyUploadDir(sender,args);
		}
	event VerifyDeleteFileEventHandler ^VerifyDeleteFile;
	void FireVerifyDeleteFile(Object ^sender, FtpTreeEventArgs ^args)
		{
		VerifyDeleteFile(sender,args);
		}
	event VerifyDeleteDirEventHandler ^VerifyDeleteDir;
	void FireVerifyDeleteDir(Object ^sender, FtpTreeEventArgs ^args)
		{
		VerifyDeleteDir(sender,args);
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
	property Platform::String ^Account
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ActivePortRangeEnd
	{
		int32 get();
		void set(int32);
	}
	property int32 ActivePortRangeStart
	{
		int32 get();
		void set(int32);
	}
	property uint32 AllocateSize
	{
		uint32 get();
		void set(uint32);
	}
	property Boolean AllowMlsd
	{
		Boolean get();
		void set(Boolean);
	}
	property int64 AsyncBytesReceived64
	{
		int64 get();
	}
	property int64 AsyncBytesSent64
	{
		int64 get();
	}
	property Boolean AuthSsl
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AuthTls
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoFeat
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoFix
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoGetSizeForProgress
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoOptsUtf8
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoSetUseEpsv
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoSyst
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean AutoXcrc
	{
		Boolean get();
		void set(Boolean);
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
	property Platform::String ^ClientIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CommandCharset
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
	property Boolean ConnectVerified
	{
		Boolean get();
	}
	property int32 CrlfMode
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DataProtection
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DirListingCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 DownloadTransferRate
	{
		int32 get();
	}
	property Platform::String ^ForcePortIpAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Greeting
	{
		Platform::String ^get();
	}
	property Boolean HasModeZ
	{
		Boolean get();
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
	property Boolean KeepSessionLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^LastReply
	{
		Platform::String ^get();
	}
	property Platform::String ^ListPattern
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean LoginVerified
	{
		Boolean get();
	}
	property Boolean PartialTransfer
	{
		Boolean get();
	}
	property Boolean Passive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PassiveUseHostAddr
	{
		Boolean get();
		void set(Boolean);
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
	property Boolean PreferNlst
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ProgressMonSize
	{
		int32 get();
		void set(int32);
	}
	property int64 ProgressMonSize64
	{
		int64 get();
		void set(int64);
	}
	property Platform::String ^ProxyHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ProxyMethod
	{
		int32 get();
		void set(int32);
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
	property Platform::String ^ProxyUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
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
	property Boolean RestartNext
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 SendBufferSize
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SessionLog
	{
		Platform::String ^get();
	}
	property Boolean SkipFinalReply
	{
		Boolean get();
		void set(Boolean);
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
	property Boolean SslServerCertVerified
	{
		Boolean get();
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
	property Platform::String ^SyncPreview
	{
		Platform::String ^get();
	}
	property Platform::String ^SyncedFiles
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
	property int32 UploadTransferRate
	{
		int32 get();
	}
	property Boolean UseEpsv
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Username
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ AppendFileAsync(Platform::String ^localFilename, Platform::String ^remoteFilename);

	IAsyncOperation<Boolean>^ AppendFileFromBinaryDataAsync(Platform::String ^remoteFilename, Windows::Foundation::Collections::IVector<uint8>^content);

	IAsyncOperation<Boolean>^ AppendFileFromTextDataAsync(Platform::String ^remoteFilename, Platform::String ^textData, Platform::String ^charset);

	IAsyncOperation<Boolean>^ ChangeRemoteDirAsync(Platform::String ^relativeDirPath);

	IAsyncOperation<Boolean>^ CheckConnectionAsync(void);

	IAsyncOperation<Boolean>^ ClearControlChannelAsync(void);

	void ClearDirCache(void);

	void ClearSessionLog(void);

	IAsyncOperation<Boolean>^ ConnectAsync(void);

	IAsyncOperation<Boolean>^ ConnectOnlyAsync(void);

	IAsyncOperation<Boolean>^ ConvertToTlsAsync(void);

	IAsyncOperation<Platform::String ^>^ CreatePlanAsync(Platform::String ^localDir);

	IAsyncOperation<Boolean>^ CreateRemoteDirAsync(Platform::String ^dir);

	IAsyncOperation<int>^ DeleteMatchingAsync(Platform::String ^remotePattern);

	IAsyncOperation<Boolean>^ DeleteRemoteFileAsync(Platform::String ^filename);

	IAsyncOperation<Boolean>^ DeleteTreeAsync(void);

	IAsyncOperation<int>^ DetermineProxyMethodAsync(void);

	IAsyncOperation<Platform::String ^>^ DetermineSettingsAsync(void);

	IAsyncOperation<Platform::String ^>^ DirTreeXmlAsync(void);

	IAsyncOperation<Boolean>^ DisconnectAsync(void);

	IAsyncOperation<Boolean>^ DownloadTreeAsync(Platform::String ^localRoot);

	IAsyncOperation<Platform::String ^>^ FeatAsync(void);

	IAsyncOperation<CkDateTime ^>^ GetCreateDtAsync(int index);

	IAsyncOperation<CkDateTime ^>^ GetCreateDtByNameAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetCreateTimeByNameStrAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetCreateTimeStrAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetCurrentRemoteDirAsync(void);

	IAsyncOperation<int>^ GetDirCountAsync(void);

	IAsyncOperation<Boolean>^ GetFileAsync(Platform::String ^remoteFilename, Platform::String ^localFilename);

	IAsyncOperation<Platform::String ^>^ GetFilenameAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetGroupAsync(int index);

	IAsyncOperation<Boolean>^ GetIsDirectoryAsync(int index);

	IAsyncOperation<Boolean>^ GetIsSymbolicLinkAsync(int index);

	IAsyncOperation<CkDateTime ^>^ GetLastAccessDtAsync(int index);

	IAsyncOperation<CkDateTime ^>^ GetLastAccessDtByNameAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetLastAccessTimeByNameStrAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetLastAccessTimeStrAsync(int index);

	IAsyncOperation<CkDateTime ^>^ GetLastModDtAsync(int index);

	IAsyncOperation<CkDateTime ^>^ GetLastModDtByNameAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetLastModifiedTimeByNameStrAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetLastModifiedTimeStrAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetOwnerAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetPermTypeAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetPermissionsAsync(int index);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ GetRemoteFileBinaryDataAsync(Platform::String ^remoteFilename);

	IAsyncOperation<Platform::String ^>^ GetRemoteFileTextCAsync(Platform::String ^remoteFilename, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ GetRemoteFileTextDataAsync(Platform::String ^remoteFilename);

	IAsyncOperation<int>^ GetSizeAsync(int index);

	IAsyncOperation<int64>^ GetSize64Async(int index);

	IAsyncOperation<int>^ GetSizeByNameAsync(Platform::String ^filename);

	IAsyncOperation<int64>^ GetSizeByName64Async(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ GetSizeStrAsync(int index);

	IAsyncOperation<Platform::String ^>^ GetSizeStrByNameAsync(Platform::String ^filename);

	Cert ^GetSslServerCert(void);

	IAsyncOperation<Platform::String ^>^ GetTextDirListingAsync(Platform::String ^pattern);

	IAsyncOperation<Platform::String ^>^ GetXmlDirListingAsync(Platform::String ^pattern);

	Boolean IsUnlocked(void);

	IAsyncOperation<Boolean>^ LoginAfterConnectOnlyAsync(void);

	IAsyncOperation<int>^ MGetFilesAsync(Platform::String ^remotePattern, Platform::String ^localDir);

	IAsyncOperation<int>^ MPutFilesAsync(Platform::String ^pattern);

	IAsyncOperation<Platform::String ^>^ NlstXmlAsync(Platform::String ^pattern);

	IAsyncOperation<Boolean>^ NoopAsync(void);

	IAsyncOperation<Boolean>^ PutFileAsync(Platform::String ^localFilename, Platform::String ^remoteFilename);

	IAsyncOperation<Boolean>^ PutFileFromBinaryDataAsync(Platform::String ^remoteFilename, Windows::Foundation::Collections::IVector<uint8>^content);

	IAsyncOperation<Boolean>^ PutFileFromTextDataAsync(Platform::String ^remoteFilename, Platform::String ^textData, Platform::String ^charset);

	IAsyncOperation<Boolean>^ PutPlanAsync(Platform::String ^plan, Platform::String ^alreadyDoneFilename);

	IAsyncOperation<Boolean>^ PutTreeAsync(Platform::String ^localDir);

	IAsyncOperation<Boolean>^ QuoteAsync(Platform::String ^cmd);

	IAsyncOperation<Boolean>^ RemoveRemoteDirAsync(Platform::String ^dir);

	IAsyncOperation<Boolean>^ RenameRemoteFileAsync(Platform::String ^existingFilename, Platform::String ^newFilename);

	IAsyncOperation<Platform::String ^>^ SendCommandAsync(Platform::String ^cmd);

	IAsyncOperation<Boolean>^ SetModeZAsync(void);

	void SetOldestDateStr(Platform::String ^oldestDateTimeStr);

	IAsyncOperation<Boolean>^ SetRemoteFileDateTimeStrAsync(Platform::String ^dateTimeStr, Platform::String ^remoteFilename);

	IAsyncOperation<Boolean>^ SetRemoteFileDtAsync(Chilkat::CkDateTime ^dt, Platform::String ^remoteFilename);

	void SetSslCertRequirement(Platform::String ^name, Platform::String ^value);

	Boolean SetSslClientCert(Cert ^cert);

	Boolean SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword);

	Boolean SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword);

	IAsyncOperation<Boolean>^ SetTypeAsciiAsync(void);

	IAsyncOperation<Boolean>^ SetTypeBinaryAsync(void);

	IAsyncOperation<Boolean>^ SiteAsync(Platform::String ^siteCommand);

	void SleepMs(int millisec);

	IAsyncOperation<Platform::String ^>^ StatAsync(void);

	IAsyncOperation<Boolean>^ SyncDeleteRemoteAsync(Platform::String ^localRoot);

	IAsyncOperation<Boolean>^ SyncLocalDirAsync(Platform::String ^localRoot, int mode);

	IAsyncOperation<Boolean>^ SyncLocalTreeAsync(Platform::String ^localRoot, int mode);

	IAsyncOperation<Boolean>^ SyncRemoteTreeAsync(Platform::String ^localRoot, int mode);

	IAsyncOperation<Boolean>^ SyncRemoteTree2Async(Platform::String ^localRoot, int mode, Boolean bDescend, Boolean bPreviewOnly);

	IAsyncOperation<Platform::String ^>^ SystAsync(void);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};




private class CxFtp2Progress : public CkFtp2ProgressW
    {
	

    public:
	Chilkat::Ftp2 ^m_sender;
	CkFtp2W *m_impl;
	
    private:
	 	CxFtp2Progress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxFtp2Progress(CkFtp2W *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxFtp2Progress(void)
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








	// Now include the CkFtp2Progress overrides
	void UploadRate(__int64 byteCount, unsigned long bytesPerSec) 
	{ 
		if (m_sender == nullptr) return;
		
		DataRateEventArgs^ args = ref new DataRateEventArgs;
		args->ByteCount = byteCount;
		args->BytesPerSec = bytesPerSec;
		m_sender->FireUploadRate(m_sender,args);
	}
	void DownloadRate(__int64 byteCount, unsigned long bytesPerSec) 
	{ 
		if (m_sender == nullptr) return;
		
		DataRateEventArgs^ args = ref new DataRateEventArgs;
		args->ByteCount = byteCount;
		args->BytesPerSec = bytesPerSec;
		m_sender->FireDownloadRate(m_sender,args);
	}

	void BeginDownloadFile(const wchar_t *pathUtf8, bool *skip) 
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireBeginDownloadFile(m_sender,args);
		if (skip) *skip = args->Skip;
	}
	void EndDownloadFile(const wchar_t *pathUtf8, __int64 numBytes)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = numBytes;
		args->Skip = false;
		m_sender->FireEndDownloadFile(m_sender,args);
	}
	void VerifyDownloadDir(const wchar_t *pathUtf8, bool *skip)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireVerifyDownloadDir(m_sender,args);
		if (skip) *skip = args->Skip;
	}

	void BeginUploadFile(const wchar_t *pathUtf8, bool *skip)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireBeginUploadFile(m_sender,args);
		if (skip) *skip = args->Skip;
	}
	
	void EndUploadFile(const wchar_t *pathUtf8, __int64 numBytes)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = numBytes;
		args->Skip = false;
		m_sender->FireEndUploadFile(m_sender,args);
	}
	
	void VerifyUploadDir(const wchar_t *pathUtf8, bool *skip)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireVerifyUploadDir(m_sender,args);
		if (skip) *skip = args->Skip;
	}

	void VerifyDeleteDir(const wchar_t *pathUtf8, bool *skip)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireVerifyDeleteDir(m_sender,args);
		if (skip) *skip = args->Skip;
	}
	
	void VerifyDeleteFile(const wchar_t *pathUtf8, bool *skip)
	{ 
		if (m_sender == nullptr) return;
		
		FtpTreeEventArgs^ args = ref new FtpTreeEventArgs;
		EVENT_ARGS_STRING(pathUtf8,Path)
		args->NumBytes = 0;
		args->Skip = false;
		m_sender->FireVerifyDeleteFile(m_sender,args);
		if (skip) *skip = args->Skip;
	}


    };







}


