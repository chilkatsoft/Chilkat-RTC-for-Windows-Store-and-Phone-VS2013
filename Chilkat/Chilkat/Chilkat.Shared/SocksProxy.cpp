
// This source file is generated.

#include "pch.h"
#include "SocksProxy.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSocksProxyW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SocksProxy::~SocksProxy(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SocksProxy::SocksProxy(void) 
{
    m_impl = new CkSocksProxyW();
}

//Chilkat::SocksProxy::SocksProxy(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSocksProxyW *)x;
//    if (!m_impl) m_impl = new CkSocksProxyW();
//    }
//    
//Platform::IntPtr Chilkat::SocksProxy::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SocksProxy::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SocksProxy::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SocksProxy::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SocksProxy::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SocksProxy::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SocksProxy::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SocksProxy::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SocksProxy::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SocksProxy::AllowUnauthenticatedSocks5::get()
    {
    return m_impl ? m_impl->get_AllowUnauthenticatedSocks5() : false;
    }
void Chilkat::SocksProxy::AllowUnauthenticatedSocks5::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AllowUnauthenticatedSocks5(newVal);
    }
Boolean Chilkat::SocksProxy::AuthenticatedSocks5::get()
    {
    return m_impl ? m_impl->get_AuthenticatedSocks5() : false;
    }
String ^Chilkat::SocksProxy::ClientIp::get()
    {
    return ref new String(m_impl ? m_impl->clientIp() : L"");
    }
int Chilkat::SocksProxy::ClientPort::get()
    {
    return m_impl ? m_impl->get_ClientPort() : 0;
    }
Boolean Chilkat::SocksProxy::ConnectionPending::get()
    {
    return m_impl ? m_impl->get_ConnectionPending() : false;
    }
String ^Chilkat::SocksProxy::ListenBindIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->listenBindIpAddress() : L"");
    }
void Chilkat::SocksProxy::ListenBindIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ListenBindIpAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::SocksProxy::Login::get()
    {
    return ref new String(m_impl ? m_impl->login() : L"");
    }
String ^Chilkat::SocksProxy::OutboundBindIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->outboundBindIpAddress() : L"");
    }
void Chilkat::SocksProxy::OutboundBindIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OutboundBindIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::SocksProxy::OutboundBindPort::get()
    {
    return m_impl ? m_impl->get_OutboundBindPort() : 0;
    }
void Chilkat::SocksProxy::OutboundBindPort::set(int newVal)
    {
        if (m_impl) m_impl->put_OutboundBindPort(newVal);
    }
String ^Chilkat::SocksProxy::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
String ^Chilkat::SocksProxy::ServerIp::get()
    {
    return ref new String(m_impl ? m_impl->serverIp() : L"");
    }
int Chilkat::SocksProxy::ServerPort::get()
    {
    return m_impl ? m_impl->get_ServerPort() : 0;
    }
int Chilkat::SocksProxy::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }


Boolean SocksProxy::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ SocksProxy::AllowConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AllowConnection();

});
    }
Platform::String ^SocksProxy::GetTunnelsXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTunnelsXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean SocksProxy::Initialize(int port)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Initialize(port);
    }
IAsyncOperation<Boolean>^ SocksProxy::ProceedSocks5Async(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ProceedSocks5();

});
    }
IAsyncOperation<Boolean>^ SocksProxy::RejectConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RejectConnection();

});
    }
Boolean SocksProxy::StopAllTunnels(int maxWaitMs)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->StopAllTunnels(maxWaitMs);
    }
Boolean SocksProxy::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ SocksProxy::WaitForConnectionAsync(int maxWaitMs)
    {
return create_async([this, maxWaitMs]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSocksProxyProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WaitForConnection(maxWaitMs);

});
    }




