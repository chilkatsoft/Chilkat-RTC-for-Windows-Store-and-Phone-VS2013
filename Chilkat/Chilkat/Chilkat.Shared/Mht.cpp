
// This source file is generated.

#include "pch.h"
#include "Mht.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMhtW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Mht::~Mht(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Mht::Mht(void) 
{
    m_impl = new CkMhtW();
}

//Chilkat::Mht::Mht(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMhtW *)x;
//    if (!m_impl) m_impl = new CkMhtW();
//    }
//    
//Platform::IntPtr Chilkat::Mht::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Mht::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Mht::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Mht::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Mht::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Mht::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Mht::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Mht::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Mht::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Mht::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Mht::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Mht::BaseUrl::get()
    {
    return ref new String(m_impl ? m_impl->baseUrl() : L"");
    }
void Chilkat::Mht::BaseUrl::set(String ^newVal)
    {
        if (m_impl) m_impl->put_BaseUrl(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mht::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::Mht::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
String ^Chilkat::Mht::DebugHtmlAfter::get()
    {
    return ref new String(m_impl ? m_impl->debugHtmlAfter() : L"");
    }
void Chilkat::Mht::DebugHtmlAfter::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugHtmlAfter(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::DebugHtmlBefore::get()
    {
    return ref new String(m_impl ? m_impl->debugHtmlBefore() : L"");
    }
void Chilkat::Mht::DebugHtmlBefore::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugHtmlBefore(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Mht::DebugTagCleaning::get()
    {
    return m_impl ? m_impl->get_DebugTagCleaning() : false;
    }
void Chilkat::Mht::DebugTagCleaning::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DebugTagCleaning(newVal);
    }
Boolean Chilkat::Mht::EmbedImages::get()
    {
    return m_impl ? m_impl->get_EmbedImages() : false;
    }
void Chilkat::Mht::EmbedImages::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmbedImages(newVal);
    }
Boolean Chilkat::Mht::EmbedLocalOnly::get()
    {
    return m_impl ? m_impl->get_EmbedLocalOnly() : false;
    }
void Chilkat::Mht::EmbedLocalOnly::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmbedLocalOnly(newVal);
    }
Boolean Chilkat::Mht::FetchFromCache::get()
    {
    return m_impl ? m_impl->get_FetchFromCache() : false;
    }
void Chilkat::Mht::FetchFromCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_FetchFromCache(newVal);
    }
int Chilkat::Mht::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Mht::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Mht::IgnoreMustRevalidate::get()
    {
    return m_impl ? m_impl->get_IgnoreMustRevalidate() : false;
    }
void Chilkat::Mht::IgnoreMustRevalidate::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreMustRevalidate(newVal);
    }
Boolean Chilkat::Mht::IgnoreNoCache::get()
    {
    return m_impl ? m_impl->get_IgnoreNoCache() : false;
    }
void Chilkat::Mht::IgnoreNoCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreNoCache(newVal);
    }
Boolean Chilkat::Mht::NoScripts::get()
    {
    return m_impl ? m_impl->get_NoScripts() : false;
    }
void Chilkat::Mht::NoScripts::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NoScripts(newVal);
    }
Boolean Chilkat::Mht::NtlmAuth::get()
    {
    return m_impl ? m_impl->get_NtlmAuth() : false;
    }
void Chilkat::Mht::NtlmAuth::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NtlmAuth(newVal);
    }
int Chilkat::Mht::NumCacheLevels::get()
    {
    return m_impl ? m_impl->get_NumCacheLevels() : 0;
    }
void Chilkat::Mht::NumCacheLevels::set(int newVal)
    {
        if (m_impl) m_impl->put_NumCacheLevels(newVal);
    }
int Chilkat::Mht::NumCacheRoots::get()
    {
    return m_impl ? m_impl->get_NumCacheRoots() : 0;
    }
Boolean Chilkat::Mht::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Mht::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
Boolean Chilkat::Mht::PreferMHTScripts::get()
    {
    return m_impl ? m_impl->get_PreferMHTScripts() : false;
    }
void Chilkat::Mht::PreferMHTScripts::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferMHTScripts(newVal);
    }
String ^Chilkat::Mht::Proxy::get()
    {
    return ref new String(m_impl ? m_impl->proxy() : L"");
    }
void Chilkat::Mht::Proxy::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Proxy(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::ProxyLogin::get()
    {
    return ref new String(m_impl ? m_impl->proxyLogin() : L"");
    }
void Chilkat::Mht::ProxyLogin::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyLogin(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::ProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->proxyPassword() : L"");
    }
void Chilkat::Mht::ProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mht::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::Mht::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
Boolean Chilkat::Mht::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::Mht::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
String ^Chilkat::Mht::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Mht::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Mht::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mht::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Mht::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Mht::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Mht::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mht::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Mht::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::Mht::UnpackDirect::get()
    {
    return m_impl ? m_impl->get_UnpackDirect() : false;
    }
void Chilkat::Mht::UnpackDirect::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UnpackDirect(newVal);
    }
Boolean Chilkat::Mht::UnpackUseRelPaths::get()
    {
    return m_impl ? m_impl->get_UnpackUseRelPaths() : false;
    }
void Chilkat::Mht::UnpackUseRelPaths::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UnpackUseRelPaths(newVal);
    }
Boolean Chilkat::Mht::UpdateCache::get()
    {
    return m_impl ? m_impl->get_UpdateCache() : false;
    }
void Chilkat::Mht::UpdateCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UpdateCache(newVal);
    }
Boolean Chilkat::Mht::UseCids::get()
    {
    return m_impl ? m_impl->get_UseCids() : false;
    }
void Chilkat::Mht::UseCids::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseCids(newVal);
    }
Boolean Chilkat::Mht::UseFilename::get()
    {
    return m_impl ? m_impl->get_UseFilename() : false;
    }
void Chilkat::Mht::UseFilename::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseFilename(newVal);
    }
Boolean Chilkat::Mht::UseIEProxy::get()
    {
    return m_impl ? m_impl->get_UseIEProxy() : false;
    }
void Chilkat::Mht::UseIEProxy::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseIEProxy(newVal);
    }
Boolean Chilkat::Mht::UseInline::get()
    {
    return m_impl ? m_impl->get_UseInline() : false;
    }
void Chilkat::Mht::UseInline::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseInline(newVal);
    }
String ^Chilkat::Mht::WebSiteLogin::get()
    {
    return ref new String(m_impl ? m_impl->webSiteLogin() : L"");
    }
void Chilkat::Mht::WebSiteLogin::set(String ^newVal)
    {
        if (m_impl) m_impl->put_WebSiteLogin(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::WebSiteLoginDomain::get()
    {
    return ref new String(m_impl ? m_impl->webSiteLoginDomain() : L"");
    }
void Chilkat::Mht::WebSiteLoginDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_WebSiteLoginDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mht::WebSitePassword::get()
    {
    return ref new String(m_impl ? m_impl->webSitePassword() : L"");
    }
void Chilkat::Mht::WebSitePassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_WebSitePassword(newVal ? newVal->Data() : L"");
    }


Boolean Mht::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Mht::AddCacheRoot(Platform::String ^dir)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddCacheRoot(dir ? dir->Data() : L"");
    }
void Mht::AddCustomHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddCustomHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void Mht::AddExternalStyleSheet(Platform::String ^url)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddExternalStyleSheet(url ? url->Data() : L"");
    }
void Mht::ClearCustomHeaders(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearCustomHeaders();
    }
void Mht::ExcludeImagesMatching(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ExcludeImagesMatching(pattern ? pattern->Data() : L"");
    }
IAsyncOperation<Boolean>^ Mht::GetAndSaveEMLAsync(Platform::String ^url, Platform::String ^emlFilename)
    {
return create_async([this, url, emlFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetAndSaveEML(url ? url->Data() : L"",emlFilename ? emlFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Mht::GetAndSaveMHTAsync(Platform::String ^url, Platform::String ^mhtFilename)
    {
return create_async([this, url, mhtFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetAndSaveMHT(url ? url->Data() : L"",mhtFilename ? mhtFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Mht::GetAndZipEMLAsync(Platform::String ^url, Platform::String ^zipEntryFilename, Platform::String ^zipFilename)
    {
return create_async([this, url, zipEntryFilename, zipFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetAndZipEML(url ? url->Data() : L"",zipEntryFilename ? zipEntryFilename->Data() : L"",zipFilename ? zipFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Mht::GetAndZipMHTAsync(Platform::String ^url, Platform::String ^zipEntryFilename, Platform::String ^zipFilename)
    {
return create_async([this, url, zipEntryFilename, zipFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetAndZipMHT(url ? url->Data() : L"",zipEntryFilename ? zipEntryFilename->Data() : L"",zipFilename ? zipFilename->Data() : L"");

});
    }
Platform::String ^Mht::GetCacheRoot(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCacheRoot(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Mht::GetEMLAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEML(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Mht::GetMHTAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMHT(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Mht::HtmlToEMLAsync(Platform::String ^htmlText)
    {
return create_async([this, htmlText]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->htmlToEML(htmlText ? htmlText->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Mht::HtmlToEMLFileAsync(Platform::String ^html, Platform::String ^emlFilename)
    {
return create_async([this, html, emlFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HtmlToEMLFile(html ? html->Data() : L"",emlFilename ? emlFilename->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Mht::HtmlToMHTAsync(Platform::String ^htmlText)
    {
return create_async([this, htmlText]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->htmlToMHT(htmlText ? htmlText->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Mht::HtmlToMHTFileAsync(Platform::String ^html, Platform::String ^mhtFilename)
    {
return create_async([this, html, mhtFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HtmlToMHTFile(html ? html->Data() : L"",mhtFilename ? mhtFilename->Data() : L"");

});
    }
Boolean Mht::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
void Mht::RemoveCustomHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RemoveCustomHeader(name ? name->Data() : L"");
    }
void Mht::RestoreDefaults(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RestoreDefaults();
    }
Boolean Mht::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Mht::UnpackMHT(Platform::String ^mhtFilename, Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubDir)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnpackMHT(mhtFilename ? mhtFilename->Data() : L"",unpackDir ? unpackDir->Data() : L"",htmlFilename ? htmlFilename->Data() : L"",partsSubDir ? partsSubDir->Data() : L"");
    }
Boolean Mht::UnpackMHTString(Platform::String ^mhtString, Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubDir)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMhtProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnpackMHTString(mhtString ? mhtString->Data() : L"",unpackDir ? unpackDir->Data() : L"",htmlFilename ? htmlFilename->Data() : L"",partsSubDir ? partsSubDir->Data() : L"");
    }




