
// This source file is generated.

#include "pch.h"
#include "Upload.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkUploadW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Upload::~Upload(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Upload::Upload(void) 
{
    m_impl = new CkUploadW();
}

//Chilkat::Upload::Upload(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkUploadW *)x;
//    if (!m_impl) m_impl = new CkUploadW();
//    }
//    
//Platform::IntPtr Chilkat::Upload::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Upload::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Upload::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Upload::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Upload::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Upload::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Upload::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Upload::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Upload::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Upload::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Upload::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Upload::BandwidthThrottleUp::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleUp() : 0;
    }
void Chilkat::Upload::BandwidthThrottleUp::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleUp(newVal);
    }
int Chilkat::Upload::ChunkSize::get()
    {
    return m_impl ? m_impl->get_ChunkSize() : 0;
    }
void Chilkat::Upload::ChunkSize::set(int newVal)
    {
        if (m_impl) m_impl->put_ChunkSize(newVal);
    }
String ^Chilkat::Upload::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Upload::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Upload::Expect100Continue::get()
    {
    return m_impl ? m_impl->get_Expect100Continue() : false;
    }
void Chilkat::Upload::Expect100Continue::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Expect100Continue(newVal);
    }
int Chilkat::Upload::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Upload::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Upload::Hostname::get()
    {
    return ref new String(m_impl ? m_impl->hostname() : L"");
    }
void Chilkat::Upload::Hostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Hostname(newVal ? newVal->Data() : L"");
    }
int Chilkat::Upload::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::Upload::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
String ^Chilkat::Upload::Login::get()
    {
    return ref new String(m_impl ? m_impl->login() : L"");
    }
void Chilkat::Upload::Login::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Login(newVal ? newVal->Data() : L"");
    }
uint32 Chilkat::Upload::NumBytesSent::get()
    {
    return m_impl ? m_impl->get_NumBytesSent() : 0;
    }
String ^Chilkat::Upload::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
void Chilkat::Upload::Password::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Password(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Upload::Path::get()
    {
    return ref new String(m_impl ? m_impl->path() : L"");
    }
void Chilkat::Upload::Path::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Path(newVal ? newVal->Data() : L"");
    }
int Chilkat::Upload::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Upload::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
uint32 Chilkat::Upload::PercentUploaded::get()
    {
    return m_impl ? m_impl->get_PercentUploaded() : 0;
    }
int Chilkat::Upload::Port::get()
    {
    return m_impl ? m_impl->get_Port() : 0;
    }
void Chilkat::Upload::Port::set(int newVal)
    {
        if (m_impl) m_impl->put_Port(newVal);
    }
Boolean Chilkat::Upload::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Upload::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
String ^Chilkat::Upload::ProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->proxyDomain() : L"");
    }
void Chilkat::Upload::ProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Upload::ProxyLogin::get()
    {
    return ref new String(m_impl ? m_impl->proxyLogin() : L"");
    }
void Chilkat::Upload::ProxyLogin::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyLogin(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Upload::ProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->proxyPassword() : L"");
    }
void Chilkat::Upload::ProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Upload::ProxyPort::get()
    {
    return m_impl ? m_impl->get_ProxyPort() : 0;
    }
void Chilkat::Upload::ProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ProxyPort(newVal);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Upload::ResponseBody::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_ResponseBody(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
String ^Chilkat::Upload::ResponseHeader::get()
    {
    return ref new String(m_impl ? m_impl->responseHeader() : L"");
    }
int Chilkat::Upload::ResponseStatus::get()
    {
    return m_impl ? m_impl->get_ResponseStatus() : 0;
    }
Boolean Chilkat::Upload::Ssl::get()
    {
    return m_impl ? m_impl->get_Ssl() : false;
    }
void Chilkat::Upload::Ssl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Ssl(newVal);
    }
uint32 Chilkat::Upload::TotalUploadSize::get()
    {
    return m_impl ? m_impl->get_TotalUploadSize() : 0;
    }
Boolean Chilkat::Upload::UploadInProgress::get()
    {
    return m_impl ? m_impl->get_UploadInProgress() : false;
    }
Boolean Chilkat::Upload::UploadSuccess::get()
    {
    return m_impl ? m_impl->get_UploadSuccess() : false;
    }
String ^Chilkat::Upload::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::Upload::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Upload::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::Upload::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Upload::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::Upload::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }


Boolean Upload::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Upload::AbortUpload(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AbortUpload();
    }
void Upload::AddCustomHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddCustomHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void Upload::AddFileReference(Platform::String ^name, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddFileReference(name ? name->Data() : L"",filename ? filename->Data() : L"");
    }
void Upload::AddParam(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddParam(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Upload::BeginUpload(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->BeginUpload();
    }
IAsyncOperation<Boolean>^ Upload::BlockingUploadAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->BlockingUpload();

});
    }
void Upload::ClearFileReferences(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearFileReferences();
    }
void Upload::ClearParams(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearParams();
    }
void Upload::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SleepMs(millisec);
    }
Windows::Foundation::Collections::IVector<uint8>^Upload::UploadToMemory(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxUploadProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->UploadToMemory(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }




