
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSFtpW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkSFtpProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSFtpW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class SshKey;
	ref class Ssh;
	ref class CkDateTime;
	ref class SFtpDir;


public ref class SFtp sealed
{
#include "friendDecls.h"
		
	private:
    CkSFtpW *m_impl;

	public:
	virtual ~SFtp(void);
	SFtp(void);
	//SFtp(Platform::IntPtr p);

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
	property Windows::Foundation::Collections::IVector<uint8> ^AccumulateBuffer
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
	}
	property int32 AuthFailReason
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
	property Boolean EnableCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^FilenameCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ForceCipher
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean ForceV3
	{
		Boolean get();
		void set(Boolean);
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
	property Boolean IncludeDotDirs
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 InitializeFailCode
	{
		int32 get();
	}
	property Platform::String ^InitializeFailReason
	{
		Platform::String ^get();
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
	property Boolean PasswordChangeRequested
	{
		Boolean get();
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
	property Boolean PreserveDate
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ProtocolVersion
	{
		int32 get();
	}
	property Platform::String ^ReadDirMustMatch
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ReadDirMustNotMatch
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
	property Boolean TcpNoDelay
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 UploadChunkSize
	{
		int32 get();
		void set(int32);
	}
	property Boolean UtcMode
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<int>^ AccumulateBytesAsync(Platform::String ^handle, int maxBytes);

	Platform::String ^Add64(Platform::String ^n1, Platform::String ^n2);

	IAsyncOperation<Boolean>^ AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey);

	IAsyncOperation<Boolean>^ AuthenticatePwAsync(Platform::String ^login, Platform::String ^password);

	IAsyncOperation<Boolean>^ AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey);

	void ClearAccumulateBuffer(void);

	void ClearCache(void);

	void ClearSessionLog(void);

	IAsyncOperation<Boolean>^ CloseHandleAsync(Platform::String ^handle);

	IAsyncOperation<Boolean>^ ConnectAsync(Platform::String ^hostname, int port);

	IAsyncOperation<Boolean>^ ConnectThroughSshAsync(Ssh ^sshConn, Platform::String ^hostname, int port);

	IAsyncOperation<Boolean>^ CopyFileAttrAsync(Platform::String ^localFilename, Platform::String ^remoteFilename, Boolean bIsHandle);

	IAsyncOperation<Boolean>^ CreateDirAsync(Platform::String ^path);

	void Disconnect(void);

	IAsyncOperation<Boolean>^ DownloadFileAsync(Platform::String ^handle, Platform::String ^toFilename);

	IAsyncOperation<Boolean>^ DownloadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath);

	Boolean Eof(Platform::String ^handle);

	IAsyncOperation<CkDateTime ^>^ GetFileCreateDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileCreateTimeStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileGroupAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<CkDateTime ^>^ GetFileLastAccessDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileLastAccessStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<CkDateTime ^>^ GetFileLastModifiedDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileLastModifiedStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileOwnerAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<int>^ GetFilePermissionsAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<int>^ GetFileSize32Async(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<int64>^ GetFileSize64Async(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Platform::String ^>^ GetFileSizeStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle);

	IAsyncOperation<Boolean>^ InitializeSftpAsync(void);

	Boolean LastReadFailed(Platform::String ^handle);

	int LastReadNumBytes(Platform::String ^handle);

	IAsyncOperation<Platform::String ^>^ OpenDirAsync(Platform::String ^path);

	IAsyncOperation<Platform::String ^>^ OpenFileAsync(Platform::String ^filename, Platform::String ^access, Platform::String ^createDisp);

	IAsyncOperation<SFtpDir ^>^ ReadDirAsync(Platform::String ^handle);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadFileBytesAsync(Platform::String ^handle, int numBytes);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadFileBytes32Async(Platform::String ^handle, int offset, int numBytes);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadFileBytes64Async(Platform::String ^handle, int64 offset64, int numBytes);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadFileBytes64sAsync(Platform::String ^handle, Platform::String ^offset64, int numBytes);

	IAsyncOperation<Platform::String ^>^ ReadFileTextAsync(Platform::String ^handle, int numBytes, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ ReadFileText32Async(Platform::String ^handle, int offset32, int numBytes, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ ReadFileText64Async(Platform::String ^handle, int64 offset64, int numBytes, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ ReadFileText64sAsync(Platform::String ^handle, Platform::String ^offset64, int numBytes, Platform::String ^charset);

	IAsyncOperation<Platform::String ^>^ RealPathAsync(Platform::String ^originalPath, Platform::String ^composePath);

	IAsyncOperation<Boolean>^ RemoveDirAsync(Platform::String ^path);

	IAsyncOperation<Boolean>^ RemoveFileAsync(Platform::String ^filename);

	IAsyncOperation<Boolean>^ RenameFileOrDirAsync(Platform::String ^oldPath, Platform::String ^newPath);

	IAsyncOperation<Boolean>^ ResumeDownloadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath);

	IAsyncOperation<Boolean>^ ResumeUploadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath);

	IAsyncOperation<Boolean>^ SetCreateDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime);

	IAsyncOperation<Boolean>^ SetCreateTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr);

	IAsyncOperation<Boolean>^ SetLastAccessDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime);

	IAsyncOperation<Boolean>^ SetLastAccessTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr);

	IAsyncOperation<Boolean>^ SetLastModifiedDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime);

	IAsyncOperation<Boolean>^ SetLastModifiedTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr);

	IAsyncOperation<Boolean>^ SetOwnerAndGroupAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^owner, Platform::String ^group);

	IAsyncOperation<Boolean>^ SetPermissionsAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, int perm);

	IAsyncOperation<Boolean>^ SyncTreeDownloadAsync(Platform::String ^remoteRoot, Platform::String ^localRoot, int mode, Boolean recurse);

	IAsyncOperation<Boolean>^ SyncTreeUploadAsync(Platform::String ^localBaseDir, Platform::String ^remoteBaseDir, int mode, Boolean bRecurse);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<Boolean>^ UploadFileAsync(Platform::String ^handle, Platform::String ^fromFilename);

	IAsyncOperation<Boolean>^ UploadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath);

	IAsyncOperation<Boolean>^ WriteFileBytesAsync(Platform::String ^handle, Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ WriteFileBytes32Async(Platform::String ^handle, int offset, Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ WriteFileBytes64Async(Platform::String ^handle, int64 offset64, Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ WriteFileBytes64sAsync(Platform::String ^handle, Platform::String ^offset64, Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ WriteFileTextAsync(Platform::String ^handle, Platform::String ^charset, Platform::String ^textData);

	IAsyncOperation<Boolean>^ WriteFileText32Async(Platform::String ^handle, int offset32, Platform::String ^charset, Platform::String ^textData);

	IAsyncOperation<Boolean>^ WriteFileText64Async(Platform::String ^handle, int64 offset64, Platform::String ^charset, Platform::String ^textData);

	IAsyncOperation<Boolean>^ WriteFileText64sAsync(Platform::String ^handle, Platform::String ^offset64, Platform::String ^charset, Platform::String ^textData);



};




private class CxSFtpProgress : public CkSFtpProgressW
    {
	

    public:
	Chilkat::SFtp ^m_sender;
	CkSFtpW *m_impl;
	
    private:
	 	CxSFtpProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSFtpProgress(CkSFtpW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSFtpProgress(void)
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








	// Now include the CkSFtpProgress overrides
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


    };







}


