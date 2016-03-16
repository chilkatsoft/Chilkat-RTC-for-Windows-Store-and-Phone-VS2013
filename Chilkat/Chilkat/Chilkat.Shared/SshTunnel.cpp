
// This source file is generated.

#include "pch.h"
#include "SshTunnel.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSshTunnelW.h"
		
#include "include/CkSshKeyW.h"
#include "include/CkSshW.h"
#include "SshKey.h"
#include "Ssh.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SshTunnel::~SshTunnel(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SshTunnel::SshTunnel(void) 
{
    m_impl = new CkSshTunnelW();
}

//Chilkat::SshTunnel::SshTunnel(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSshTunnelW *)x;
//    if (!m_impl) m_impl = new CkSshTunnelW();
//    }
//    
//Platform::IntPtr Chilkat::SshTunnel::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SshTunnel::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SshTunnel::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SshTunnel::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SshTunnel::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SshTunnel::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SshTunnel::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SshTunnel::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SshTunnel::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SshTunnel::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SshTunnel::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::SshTunnel::AcceptLog::get()
    {
    return ref new String(m_impl ? m_impl->acceptLog() : L"");
    }
void Chilkat::SshTunnel::AcceptLog::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AcceptLog(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::AcceptLogPath::get()
    {
    return ref new String(m_impl ? m_impl->acceptLogPath() : L"");
    }
void Chilkat::SshTunnel::AcceptLogPath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AcceptLogPath(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::ConnectTimeoutMs::get()
    {
    return m_impl ? m_impl->get_ConnectTimeoutMs() : 0;
    }
void Chilkat::SshTunnel::ConnectTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeoutMs(newVal);
    }
String ^Chilkat::SshTunnel::DestHostname::get()
    {
    return ref new String(m_impl ? m_impl->destHostname() : L"");
    }
void Chilkat::SshTunnel::DestHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DestHostname(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::DestPort::get()
    {
    return m_impl ? m_impl->get_DestPort() : 0;
    }
void Chilkat::SshTunnel::DestPort::set(int newVal)
    {
        if (m_impl) m_impl->put_DestPort(newVal);
    }
Boolean Chilkat::SshTunnel::DynamicPortForwarding::get()
    {
    return m_impl ? m_impl->get_DynamicPortForwarding() : false;
    }
void Chilkat::SshTunnel::DynamicPortForwarding::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DynamicPortForwarding(newVal);
    }
String ^Chilkat::SshTunnel::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::SshTunnel::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::SshTunnel::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::SshTunnel::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::SshTunnel::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::SshTunnel::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::SshTunnel::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::SshTunnel::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::SshTunnel::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
String ^Chilkat::SshTunnel::InboundSocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->inboundSocksPassword() : L"");
    }
void Chilkat::SshTunnel::InboundSocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_InboundSocksPassword(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::InboundSocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->inboundSocksUsername() : L"");
    }
void Chilkat::SshTunnel::InboundSocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_InboundSocksUsername(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SshTunnel::IsAccepting::get()
    {
    return m_impl ? m_impl->get_IsAccepting() : false;
    }
Boolean Chilkat::SshTunnel::KeepAcceptLog::get()
    {
    return m_impl ? m_impl->get_KeepAcceptLog() : false;
    }
void Chilkat::SshTunnel::KeepAcceptLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepAcceptLog(newVal);
    }
Boolean Chilkat::SshTunnel::KeepTunnelLog::get()
    {
    return m_impl ? m_impl->get_KeepTunnelLog() : false;
    }
void Chilkat::SshTunnel::KeepTunnelLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepTunnelLog(newVal);
    }
String ^Chilkat::SshTunnel::ListenBindIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->listenBindIpAddress() : L"");
    }
void Chilkat::SshTunnel::ListenBindIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ListenBindIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::ListenPort::get()
    {
    return m_impl ? m_impl->get_ListenPort() : 0;
    }
String ^Chilkat::SshTunnel::OutboundBindIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->outboundBindIpAddress() : L"");
    }
void Chilkat::SshTunnel::OutboundBindIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OutboundBindIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::OutboundBindPort::get()
    {
    return m_impl ? m_impl->get_OutboundBindPort() : 0;
    }
void Chilkat::SshTunnel::OutboundBindPort::set(int newVal)
    {
        if (m_impl) m_impl->put_OutboundBindPort(newVal);
    }
int Chilkat::SshTunnel::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::SshTunnel::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::SshTunnel::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::SshTunnel::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::SshTunnel::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::SshTunnel::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::SshTunnel::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::SshTunnel::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::SshTunnel::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::SshTunnel::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::SshTunnel::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::SshTunnel::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::SshTunnel::TcpNoDelay::get()
    {
    return m_impl ? m_impl->get_TcpNoDelay() : false;
    }
void Chilkat::SshTunnel::TcpNoDelay::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TcpNoDelay(newVal);
    }
String ^Chilkat::SshTunnel::TunnelLog::get()
    {
    return ref new String(m_impl ? m_impl->tunnelLog() : L"");
    }
void Chilkat::SshTunnel::TunnelLog::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TunnelLog(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::TunnelLogPath::get()
    {
    return ref new String(m_impl ? m_impl->tunnelLogPath() : L"");
    }
void Chilkat::SshTunnel::TunnelLogPath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TunnelLogPath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SshTunnel::HostKeyFingerprint::get()
    {
    return ref new String(m_impl ? m_impl->hostKeyFingerprint() : L"");
    }


Boolean SshTunnel::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ SshTunnel::AuthenticatePkAsync(Platform::String ^username, SshKey ^privateKey)
    {
return create_async([this, username, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePk(username ? username->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ SshTunnel::AuthenticatePwAsync(Platform::String ^login, Platform::String ^password)
    {
return create_async([this, login, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePw(login ? login->Data() : L"",password ? password->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ SshTunnel::AuthenticatePwPkAsync(Platform::String ^username, Platform::String ^password, SshKey ^privateKey)
    {
return create_async([this, username, password, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj2 = privateKey->m_impl;
	 if (!pObj2) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AuthenticatePwPk(username ? username->Data() : L"",password ? password->Data() : L"",*pObj2);

});
    }
IAsyncOperation<Boolean>^ SshTunnel::BeginAcceptingAsync(int listenPort)
    {
return create_async([this, listenPort]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->BeginAccepting(listenPort);

});
    }
Boolean SshTunnel::CloseTunnel(Boolean waitForThreads)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CloseTunnel(waitForThreads);
    }
IAsyncOperation<Boolean>^ SshTunnel::ConnectAsync(Platform::String ^hostname, int port)
    {
return create_async([this, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"",port);

});
    }
Boolean SshTunnel::DisconnectAllClients(Boolean waitForThreads)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DisconnectAllClients(waitForThreads);
    }
Boolean SshTunnel::StopAccepting(Boolean waitForThread)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->StopAccepting(waitForThread);
    }
Boolean SshTunnel::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ SshTunnel::ConnectThroughSshAsync(Ssh ^ssh, Platform::String ^hostname, int port)
    {
return create_async([this, ssh, hostname, port]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (ssh == nullptr) { return false; }
	CkSshW* pObj0 = ssh->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxSshTunnelProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConnectThroughSsh(*pObj0,hostname ? hostname->Data() : L"",port);

});
    }




