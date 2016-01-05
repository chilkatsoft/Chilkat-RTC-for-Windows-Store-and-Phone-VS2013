
// This source file is generated.

#include "pch.h"
#include "Spider.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSpiderW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Spider::~Spider(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Spider::Spider(void) 
{
    m_impl = new CkSpiderW();
}

//Chilkat::Spider::Spider(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSpiderW *)x;
//    if (!m_impl) m_impl = new CkSpiderW();
//    }
//    
//Platform::IntPtr Chilkat::Spider::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Spider::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Spider::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Spider::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Spider::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Spider::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Spider::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Spider::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Spider::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Spider::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Spider::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Spider::AvoidHttps::get()
    {
    return m_impl ? m_impl->get_AvoidHttps() : false;
    }
void Chilkat::Spider::AvoidHttps::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AvoidHttps(newVal);
    }
String ^Chilkat::Spider::CacheDir::get()
    {
    return ref new String(m_impl ? m_impl->cacheDir() : L"");
    }
void Chilkat::Spider::CacheDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CacheDir(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Spider::ChopAtQuery::get()
    {
    return m_impl ? m_impl->get_ChopAtQuery() : false;
    }
void Chilkat::Spider::ChopAtQuery::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ChopAtQuery(newVal);
    }
int Chilkat::Spider::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::Spider::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
String ^Chilkat::Spider::Domain::get()
    {
    return ref new String(m_impl ? m_impl->domain() : L"");
    }
Boolean Chilkat::Spider::FetchFromCache::get()
    {
    return m_impl ? m_impl->get_FetchFromCache() : false;
    }
void Chilkat::Spider::FetchFromCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_FetchFromCache(newVal);
    }
int Chilkat::Spider::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Spider::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Spider::LastFromCache::get()
    {
    return m_impl ? m_impl->get_LastFromCache() : false;
    }
String ^Chilkat::Spider::LastHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastHtml() : L"");
    }
String ^Chilkat::Spider::LastHtmlDescription::get()
    {
    return ref new String(m_impl ? m_impl->lastHtmlDescription() : L"");
    }
String ^Chilkat::Spider::LastHtmlKeywords::get()
    {
    return ref new String(m_impl ? m_impl->lastHtmlKeywords() : L"");
    }
String ^Chilkat::Spider::LastHtmlTitle::get()
    {
    return ref new String(m_impl ? m_impl->lastHtmlTitle() : L"");
    }
String ^Chilkat::Spider::LastModDateStr::get()
    {
    return ref new String(m_impl ? m_impl->lastModDateStr() : L"");
    }
String ^Chilkat::Spider::LastUrl::get()
    {
    return ref new String(m_impl ? m_impl->lastUrl() : L"");
    }
int Chilkat::Spider::MaxResponseSize::get()
    {
    return m_impl ? m_impl->get_MaxResponseSize() : 0;
    }
void Chilkat::Spider::MaxResponseSize::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxResponseSize(newVal);
    }
int Chilkat::Spider::MaxUrlLen::get()
    {
    return m_impl ? m_impl->get_MaxUrlLen() : 0;
    }
void Chilkat::Spider::MaxUrlLen::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxUrlLen(newVal);
    }
int Chilkat::Spider::NumAvoidPatterns::get()
    {
    return m_impl ? m_impl->get_NumAvoidPatterns() : 0;
    }
int Chilkat::Spider::NumFailed::get()
    {
    return m_impl ? m_impl->get_NumFailed() : 0;
    }
int Chilkat::Spider::NumOutboundLinks::get()
    {
    return m_impl ? m_impl->get_NumOutboundLinks() : 0;
    }
int Chilkat::Spider::NumSpidered::get()
    {
    return m_impl ? m_impl->get_NumSpidered() : 0;
    }
int Chilkat::Spider::NumUnspidered::get()
    {
    return m_impl ? m_impl->get_NumUnspidered() : 0;
    }
Boolean Chilkat::Spider::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Spider::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
String ^Chilkat::Spider::ProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->proxyDomain() : L"");
    }
void Chilkat::Spider::ProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Spider::ProxyLogin::get()
    {
    return ref new String(m_impl ? m_impl->proxyLogin() : L"");
    }
void Chilkat::Spider::ProxyLogin::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyLogin(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Spider::ProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->proxyPassword() : L"");
    }
void Chilkat::Spider::ProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Spider::ProxyPort::get()
    {
    return m_impl ? m_impl->get_ProxyPort() : 0;
    }
void Chilkat::Spider::ProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ProxyPort(newVal);
    }
int Chilkat::Spider::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::Spider::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
Boolean Chilkat::Spider::UpdateCache::get()
    {
    return m_impl ? m_impl->get_UpdateCache() : false;
    }
void Chilkat::Spider::UpdateCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UpdateCache(newVal);
    }
String ^Chilkat::Spider::UserAgent::get()
    {
    return ref new String(m_impl ? m_impl->userAgent() : L"");
    }
void Chilkat::Spider::UserAgent::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserAgent(newVal ? newVal->Data() : L"");
    }
int Chilkat::Spider::WindDownCount::get()
    {
    return m_impl ? m_impl->get_WindDownCount() : 0;
    }
void Chilkat::Spider::WindDownCount::set(int newVal)
    {
        if (m_impl) m_impl->put_WindDownCount(newVal);
    }


Boolean Spider::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Spider::AddAvoidOutboundLinkPattern(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddAvoidOutboundLinkPattern(pattern ? pattern->Data() : L"");
    }
void Spider::AddAvoidPattern(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddAvoidPattern(pattern ? pattern->Data() : L"");
    }
void Spider::AddMustMatchPattern(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddMustMatchPattern(pattern ? pattern->Data() : L"");
    }
void Spider::AddUnspidered(Platform::String ^url)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddUnspidered(url ? url->Data() : L"");
    }
Platform::String ^Spider::CanonicalizeUrl(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->canonicalizeUrl(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Spider::ClearFailedUrls(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearFailedUrls();
    }
void Spider::ClearOutboundLinks(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearOutboundLinks();
    }
void Spider::ClearSpideredUrls(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSpideredUrls();
    }
IAsyncOperation<Boolean>^ Spider::CrawlNextAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CrawlNext();

});
    }
IAsyncOperation<Platform::String ^>^ Spider::FetchRobotsTextAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchRobotsText();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Platform::String ^Spider::GetAvoidPattern(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAvoidPattern(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetBaseDomain(Platform::String ^domain)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBaseDomain(domain ? domain->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetFailedUrl(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFailedUrl(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetOutboundLink(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getOutboundLink(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetSpideredUrl(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSpideredUrl(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetUnspideredUrl(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getUnspideredUrl(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Spider::GetUrlDomain(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getUrlDomain(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Spider::Initialize(Platform::String ^domain)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->Initialize(domain ? domain->Data() : L"");
    }
IAsyncOperation<Boolean>^ Spider::RecrawlLastAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RecrawlLast();

});
    }
void Spider::SkipUnspidered(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SkipUnspidered(index);
    }
void Spider::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxSpiderProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SleepMs(millisec);
    }




