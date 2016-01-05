
// This source file is generated.

#include "pch.h"
#include "SFtp.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSFtpW.h"
		
#include "include/CkSshKeyW.h"
#include "include/CkSshW.h"
#include "include/CkSFtpDirW.h"
#include "SshKey.h"
#include "Ssh.h"
#include "CkDateTime.h"
#include "SFtpDir.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SFtp::~SFtp(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SFtp::SFtp(void) 
{
    m_impl = new CkSFtpW();
}

//Chilkat::SFtp::SFtp(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSFtpW *)x;
//    if (!m_impl) m_impl = new CkSFtpW();
//    }
//    
//Platform::IntPtr Chilkat::SFtp::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SFtp::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SFtp::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SFtp::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SFtp::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SFtp::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SFtp::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SFtp::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SFtp::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SFtp::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SFtp::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::SFtp::AccumulateBuffer::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_AccumulateBuffer(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
int Chilkat::SFtp::AuthFailReason::get()
    {
    return m_impl ? m_impl->get_AuthFailReason() : 0;
    }
int Chilkat::SFtp::BandwidthThrottleDown::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleDown() : 0;
    }
void Chilkat::SFtp::BandwidthThrottleDown::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleDown(newVal);
    }
int Chilkat::SFtp::BandwidthThrottleUp::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleUp() : 0;
    }
void Chilkat::SFtp::BandwidthThrottleUp::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleUp(newVal);
    }
String ^Chilkat::SFtp::ClientIdentifier::get()
    {
    return ref new String(m_impl ? m_impl->clientIdentifier() : L"");
    }
void Chilkat::SFtp::ClientIdentifier::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIdentifier(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::SFtp::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::SFtp::ConnectTimeoutMs::get()
    {
    return m_impl ? m_impl->get_ConnectTimeoutMs() : 0;
    }
void Chilkat::SFtp::ConnectTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeoutMs(newVal);
    }
int Chilkat::SFtp::DisconnectCode::get()
    {
    return m_impl ? m_impl->get_DisconnectCode() : 0;
    }
String ^Chilkat::SFtp::DisconnectReason::get()
    {
    return ref new String(m_impl ? m_impl->disconnectReason() : L"");
    }
Boolean Chilkat::SFtp::EnableCache::get()
    {
    return m_impl ? m_impl->get_EnableCache() : false;
    }
void Chilkat::SFtp::EnableCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EnableCache(newVal);
    }
String ^Chilkat::SFtp::FilenameCharset::get()
    {
    return ref new String(m_impl ? m_impl->filenameCharset() : L"");
    }
void Chilkat::SFtp::FilenameCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FilenameCharset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::ForceCipher::get()
    {
    return ref new String(m_impl ? m_impl->forceCipher() : L"");
    }
void Chilkat::SFtp::ForceCipher::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ForceCipher(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SFtp::ForceV3::get()
    {
    return m_impl ? m_impl->get_ForceV3() : false;
    }
void Chilkat::SFtp::ForceV3::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ForceV3(newVal);
    }
int Chilkat::SFtp::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::SFtp::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::SFtp::HostKeyAlg::get()
    {
    return ref new String(m_impl ? m_impl->hostKeyAlg() : L"");
    }
void Chilkat::SFtp::HostKeyAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HostKeyAlg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::HostKeyFingerprint::get()
    {
    return ref new String(m_impl ? m_impl->hostKeyFingerprint() : L"");
    }
String ^Chilkat::SFtp::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::SFtp::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::SFtp::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::SFtp::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::SFtp::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::SFtp::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::SFtp::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::SFtp::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::SFtp::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::SFtp::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::SFtp::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
Boolean Chilkat::SFtp::IncludeDotDirs::get()
    {
    return m_impl ? m_impl->get_IncludeDotDirs() : false;
    }
void Chilkat::SFtp::IncludeDotDirs::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IncludeDotDirs(newVal);
    }
int Chilkat::SFtp::InitializeFailCode::get()
    {
    return m_impl ? m_impl->get_InitializeFailCode() : 0;
    }
String ^Chilkat::SFtp::InitializeFailReason::get()
    {
    return ref new String(m_impl ? m_impl->initializeFailReason() : L"");
    }
Boolean Chilkat::SFtp::IsConnected::get()
    {
    return m_impl ? m_impl->get_IsConnected() : false;
    }
Boolean Chilkat::SFtp::KeepSessionLog::get()
    {
    return m_impl ? m_impl->get_KeepSessionLog() : false;
    }
void Chilkat::SFtp::KeepSessionLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepSessionLog(newVal);
    }
int Chilkat::SFtp::MaxPacketSize::get()
    {
    return m_impl ? m_impl->get_MaxPacketSize() : 0;
    }
void Chilkat::SFtp::MaxPacketSize::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxPacketSize(newVal);
    }
Boolean Chilkat::SFtp::PasswordChangeRequested::get()
    {
    return m_impl ? m_impl->get_PasswordChangeRequested() : false;
    }
int Chilkat::SFtp::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::SFtp::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
Boolean Chilkat::SFtp::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::SFtp::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
Boolean Chilkat::SFtp::PreserveDate::get()
    {
    return m_impl ? m_impl->get_PreserveDate() : false;
    }
void Chilkat::SFtp::PreserveDate::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreserveDate(newVal);
    }
int Chilkat::SFtp::ProtocolVersion::get()
    {
    return m_impl ? m_impl->get_ProtocolVersion() : 0;
    }
String ^Chilkat::SFtp::ReadDirMustMatch::get()
    {
    return ref new String(m_impl ? m_impl->readDirMustMatch() : L"");
    }
void Chilkat::SFtp::ReadDirMustMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ReadDirMustMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::ReadDirMustNotMatch::get()
    {
    return ref new String(m_impl ? m_impl->readDirMustNotMatch() : L"");
    }
void Chilkat::SFtp::ReadDirMustNotMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ReadDirMustNotMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->sessionLog() : L"");
    }
int Chilkat::SFtp::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::SFtp::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::SFtp::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::SFtp::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::SFtp::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::SFtp::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::SFtp::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::SFtp::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::SFtp::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::SFtp::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::SFtp::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::SFtp::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::SFtp::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
String ^Chilkat::SFtp::SyncMustMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustMatch() : L"");
    }
void Chilkat::SFtp::SyncMustMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SFtp::SyncMustNotMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustNotMatch() : L"");
    }
void Chilkat::SFtp::SyncMustNotMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustNotMatch(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SFtp::TcpNoDelay::get()
    {
    return m_impl ? m_impl->get_TcpNoDelay() : false;
    }
void Chilkat::SFtp::TcpNoDelay::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TcpNoDelay(newVal);
    }
int Chilkat::SFtp::UploadChunkSize::get()
    {
    return m_impl ? m_impl->get_UploadChunkSize() : 0;
    }
void Chilkat::SFtp::UploadChunkSize::set(int newVal)
    {
        if (m_impl) m_impl->put_UploadChunkSize(newVal);
    }
Boolean Chilkat::SFtp::UtcMode::get()
    {
    return m_impl ? m_impl->get_UtcMode() : false;
    }
void Chilkat::SFtp::UtcMode::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UtcMode(newVal);
    }


Boolean SFtp::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<int>^ SFtp::AccumulateBytesAsync(Platform::String ^handle, int maxBytes)
    {
return create_async([this, handle, maxBytes]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AccumulateBytes(handle ? handle->Data() : L"",maxBytes);

});
    }
Platform::String ^SFtp::Add64(Platform::String ^n1, Platform::String ^n2)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->add64(n1 ? n1->Data() : L"",n2 ? n2->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ SFtp::AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey)
    {
return create_async([this, username, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePk(username ? username->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ SFtp::AuthenticatePwAsync(Platform::String ^login, Platform::String ^password)
    {
return create_async([this, login, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePw(login ? login->Data() : L"",password ? password->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey)
    {
return create_async([this, username, password, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj2 = privateKey->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePwPk(username ? username->Data() : L"",password ? password->Data() : L"",*pObj2);

});
    }
void SFtp::ClearAccumulateBuffer(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearAccumulateBuffer();
    }
void SFtp::ClearCache(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearCache();
    }
void SFtp::ClearSessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSessionLog();
    }
IAsyncOperation<Boolean>^ SFtp::CloseHandleAsync(Platform::String ^handle)
    {
return create_async([this, handle]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CloseHandle(handle ? handle->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::ConnectAsync(Platform::String ^hostname, int port)
    {
return create_async([this, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"",port);

});
    }
IAsyncOperation<Boolean>^ SFtp::ConnectThroughSshAsync(Ssh ^sshConn, Platform::String ^hostname, int port)
    {
return create_async([this, sshConn, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (sshConn == nullptr) { return false; }
	CkSshW* pObj0 = sshConn->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConnectThroughSsh(*pObj0,hostname ? hostname->Data() : L"",port);

});
    }
IAsyncOperation<Boolean>^ SFtp::CopyFileAttrAsync(Platform::String ^localFilename, Platform::String ^remoteFilename, Boolean bIsHandle)
    {
return create_async([this, localFilename, remoteFilename, bIsHandle]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CopyFileAttr(localFilename ? localFilename->Data() : L"",remoteFilename ? remoteFilename->Data() : L"",bIsHandle);

});
    }
IAsyncOperation<Boolean>^ SFtp::CreateDirAsync(Platform::String ^path)
    {
return create_async([this, path]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateDir(path ? path->Data() : L"");

});
    }
void SFtp::Disconnect(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->Disconnect();
    }
IAsyncOperation<Boolean>^ SFtp::DownloadFileAsync(Platform::String ^handle, Platform::String ^toFilename)
    {
return create_async([this, handle, toFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadFile(handle ? handle->Data() : L"",toFilename ? toFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::DownloadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath)
    {
return create_async([this, remoteFilePath, localFilePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadFileByName(remoteFilePath ? remoteFilePath->Data() : L"",localFilePath ? localFilePath->Data() : L"");

});
    }
Boolean SFtp::Eof(Platform::String ^handle)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Eof(handle ? handle->Data() : L"");
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ SFtp::GetFileCreateDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetFileCreateDt(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileCreateTimeStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileCreateTimeStr(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileGroupAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileGroup(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ SFtp::GetFileLastAccessDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetFileLastAccessDt(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileLastAccessStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileLastAccessStr(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ SFtp::GetFileLastModifiedDtAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetFileLastModifiedDt(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileLastModifiedStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileLastModifiedStr(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileOwnerAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileOwner(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<int>^ SFtp::GetFilePermissionsAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetFilePermissions(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);

});
    }
IAsyncOperation<int>^ SFtp::GetFileSize32Async(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetFileSize32(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);

});
    }
IAsyncOperation<int64>^ SFtp::GetFileSize64Async(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> int64
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int64
	// cppType = __int64
	return m_impl->GetFileSize64(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::GetFileSizeStrAsync(Platform::String ^filenameOrHandle, Boolean bFollowLinks, Boolean bIsHandle)
    {
return create_async([this, filenameOrHandle, bFollowLinks, bIsHandle]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFileSizeStr(filenameOrHandle ? filenameOrHandle->Data() : L"",bFollowLinks,bIsHandle);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ SFtp::InitializeSftpAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->InitializeSftp();

});
    }
Boolean SFtp::LastReadFailed(Platform::String ^handle)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LastReadFailed(handle ? handle->Data() : L"");
    }
int SFtp::LastReadNumBytes(Platform::String ^handle)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->LastReadNumBytes(handle ? handle->Data() : L"");
    }
IAsyncOperation<Platform::String ^>^ SFtp::OpenDirAsync(Platform::String ^path)
    {
return create_async([this, path]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openDir(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::OpenFileAsync(Platform::String ^filename, Platform::String ^access, Platform::String ^createDisp)
    {
return create_async([this, filename, access, createDisp]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openFile(filename ? filename->Data() : L"",access ? access->Data() : L"",createDisp ? createDisp->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<SFtpDir ^>^ SFtp::ReadDirAsync(Platform::String ^handle)
    {
return create_async([this, handle]() -> SFtpDir ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = SFtpDir
	// cppType = CkSFtpDir *
	CkSFtpDirW *pRetObj = m_impl->ReadDir(handle ? handle->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::SFtpDir ^pSFtpDir = ref new Chilkat::SFtpDir();
	pSFtpDir->m_impl = pRetObj;
	return pSFtpDir;

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SFtp::ReadFileBytesAsync(Platform::String ^handle, int numBytes)
    {
return create_async([this, handle, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFileBytes(handle ? handle->Data() : L"",numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SFtp::ReadFileBytes32Async(Platform::String ^handle, int offset, int numBytes)
    {
return create_async([this, handle, offset, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFileBytes32(handle ? handle->Data() : L"",offset,numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SFtp::ReadFileBytes64Async(Platform::String ^handle, int64 offset64, int numBytes)
    {
return create_async([this, handle, offset64, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFileBytes64(handle ? handle->Data() : L"",offset64,numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ SFtp::ReadFileBytes64sAsync(Platform::String ^handle, Platform::String ^offset64, int numBytes)
    {
return create_async([this, handle, offset64, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFileBytes64s(handle ? handle->Data() : L"",offset64 ? offset64->Data() : L"",numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::ReadFileTextAsync(Platform::String ^handle, int numBytes, Platform::String ^charset)
    {
return create_async([this, handle, numBytes, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileText(handle ? handle->Data() : L"",numBytes,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::ReadFileText32Async(Platform::String ^handle, int offset32, int numBytes, Platform::String ^charset)
    {
return create_async([this, handle, offset32, numBytes, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileText32(handle ? handle->Data() : L"",offset32,numBytes,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::ReadFileText64Async(Platform::String ^handle, int64 offset64, int numBytes, Platform::String ^charset)
    {
return create_async([this, handle, offset64, numBytes, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileText64(handle ? handle->Data() : L"",offset64,numBytes,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::ReadFileText64sAsync(Platform::String ^handle, Platform::String ^offset64, int numBytes, Platform::String ^charset)
    {
return create_async([this, handle, offset64, numBytes, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileText64s(handle ? handle->Data() : L"",offset64 ? offset64->Data() : L"",numBytes,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ SFtp::RealPathAsync(Platform::String ^originalPath, Platform::String ^composePath)
    {
return create_async([this, originalPath, composePath]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->realPath(originalPath ? originalPath->Data() : L"",composePath ? composePath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ SFtp::RemoveDirAsync(Platform::String ^path)
    {
return create_async([this, path]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveDir(path ? path->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::RemoveFileAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveFile(filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::RenameFileOrDirAsync(Platform::String ^oldPath, Platform::String ^newPath)
    {
return create_async([this, oldPath, newPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RenameFileOrDir(oldPath ? oldPath->Data() : L"",newPath ? newPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::ResumeDownloadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath)
    {
return create_async([this, remoteFilePath, localFilePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ResumeDownloadFileByName(remoteFilePath ? remoteFilePath->Data() : L"",localFilePath ? localFilePath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::ResumeUploadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath)
    {
return create_async([this, remoteFilePath, localFilePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ResumeUploadFileByName(remoteFilePath ? remoteFilePath->Data() : L"",localFilePath ? localFilePath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::SetCreateDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime)
    {
return create_async([this, pathOrHandle, bIsHandle, createTime]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (createTime == nullptr) { return false; }
	CkDateTimeW* pObj2 = createTime->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetCreateDt(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,*pObj2);

});
    }
IAsyncOperation<Boolean>^ SFtp::SetCreateTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr)
    {
return create_async([this, pathOrHandle, bIsHandle, dateTimeStr]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetCreateTimeStr(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,dateTimeStr ? dateTimeStr->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::SetLastAccessDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime)
    {
return create_async([this, pathOrHandle, bIsHandle, createTime]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (createTime == nullptr) { return false; }
	CkDateTimeW* pObj2 = createTime->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetLastAccessDt(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,*pObj2);

});
    }
IAsyncOperation<Boolean>^ SFtp::SetLastAccessTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr)
    {
return create_async([this, pathOrHandle, bIsHandle, dateTimeStr]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetLastAccessTimeStr(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,dateTimeStr ? dateTimeStr->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::SetLastModifiedDtAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Chilkat::CkDateTime ^createTime)
    {
return create_async([this, pathOrHandle, bIsHandle, createTime]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (createTime == nullptr) { return false; }
	CkDateTimeW* pObj2 = createTime->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetLastModifiedDt(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,*pObj2);

});
    }
IAsyncOperation<Boolean>^ SFtp::SetLastModifiedTimeStrAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^dateTimeStr)
    {
return create_async([this, pathOrHandle, bIsHandle, dateTimeStr]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetLastModifiedTimeStr(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,dateTimeStr ? dateTimeStr->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::SetOwnerAndGroupAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, Platform::String ^owner, Platform::String ^group)
    {
return create_async([this, pathOrHandle, bIsHandle, owner, group]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetOwnerAndGroup(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,owner ? owner->Data() : L"",group ? group->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::SetPermissionsAsync(Platform::String ^pathOrHandle, Boolean bIsHandle, int perm)
    {
return create_async([this, pathOrHandle, bIsHandle, perm]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetPermissions(pathOrHandle ? pathOrHandle->Data() : L"",bIsHandle,perm);

});
    }
IAsyncOperation<Boolean>^ SFtp::SyncTreeDownloadAsync(Platform::String ^remoteRoot, Platform::String ^localRoot, int mode, Boolean recurse)
    {
return create_async([this, remoteRoot, localRoot, mode, recurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncTreeDownload(remoteRoot ? remoteRoot->Data() : L"",localRoot ? localRoot->Data() : L"",mode,recurse);

});
    }
IAsyncOperation<Boolean>^ SFtp::SyncTreeUploadAsync(Platform::String ^localBaseDir, Platform::String ^remoteBaseDir, int mode, Boolean bRecurse)
    {
return create_async([this, localBaseDir, remoteBaseDir, mode, bRecurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncTreeUpload(localBaseDir ? localBaseDir->Data() : L"",remoteBaseDir ? remoteBaseDir->Data() : L"",mode,bRecurse);

});
    }
Boolean SFtp::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ SFtp::UploadFileAsync(Platform::String ^handle, Platform::String ^fromFilename)
    {
return create_async([this, handle, fromFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadFile(handle ? handle->Data() : L"",fromFilename ? fromFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::UploadFileByNameAsync(Platform::String ^remoteFilePath, Platform::String ^localFilePath)
    {
return create_async([this, remoteFilePath, localFilePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadFileByName(remoteFilePath ? remoteFilePath->Data() : L"",localFilePath ? localFilePath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileBytesAsync(Platform::String ^handle, Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, handle, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (data != nullptr) { v1 = to_vector(data);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileBytes(handle ? handle->Data() : L"",db1);

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileBytes32Async(Platform::String ^handle, int offset, Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, handle, offset, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (data != nullptr) { v2 = to_vector(data);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileBytes32(handle ? handle->Data() : L"",offset,db2);

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileBytes64Async(Platform::String ^handle, int64 offset64, Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, handle, offset64, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (data != nullptr) { v2 = to_vector(data);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileBytes64(handle ? handle->Data() : L"",offset64,db2);

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileBytes64sAsync(Platform::String ^handle, Platform::String ^offset64, Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, handle, offset64, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (data != nullptr) { v2 = to_vector(data);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileBytes64s(handle ? handle->Data() : L"",offset64 ? offset64->Data() : L"",db2);

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileTextAsync(Platform::String ^handle, Platform::String ^charset, Platform::String ^textData)
    {
return create_async([this, handle, charset, textData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileText(handle ? handle->Data() : L"",charset ? charset->Data() : L"",textData ? textData->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileText32Async(Platform::String ^handle, int offset32, Platform::String ^charset, Platform::String ^textData)
    {
return create_async([this, handle, offset32, charset, textData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileText32(handle ? handle->Data() : L"",offset32,charset ? charset->Data() : L"",textData ? textData->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileText64Async(Platform::String ^handle, int64 offset64, Platform::String ^charset, Platform::String ^textData)
    {
return create_async([this, handle, offset64, charset, textData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileText64(handle ? handle->Data() : L"",offset64,charset ? charset->Data() : L"",textData ? textData->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SFtp::WriteFileText64sAsync(Platform::String ^handle, Platform::String ^offset64, Platform::String ^charset, Platform::String ^textData)
    {
return create_async([this, handle, offset64, charset, textData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSFtpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFileText64s(handle ? handle->Data() : L"",offset64 ? offset64->Data() : L"",charset ? charset->Data() : L"",textData ? textData->Data() : L"");

});
    }




