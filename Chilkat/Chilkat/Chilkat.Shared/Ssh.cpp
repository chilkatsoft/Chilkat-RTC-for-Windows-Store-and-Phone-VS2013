
// This source file is generated.

#include "pch.h"
#include "Ssh.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSshW.h"
		
#include "include/CkSshKeyW.h"
#include "include/CkStringArrayW.h"
#include "SshKey.h"
#include "StringArray.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Ssh::~Ssh(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Ssh::Ssh(void) 
{
    m_impl = new CkSshW();
}

//Chilkat::Ssh::Ssh(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSshW *)x;
//    if (!m_impl) m_impl = new CkSshW();
//    }
//    
//Platform::IntPtr Chilkat::Ssh::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Ssh::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Ssh::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Ssh::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Ssh::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Ssh::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Ssh::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ssh::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Ssh::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Ssh::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Ssh::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Ssh::AuthFailReason::get()
    {
    return m_impl ? m_impl->get_AuthFailReason() : 0;
    }
Boolean Chilkat::Ssh::CaretControl::get()
    {
    return m_impl ? m_impl->get_CaretControl() : false;
    }
void Chilkat::Ssh::CaretControl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CaretControl(newVal);
    }
int Chilkat::Ssh::ChannelOpenFailCode::get()
    {
    return m_impl ? m_impl->get_ChannelOpenFailCode() : 0;
    }
String ^Chilkat::Ssh::ChannelOpenFailReason::get()
    {
    return ref new String(m_impl ? m_impl->channelOpenFailReason() : L"");
    }
String ^Chilkat::Ssh::ClientIdentifier::get()
    {
    return ref new String(m_impl ? m_impl->clientIdentifier() : L"");
    }
void Chilkat::Ssh::ClientIdentifier::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIdentifier(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Ssh::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::ConnectTimeoutMs::get()
    {
    return m_impl ? m_impl->get_ConnectTimeoutMs() : 0;
    }
void Chilkat::Ssh::ConnectTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeoutMs(newVal);
    }
int Chilkat::Ssh::DisconnectCode::get()
    {
    return m_impl ? m_impl->get_DisconnectCode() : 0;
    }
String ^Chilkat::Ssh::DisconnectReason::get()
    {
    return ref new String(m_impl ? m_impl->disconnectReason() : L"");
    }
String ^Chilkat::Ssh::ForceCipher::get()
    {
    return ref new String(m_impl ? m_impl->forceCipher() : L"");
    }
void Chilkat::Ssh::ForceCipher::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ForceCipher(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Ssh::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Ssh::HostKeyAlg::get()
    {
    return ref new String(m_impl ? m_impl->hostKeyAlg() : L"");
    }
void Chilkat::Ssh::HostKeyAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HostKeyAlg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::HostKeyFingerprint::get()
    {
    return ref new String(m_impl ? m_impl->hostKeyFingerprint() : L"");
    }
String ^Chilkat::Ssh::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::Ssh::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::Ssh::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::Ssh::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::Ssh::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::Ssh::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::Ssh::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::Ssh::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::Ssh::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
Boolean Chilkat::Ssh::IsConnected::get()
    {
    return m_impl ? m_impl->get_IsConnected() : false;
    }
Boolean Chilkat::Ssh::KeepSessionLog::get()
    {
    return m_impl ? m_impl->get_KeepSessionLog() : false;
    }
void Chilkat::Ssh::KeepSessionLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepSessionLog(newVal);
    }
int Chilkat::Ssh::MaxPacketSize::get()
    {
    return m_impl ? m_impl->get_MaxPacketSize() : 0;
    }
void Chilkat::Ssh::MaxPacketSize::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxPacketSize(newVal);
    }
int Chilkat::Ssh::NumOpenChannels::get()
    {
    return m_impl ? m_impl->get_NumOpenChannels() : 0;
    }
Boolean Chilkat::Ssh::PasswordChangeRequested::get()
    {
    return m_impl ? m_impl->get_PasswordChangeRequested() : false;
    }
Boolean Chilkat::Ssh::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Ssh::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
int Chilkat::Ssh::ReadTimeoutMs::get()
    {
    return m_impl ? m_impl->get_ReadTimeoutMs() : 0;
    }
void Chilkat::Ssh::ReadTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeoutMs(newVal);
    }
String ^Chilkat::Ssh::ReqExecCharset::get()
    {
    return ref new String(m_impl ? m_impl->reqExecCharset() : L"");
    }
void Chilkat::Ssh::ReqExecCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ReqExecCharset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->sessionLog() : L"");
    }
int Chilkat::Ssh::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::Ssh::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::Ssh::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::Ssh::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::Ssh::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Ssh::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ssh::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Ssh::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Ssh::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Ssh::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Ssh::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ssh::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Ssh::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::Ssh::StderrToStdout::get()
    {
    return m_impl ? m_impl->get_StderrToStdout() : false;
    }
void Chilkat::Ssh::StderrToStdout::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StderrToStdout(newVal);
    }
Boolean Chilkat::Ssh::TcpNoDelay::get()
    {
    return m_impl ? m_impl->get_TcpNoDelay() : false;
    }
void Chilkat::Ssh::TcpNoDelay::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TcpNoDelay(newVal);
    }
String ^Chilkat::Ssh::UserAuthBanner::get()
    {
    return ref new String(m_impl ? m_impl->userAuthBanner() : L"");
    }
void Chilkat::Ssh::UserAuthBanner::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserAuthBanner(newVal ? newVal->Data() : L"");
    }


Boolean Ssh::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ Ssh::AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey)
    {
return create_async([this, username, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePk(username ? username->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ Ssh::AuthenticatePwAsync(Platform::String ^login, Platform::String ^password)
    {
return create_async([this, login, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePw(login ? login->Data() : L"",password ? password->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ssh::AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey)
    {
return create_async([this, username, password, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj2 = privateKey->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePwPk(username ? username->Data() : L"",password ? password->Data() : L"",*pObj2);

});
    }
Boolean Ssh::ChannelIsOpen(int channelNum)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelIsOpen(channelNum);
    }
IAsyncOperation<int>^ Ssh::ChannelPollAsync(int channelNum, int pollTimeoutMs)
    {
return create_async([this, channelNum, pollTimeoutMs]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ChannelPoll(channelNum,pollTimeoutMs);

});
    }
IAsyncOperation<int>^ Ssh::ChannelReadAsync(int channelNum)
    {
return create_async([this, channelNum]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ChannelRead(channelNum);

});
    }
IAsyncOperation<int>^ Ssh::ChannelReadAndPollAsync(int channelNum, int pollTimeoutMs)
    {
return create_async([this, channelNum, pollTimeoutMs]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ChannelReadAndPoll(channelNum,pollTimeoutMs);

});
    }
IAsyncOperation<int>^ Ssh::ChannelReadAndPoll2Async(int channelNum, int pollTimeoutMs, int maxNumBytes)
    {
return create_async([this, channelNum, pollTimeoutMs, maxNumBytes]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ChannelReadAndPoll2(channelNum,pollTimeoutMs,maxNumBytes);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelReceiveToCloseAsync(int channelNum)
    {
return create_async([this, channelNum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceiveToClose(channelNum);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelReceiveUntilMatchAsync(int channelNum, Platform::String ^matchPattern, Platform::String ^charset, Boolean caseSensitive)
    {
return create_async([this, channelNum, matchPattern, charset, caseSensitive]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceiveUntilMatch(channelNum,matchPattern ? matchPattern->Data() : L"",charset ? charset->Data() : L"",caseSensitive);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelReceiveUntilMatchNAsync(int channelNum, StringArray ^matchPatterns, Platform::String ^charset, Boolean caseSensitive)
    {
return create_async([this, channelNum, matchPatterns, charset, caseSensitive]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (matchPatterns == nullptr) { return false; }
	CkStringArrayW* pObj1 = matchPatterns->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceiveUntilMatchN(channelNum,*pObj1,charset ? charset->Data() : L"",caseSensitive);

});
    }
Boolean Ssh::ChannelReceivedClose(int channelNum)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceivedClose(channelNum);
    }
Boolean Ssh::ChannelReceivedEof(int channelNum)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceivedEof(channelNum);
    }
Boolean Ssh::ChannelReceivedExitStatus(int channelNum)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelReceivedExitStatus(channelNum);
    }
void Ssh::ChannelRelease(int channelNum)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ChannelRelease(channelNum);
    }
IAsyncOperation<Boolean>^ Ssh::ChannelSendCloseAsync(int channelNum)
    {
return create_async([this, channelNum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelSendClose(channelNum);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelSendDataAsync(int channelNum, Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, channelNum, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (data != nullptr) { v1 = to_vector(data);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelSendData(channelNum,db1);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelSendEofAsync(int channelNum)
    {
return create_async([this, channelNum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelSendEof(channelNum);

});
    }
IAsyncOperation<Boolean>^ Ssh::ChannelSendStringAsync(int channelNum, Platform::String ^strData, Platform::String ^charset)
    {
return create_async([this, channelNum, strData, charset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChannelSendString(channelNum,strData ? strData->Data() : L"",charset ? charset->Data() : L"");

});
    }
Boolean Ssh::CheckConnection(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CheckConnection();
    }
void Ssh::ClearTtyModes(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearTtyModes();
    }
IAsyncOperation<Boolean>^ Ssh::ConnectAsync(Platform::String ^hostname, int port)
    {
return create_async([this, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"",port);

});
    }
IAsyncOperation<Boolean>^ Ssh::ConnectThroughSshAsync(Ssh ^ssh, Platform::String ^hostname, int port)
    {
return create_async([this, ssh, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (ssh == nullptr) { return false; }
	CkSshW* pObj0 = ssh->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConnectThroughSsh(*pObj0,hostname ? hostname->Data() : L"",port);

});
    }
IAsyncOperation<Platform::String ^>^ Ssh::ContinueKeyboardAuthAsync(Platform::String ^response)
    {
return create_async([this, response]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->continueKeyboardAuth(response ? response->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
void Ssh::Disconnect(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->Disconnect();
    }
int Ssh::GetChannelExitStatus(int channelNum)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetChannelExitStatus(channelNum);
    }
int Ssh::GetChannelNumber(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetChannelNumber(index);
    }
Platform::String ^Ssh::GetChannelType(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getChannelType(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Ssh::GetReceivedData(int channelNum)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetReceivedData(channelNum,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Ssh::GetReceivedDataN(int channelNum, int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetReceivedDataN(channelNum,numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
int Ssh::GetReceivedNumBytes(int channelNum)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetReceivedNumBytes(channelNum);
    }
Windows::Foundation::Collections::IVector<uint8>^Ssh::GetReceivedStderr(int channelNum)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetReceivedStderr(channelNum,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Ssh::GetReceivedStderrText(int channelNum, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReceivedStderrText(channelNum,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ssh::GetReceivedText(int channelNum, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReceivedText(channelNum,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ssh::GetReceivedTextS(int channelNum, Platform::String ^substr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReceivedTextS(channelNum,substr ? substr->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<int>^ Ssh::OpenCustomChannelAsync(Platform::String ^channelType)
    {
return create_async([this, channelType]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->OpenCustomChannel(channelType ? channelType->Data() : L"");

});
    }
IAsyncOperation<int>^ Ssh::OpenDirectTcpIpChannelAsync(Platform::String ^hostname, int port)
    {
return create_async([this, hostname, port]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->OpenDirectTcpIpChannel(hostname ? hostname->Data() : L"",port);

});
    }
IAsyncOperation<int>^ Ssh::OpenSessionChannelAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->OpenSessionChannel();

});
    }
Platform::String ^Ssh::PeekReceivedText(int channelNum, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->peekReceivedText(channelNum,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Ssh::ReKeyAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReKey();

});
    }
IAsyncOperation<Boolean>^ Ssh::SendIgnoreAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendIgnore();

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqExecAsync(int channelNum, Platform::String ^command)
    {
return create_async([this, channelNum, command]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqExec(channelNum,command ? command->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqPtyAsync(int channelNum, Platform::String ^xTermEnvVar, int widthInChars, int heightInRows, int pixWidth, int pixHeight)
    {
return create_async([this, channelNum, xTermEnvVar, widthInChars, heightInRows, pixWidth, pixHeight]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqPty(channelNum,xTermEnvVar ? xTermEnvVar->Data() : L"",widthInChars,heightInRows,pixWidth,pixHeight);

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqSetEnvAsync(int channelNum, Platform::String ^name, Platform::String ^value)
    {
return create_async([this, channelNum, name, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqSetEnv(channelNum,name ? name->Data() : L"",value ? value->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqShellAsync(int channelNum)
    {
return create_async([this, channelNum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqShell(channelNum);

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqSignalAsync(int channelNum, Platform::String ^signalName)
    {
return create_async([this, channelNum, signalName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqSignal(channelNum,signalName ? signalName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqSubsystemAsync(int channelNum, Platform::String ^subsystemName)
    {
return create_async([this, channelNum, subsystemName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqSubsystem(channelNum,subsystemName ? subsystemName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqWindowChangeAsync(int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight)
    {
return create_async([this, channelNum, widthInChars, heightInRows, pixWidth, pixHeight]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqWindowChange(channelNum,widthInChars,heightInRows,pixWidth,pixHeight);

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqX11ForwardingAsync(int channelNum, Boolean singleConnection, Platform::String ^authProt, Platform::String ^authCookie, int screenNum)
    {
return create_async([this, channelNum, singleConnection, authProt, authCookie, screenNum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqX11Forwarding(channelNum,singleConnection,authProt ? authProt->Data() : L"",authCookie ? authCookie->Data() : L"",screenNum);

});
    }
IAsyncOperation<Boolean>^ Ssh::SendReqXonXoffAsync(int channelNum, Boolean clientCanDo)
    {
return create_async([this, channelNum, clientCanDo]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendReqXonXoff(channelNum,clientCanDo);

});
    }
Boolean Ssh::SetTtyMode(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetTtyMode(name ? name->Data() : L"",value);
    }
IAsyncOperation<Platform::String ^>^ Ssh::StartKeyboardAuthAsync(Platform::String ^login)
    {
return create_async([this, login]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->startKeyboardAuth(login ? login->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Ssh::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<int>^ Ssh::WaitForChannelMessageAsync(int pollTimeoutMs)
    {
return create_async([this, pollTimeoutMs]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSshProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->WaitForChannelMessage(pollTimeoutMs);

});
    }




