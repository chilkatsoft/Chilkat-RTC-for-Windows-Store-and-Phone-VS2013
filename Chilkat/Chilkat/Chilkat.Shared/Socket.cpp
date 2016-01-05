
// This source file is generated.

#include "pch.h"
#include "Socket.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSocketW.h"
		
#include "include/CkCertW.h"
#include "include/CkSshKeyW.h"
#include "include/CkSshW.h"
#include "Cert.h"
#include "SshKey.h"
#include "Ssh.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Socket::~Socket(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Socket::Socket(void) 
{
    m_impl = new CkSocketW();
}

//Chilkat::Socket::Socket(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSocketW *)x;
//    if (!m_impl) m_impl = new CkSocketW();
//    }
//    
//Platform::IntPtr Chilkat::Socket::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Socket::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Socket::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Socket::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Socket::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Socket::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Socket::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Socket::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Socket::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Socket::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Socket::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Socket::AcceptFailReason::get()
    {
    return m_impl ? m_impl->get_AcceptFailReason() : 0;
    }
int Chilkat::Socket::BandwidthThrottleDown::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleDown() : 0;
    }
void Chilkat::Socket::BandwidthThrottleDown::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleDown(newVal);
    }
int Chilkat::Socket::BandwidthThrottleUp::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleUp() : 0;
    }
void Chilkat::Socket::BandwidthThrottleUp::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleUp(newVal);
    }
Boolean Chilkat::Socket::BigEndian::get()
    {
    return m_impl ? m_impl->get_BigEndian() : false;
    }
void Chilkat::Socket::BigEndian::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_BigEndian(newVal);
    }
String ^Chilkat::Socket::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Socket::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::Socket::ClientPort::get()
    {
    return m_impl ? m_impl->get_ClientPort() : 0;
    }
void Chilkat::Socket::ClientPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ClientPort(newVal);
    }
int Chilkat::Socket::ConnectFailReason::get()
    {
    return m_impl ? m_impl->get_ConnectFailReason() : 0;
    }
int Chilkat::Socket::ElapsedSeconds::get()
    {
    return m_impl ? m_impl->get_ElapsedSeconds() : 0;
    }
int Chilkat::Socket::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Socket::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Socket::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::Socket::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::Socket::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::Socket::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::Socket::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Socket::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::Socket::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::Socket::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::Socket::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Socket::IsConnected::get()
    {
    return m_impl ? m_impl->get_IsConnected() : false;
    }
Boolean Chilkat::Socket::KeepAlive::get()
    {
    return m_impl ? m_impl->get_KeepAlive() : false;
    }
void Chilkat::Socket::KeepAlive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepAlive(newVal);
    }
Boolean Chilkat::Socket::KeepSessionLog::get()
    {
    return m_impl ? m_impl->get_KeepSessionLog() : false;
    }
void Chilkat::Socket::KeepSessionLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepSessionLog(newVal);
    }
Boolean Chilkat::Socket::LastMethodFailed::get()
    {
    return m_impl ? m_impl->get_LastMethodFailed() : false;
    }
Boolean Chilkat::Socket::ListenIpv6::get()
    {
    return m_impl ? m_impl->get_ListenIpv6() : false;
    }
void Chilkat::Socket::ListenIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ListenIpv6(newVal);
    }
String ^Chilkat::Socket::LocalIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->localIpAddress() : L"");
    }
int Chilkat::Socket::LocalPort::get()
    {
    return m_impl ? m_impl->get_LocalPort() : 0;
    }
int Chilkat::Socket::MaxReadIdleMs::get()
    {
    return m_impl ? m_impl->get_MaxReadIdleMs() : 0;
    }
void Chilkat::Socket::MaxReadIdleMs::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxReadIdleMs(newVal);
    }
int Chilkat::Socket::MaxSendIdleMs::get()
    {
    return m_impl ? m_impl->get_MaxSendIdleMs() : 0;
    }
void Chilkat::Socket::MaxSendIdleMs::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxSendIdleMs(newVal);
    }
String ^Chilkat::Socket::MyIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->myIpAddress() : L"");
    }
int Chilkat::Socket::NumReceivedClientCerts::get()
    {
    return m_impl ? m_impl->get_NumReceivedClientCerts() : 0;
    }
int Chilkat::Socket::NumSslAcceptableClientCAs::get()
    {
    return m_impl ? m_impl->get_NumSslAcceptableClientCAs() : 0;
    }
int Chilkat::Socket::ObjectId::get()
    {
    return m_impl ? m_impl->get_ObjectId() : 0;
    }
int Chilkat::Socket::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Socket::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
Boolean Chilkat::Socket::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Socket::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
int Chilkat::Socket::ReceiveFailReason::get()
    {
    return m_impl ? m_impl->get_ReceiveFailReason() : 0;
    }
int Chilkat::Socket::ReceivePacketSize::get()
    {
    return m_impl ? m_impl->get_ReceivePacketSize() : 0;
    }
void Chilkat::Socket::ReceivePacketSize::set(int newVal)
    {
        if (m_impl) m_impl->put_ReceivePacketSize(newVal);
    }
int Chilkat::Socket::ReceivedCount::get()
    {
    return m_impl ? m_impl->get_ReceivedCount() : 0;
    }
void Chilkat::Socket::ReceivedCount::set(int newVal)
    {
        if (m_impl) m_impl->put_ReceivedCount(newVal);
    }
int Chilkat::Socket::ReceivedInt::get()
    {
    return m_impl ? m_impl->get_ReceivedInt() : 0;
    }
void Chilkat::Socket::ReceivedInt::set(int newVal)
    {
        if (m_impl) m_impl->put_ReceivedInt(newVal);
    }
String ^Chilkat::Socket::RemoteIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->remoteIpAddress() : L"");
    }
int Chilkat::Socket::RemotePort::get()
    {
    return m_impl ? m_impl->get_RemotePort() : 0;
    }
Boolean Chilkat::Socket::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::Socket::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
int Chilkat::Socket::SendFailReason::get()
    {
    return m_impl ? m_impl->get_SendFailReason() : 0;
    }
int Chilkat::Socket::SendPacketSize::get()
    {
    return m_impl ? m_impl->get_SendPacketSize() : 0;
    }
void Chilkat::Socket::SendPacketSize::set(int newVal)
    {
        if (m_impl) m_impl->put_SendPacketSize(newVal);
    }
String ^Chilkat::Socket::SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->sessionLog() : L"");
    }
String ^Chilkat::Socket::SessionLogEncoding::get()
    {
    return ref new String(m_impl ? m_impl->sessionLogEncoding() : L"");
    }
void Chilkat::Socket::SessionLogEncoding::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SessionLogEncoding(newVal ? newVal->Data() : L"");
    }
int Chilkat::Socket::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::Socket::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
Boolean Chilkat::Socket::SoReuseAddr::get()
    {
    return m_impl ? m_impl->get_SoReuseAddr() : false;
    }
void Chilkat::Socket::SoReuseAddr::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SoReuseAddr(newVal);
    }
int Chilkat::Socket::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::Socket::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::Socket::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Socket::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Socket::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Socket::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Socket::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Socket::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Socket::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Socket::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Socket::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::Socket::Ssl::get()
    {
    return m_impl ? m_impl->get_Ssl() : false;
    }
void Chilkat::Socket::Ssl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Ssl(newVal);
    }
String ^Chilkat::Socket::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::Socket::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::Socket::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::StringCharset::get()
    {
    return ref new String(m_impl ? m_impl->stringCharset() : L"");
    }
void Chilkat::Socket::StringCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_StringCharset(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Socket::TcpNoDelay::get()
    {
    return m_impl ? m_impl->get_TcpNoDelay() : false;
    }
void Chilkat::Socket::TcpNoDelay::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TcpNoDelay(newVal);
    }
String ^Chilkat::Socket::TlsCipherSuite::get()
    {
    return ref new String(m_impl ? m_impl->tlsCipherSuite() : L"");
    }
String ^Chilkat::Socket::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::Socket::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Socket::TlsVersion::get()
    {
    return ref new String(m_impl ? m_impl->tlsVersion() : L"");
    }
String ^Chilkat::Socket::UserData::get()
    {
    return ref new String(m_impl ? m_impl->userData() : L"");
    }
void Chilkat::Socket::UserData::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserData(newVal ? newVal->Data() : L"");
    }


Boolean Socket::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Socket ^>^ Socket::AcceptNextConnectionAsync(int maxWaitMs)
    {
return create_async([this, maxWaitMs]() -> Socket ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Socket
	// cppType = CkSocket *
	CkSocketW *pRetObj = m_impl->AcceptNextConnection(maxWaitMs);
	if (!pRetObj) return nullptr;
	Chilkat::Socket ^pSocket = ref new Chilkat::Socket();
	pSocket->m_impl = pRetObj;
	return pSocket;

});
    }
Boolean Socket::AddSslAcceptableClientCaDn(Platform::String ^certAuthDN)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddSslAcceptableClientCaDn(certAuthDN ? certAuthDN->Data() : L"");
    }
Boolean Socket::BindAndListen(int port, int backlog)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->BindAndListen(port,backlog);
    }
Platform::String ^Socket::BuildHttpGetRequest(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->buildHttpGetRequest(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<int>^ Socket::CheckWriteableAsync(int maxWaitMs)
    {
return create_async([this, maxWaitMs]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->CheckWriteable(maxWaitMs);

});
    }
void Socket::ClearSessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSessionLog();
    }
Socket ^Socket::CloneSocket(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Socket
	// cppType = CkSocket *
	CkSocketW *pRetObj = m_impl->CloneSocket();
	if (!pRetObj) return nullptr;
	Chilkat::Socket ^pSocket = ref new Chilkat::Socket();
	pSocket->m_impl = pRetObj;
	return pSocket;
    }
IAsyncOperation<Boolean>^ Socket::CloseAsync(int maxWaitMs)
    {
return create_async([this, maxWaitMs]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Close(maxWaitMs);

});
    }
IAsyncOperation<Boolean>^ Socket::ConnectAsync(Platform::String ^hostname, int port, Boolean ssl, int maxWaitMs)
    {
return create_async([this, hostname, port, ssl, maxWaitMs]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"",port,ssl,maxWaitMs);

});
    }
IAsyncOperation<Boolean>^ Socket::ConvertFromSslAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConvertFromSsl();

});
    }
IAsyncOperation<Boolean>^ Socket::ConvertToSslAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToSsl();

});
    }
void Socket::DnsCacheClear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->DnsCacheClear();
    }
IAsyncOperation<Platform::String ^>^ Socket::DnsLookupAsync(Platform::String ^hostname, int maxWaitMs)
    {
return create_async([this, hostname, maxWaitMs]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->dnsLookup(hostname ? hostname->Data() : L"",maxWaitMs);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Cert ^Socket::GetMyCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetMyCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^Socket::GetReceivedClientCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetReceivedClientCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Socket::GetSslAcceptableClientCaDn(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSslAcceptableClientCaDn(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Socket::GetSslServerCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSslServerCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Boolean Socket::InitSslServer(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->InitSslServer(*pObj0);
    }
Boolean Socket::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Boolean Socket::PollDataAvailable(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PollDataAvailable();
    }
IAsyncOperation<Boolean>^ Socket::ReceiveByteAsync(Boolean bUnsigned)
    {
return create_async([this, bUnsigned]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReceiveByte(bUnsigned);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Socket::ReceiveBytesAsync(void)
    {
return create_async([this]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReceiveBytes(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveBytesENCAsync(Platform::String ^encodingAlg)
    {
return create_async([this, encodingAlg]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveBytesENC(encodingAlg ? encodingAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Socket::ReceiveBytesNAsync(uint32 numBytes)
    {
return create_async([this, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReceiveBytesN(numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Socket::ReceiveBytesToFileAsync(Platform::String ^appendFilename)
    {
return create_async([this, appendFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReceiveBytesToFile(appendFilename ? appendFilename->Data() : L"");

});
    }
IAsyncOperation<int>^ Socket::ReceiveCountAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->ReceiveCount();

});
    }
IAsyncOperation<Boolean>^ Socket::ReceiveInt16Async(Boolean bigEndian, Boolean bUnsigned)
    {
return create_async([this, bigEndian, bUnsigned]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReceiveInt16(bigEndian,bUnsigned);

});
    }
IAsyncOperation<Boolean>^ Socket::ReceiveInt32Async(Boolean bigEndian)
    {
return create_async([this, bigEndian]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReceiveInt32(bigEndian);

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveNBytesENCAsync(uint32 numBytes, Platform::String ^encodingAlg)
    {
return create_async([this, numBytes, encodingAlg]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveNBytesENC(numBytes,encodingAlg ? encodingAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveStringAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveString();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveStringMaxNAsync(int maxBytes)
    {
return create_async([this, maxBytes]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveStringMaxN(maxBytes);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveStringUntilByteAsync(int byteValue)
    {
return create_async([this, byteValue]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveStringUntilByte(byteValue);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveToCRLFAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveToCRLF();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Socket::ReceiveUntilByteAsync(int byteValue)
    {
return create_async([this, byteValue]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReceiveUntilByte(byteValue,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Socket::ReceiveUntilMatchAsync(Platform::String ^matchStr)
    {
return create_async([this, matchStr]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->receiveUntilMatch(matchStr ? matchStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Socket::SendByteAsync(int value)
    {
return create_async([this, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendByte(value);

});
    }
IAsyncOperation<Boolean>^ Socket::SendBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data)
    {
return create_async([this, data]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendBytes(db0);

});
    }
IAsyncOperation<Boolean>^ Socket::SendBytesENCAsync(Platform::String ^encodedBytes, Platform::String ^encodingAlg)
    {
return create_async([this, encodedBytes, encodingAlg]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendBytesENC(encodedBytes ? encodedBytes->Data() : L"",encodingAlg ? encodingAlg->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Socket::SendCountAsync(int byteCount)
    {
return create_async([this, byteCount]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendCount(byteCount);

});
    }
IAsyncOperation<Boolean>^ Socket::SendInt16Async(int value, Boolean bigEndian)
    {
return create_async([this, value, bigEndian]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendInt16(value,bigEndian);

});
    }
IAsyncOperation<Boolean>^ Socket::SendInt32Async(int value, Boolean bigEndian)
    {
return create_async([this, value, bigEndian]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendInt32(value,bigEndian);

});
    }
IAsyncOperation<Boolean>^ Socket::SendStringAsync(Platform::String ^str)
    {
return create_async([this, str]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendString(str ? str->Data() : L"");

});
    }
Boolean Socket::SetSslClientCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCert(*pObj0);
    }
Boolean Socket::SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPem(pemDataOrFilename ? pemDataOrFilename->Data() : L"",pemPassword ? pemPassword->Data() : L"");
    }
Boolean Socket::SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPfx(pfxFilename ? pfxFilename->Data() : L"",pfxPassword ? pfxPassword->Data() : L"");
    }
void Socket::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SleepMs(millisec);
    }
IAsyncOperation<Boolean>^ Socket::SshAuthenticatePkAsync(Platform::String ^sshLogin, SshKey ^privateKey)
    {
return create_async([this, sshLogin, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePk(sshLogin ? sshLogin->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ Socket::SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword)
    {
return create_async([this, sshLogin, sshPassword]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePw(sshLogin ? sshLogin->Data() : L"",sshPassword ? sshPassword->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Socket::SshCloseTunnelAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshCloseTunnel();

});
    }
IAsyncOperation<Socket ^>^ Socket::SshOpenChannelAsync(Platform::String ^hostname, int port, Boolean ssl, int maxWaitMs)
    {
return create_async([this, hostname, port, ssl, maxWaitMs]() -> Socket ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Socket
	// cppType = CkSocket *
	CkSocketW *pRetObj = m_impl->SshOpenChannel(hostname ? hostname->Data() : L"",port,ssl,maxWaitMs);
	if (!pRetObj) return nullptr;
	Chilkat::Socket ^pSocket = ref new Chilkat::Socket();
	pSocket->m_impl = pRetObj;
	return pSocket;

});
    }
IAsyncOperation<Boolean>^ Socket::SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort)
    {
return create_async([this, sshHostname, sshPort]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshOpenTunnel(sshHostname ? sshHostname->Data() : L"",sshPort);

});
    }
void Socket::StartTiming(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->StartTiming();
    }
Boolean Socket::TakeSocket(Socket ^sock)
    {
	if (m_impl == nullptr) { return false; }
	if (sock == nullptr) { return false; }
	CkSocketW* pObj0 = sock->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->TakeSocket(*pObj0);
    }
IAsyncOperation<Boolean>^ Socket::TlsRenegotiateAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->TlsRenegotiate();

});
    }
Boolean Socket::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Socket::UseSsh(Ssh ^ssh)
    {
	if (m_impl == nullptr) { return false; }
	if (ssh == nullptr) { return false; }
	CkSshW* pObj0 = ssh->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSocketProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSsh(*pObj0);
    }




