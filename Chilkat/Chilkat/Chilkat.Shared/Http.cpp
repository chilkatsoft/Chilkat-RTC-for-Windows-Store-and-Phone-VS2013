
// This source file is generated.

#include "pch.h"
#include "Http.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHttpW.h"
		
#include "include/CkCertW.h"
#include "include/CkHashtableW.h"
#include "include/CkHttpResponseW.h"
#include "include/CkHttpRequestW.h"
#include "include/CkStringArrayW.h"
#include "include/CkPrivateKeyW.h"
#include "Cert.h"
#include "Hashtable.h"
#include "HttpResponse.h"
#include "HttpRequest.h"
#include "StringArray.h"
#include "CkDateTime.h"
#include "PrivateKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Http::~Http(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Http::Http(void) 
{
    m_impl = new CkHttpW();
}

//Chilkat::Http::Http(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHttpW *)x;
//    if (!m_impl) m_impl = new CkHttpW();
//    }
//    
//Platform::IntPtr Chilkat::Http::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Http::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Http::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Http::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Http::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Http::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Http::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Http::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Http::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Http::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Http::Accept::get()
    {
    return ref new String(m_impl ? m_impl->ck_accept() : L"");
    }
void Chilkat::Http::Accept::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Accept(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::AcceptCharset::get()
    {
    return ref new String(m_impl ? m_impl->acceptCharset() : L"");
    }
void Chilkat::Http::AcceptCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AcceptCharset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::AcceptLanguage::get()
    {
    return ref new String(m_impl ? m_impl->acceptLanguage() : L"");
    }
void Chilkat::Http::AcceptLanguage::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AcceptLanguage(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::AllowGzip::get()
    {
    return m_impl ? m_impl->get_AllowGzip() : false;
    }
void Chilkat::Http::AllowGzip::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AllowGzip(newVal);
    }
Boolean Chilkat::Http::AutoAddHostHeader::get()
    {
    return m_impl ? m_impl->get_AutoAddHostHeader() : false;
    }
void Chilkat::Http::AutoAddHostHeader::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoAddHostHeader(newVal);
    }
String ^Chilkat::Http::AwsAccessKey::get()
    {
    return ref new String(m_impl ? m_impl->awsAccessKey() : L"");
    }
void Chilkat::Http::AwsAccessKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AwsAccessKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::AwsEndpoint::get()
    {
    return ref new String(m_impl ? m_impl->awsEndpoint() : L"");
    }
void Chilkat::Http::AwsEndpoint::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AwsEndpoint(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::AwsSecretKey::get()
    {
    return ref new String(m_impl ? m_impl->awsSecretKey() : L"");
    }
void Chilkat::Http::AwsSecretKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AwsSecretKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::AwsSubResources::get()
    {
    return ref new String(m_impl ? m_impl->awsSubResources() : L"");
    }
void Chilkat::Http::AwsSubResources::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AwsSubResources(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::BasicAuth::get()
    {
    return m_impl ? m_impl->get_BasicAuth() : false;
    }
void Chilkat::Http::BasicAuth::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_BasicAuth(newVal);
    }
String ^Chilkat::Http::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Http::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::Http::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
String ^Chilkat::Http::Connection::get()
    {
    return ref new String(m_impl ? m_impl->connection() : L"");
    }
void Chilkat::Http::Connection::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Connection(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::CookieDir::get()
    {
    return ref new String(m_impl ? m_impl->cookieDir() : L"");
    }
void Chilkat::Http::CookieDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CookieDir(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::DefaultFreshPeriod::get()
    {
    return m_impl ? m_impl->get_DefaultFreshPeriod() : 0;
    }
void Chilkat::Http::DefaultFreshPeriod::set(int newVal)
    {
        if (m_impl) m_impl->put_DefaultFreshPeriod(newVal);
    }
Boolean Chilkat::Http::DigestAuth::get()
    {
    return m_impl ? m_impl->get_DigestAuth() : false;
    }
void Chilkat::Http::DigestAuth::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DigestAuth(newVal);
    }
Boolean Chilkat::Http::FetchFromCache::get()
    {
    return m_impl ? m_impl->get_FetchFromCache() : false;
    }
void Chilkat::Http::FetchFromCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_FetchFromCache(newVal);
    }
String ^Chilkat::Http::FinalRedirectUrl::get()
    {
    return ref new String(m_impl ? m_impl->finalRedirectUrl() : L"");
    }
Boolean Chilkat::Http::FollowRedirects::get()
    {
    return m_impl ? m_impl->get_FollowRedirects() : false;
    }
void Chilkat::Http::FollowRedirects::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_FollowRedirects(newVal);
    }
int Chilkat::Http::FreshnessAlgorithm::get()
    {
    return m_impl ? m_impl->get_FreshnessAlgorithm() : 0;
    }
void Chilkat::Http::FreshnessAlgorithm::set(int newVal)
    {
        if (m_impl) m_impl->put_FreshnessAlgorithm(newVal);
    }
int Chilkat::Http::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Http::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Http::IgnoreMustRevalidate::get()
    {
    return m_impl ? m_impl->get_IgnoreMustRevalidate() : false;
    }
void Chilkat::Http::IgnoreMustRevalidate::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreMustRevalidate(newVal);
    }
Boolean Chilkat::Http::IgnoreNoCache::get()
    {
    return m_impl ? m_impl->get_IgnoreNoCache() : false;
    }
void Chilkat::Http::IgnoreNoCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreNoCache(newVal);
    }
Boolean Chilkat::Http::KeepResponseBody::get()
    {
    return m_impl ? m_impl->get_KeepResponseBody() : false;
    }
void Chilkat::Http::KeepResponseBody::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepResponseBody(newVal);
    }
int Chilkat::Http::LMFactor::get()
    {
    return m_impl ? m_impl->get_LMFactor() : 0;
    }
void Chilkat::Http::LMFactor::set(int newVal)
    {
        if (m_impl) m_impl->put_LMFactor(newVal);
    }
String ^Chilkat::Http::LastContentType::get()
    {
    return ref new String(m_impl ? m_impl->lastContentType() : L"");
    }
String ^Chilkat::Http::LastHeader::get()
    {
    return ref new String(m_impl ? m_impl->lastHeader() : L"");
    }
String ^Chilkat::Http::LastModDate::get()
    {
    return ref new String(m_impl ? m_impl->lastModDate() : L"");
    }
String ^Chilkat::Http::LastResponseBody::get()
    {
    return ref new String(m_impl ? m_impl->lastResponseBody() : L"");
    }
String ^Chilkat::Http::LastResponseHeader::get()
    {
    return ref new String(m_impl ? m_impl->lastResponseHeader() : L"");
    }
int Chilkat::Http::LastStatus::get()
    {
    return m_impl ? m_impl->get_LastStatus() : 0;
    }
String ^Chilkat::Http::Login::get()
    {
    return ref new String(m_impl ? m_impl->login() : L"");
    }
void Chilkat::Http::Login::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Login(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::LoginDomain::get()
    {
    return ref new String(m_impl ? m_impl->loginDomain() : L"");
    }
void Chilkat::Http::LoginDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LoginDomain(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::MaxConnections::get()
    {
    return m_impl ? m_impl->get_MaxConnections() : 0;
    }
void Chilkat::Http::MaxConnections::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxConnections(newVal);
    }
int Chilkat::Http::MaxFreshPeriod::get()
    {
    return m_impl ? m_impl->get_MaxFreshPeriod() : 0;
    }
void Chilkat::Http::MaxFreshPeriod::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxFreshPeriod(newVal);
    }
uint32 Chilkat::Http::MaxResponseSize::get()
    {
    return m_impl ? m_impl->get_MaxResponseSize() : 0;
    }
void Chilkat::Http::MaxResponseSize::set(uint32 newVal)
    {
        if (m_impl) m_impl->put_MaxResponseSize(newVal);
    }
int Chilkat::Http::MaxUrlLen::get()
    {
    return m_impl ? m_impl->get_MaxUrlLen() : 0;
    }
void Chilkat::Http::MaxUrlLen::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxUrlLen(newVal);
    }
Boolean Chilkat::Http::MimicFireFox::get()
    {
    return m_impl ? m_impl->get_MimicFireFox() : false;
    }
void Chilkat::Http::MimicFireFox::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_MimicFireFox(newVal);
    }
Boolean Chilkat::Http::MimicIE::get()
    {
    return m_impl ? m_impl->get_MimicIE() : false;
    }
void Chilkat::Http::MimicIE::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_MimicIE(newVal);
    }
int Chilkat::Http::MinFreshPeriod::get()
    {
    return m_impl ? m_impl->get_MinFreshPeriod() : 0;
    }
void Chilkat::Http::MinFreshPeriod::set(int newVal)
    {
        if (m_impl) m_impl->put_MinFreshPeriod(newVal);
    }
Boolean Chilkat::Http::NegotiateAuth::get()
    {
    return m_impl ? m_impl->get_NegotiateAuth() : false;
    }
void Chilkat::Http::NegotiateAuth::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NegotiateAuth(newVal);
    }
Boolean Chilkat::Http::NtlmAuth::get()
    {
    return m_impl ? m_impl->get_NtlmAuth() : false;
    }
void Chilkat::Http::NtlmAuth::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NtlmAuth(newVal);
    }
int Chilkat::Http::NumCacheLevels::get()
    {
    return m_impl ? m_impl->get_NumCacheLevels() : 0;
    }
void Chilkat::Http::NumCacheLevels::set(int newVal)
    {
        if (m_impl) m_impl->put_NumCacheLevels(newVal);
    }
int Chilkat::Http::NumCacheRoots::get()
    {
    return m_impl ? m_impl->get_NumCacheRoots() : 0;
    }
Boolean Chilkat::Http::OAuth1::get()
    {
    return m_impl ? m_impl->get_OAuth1() : false;
    }
void Chilkat::Http::OAuth1::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_OAuth1(newVal);
    }
String ^Chilkat::Http::OAuthCallback::get()
    {
    return ref new String(m_impl ? m_impl->oAuthCallback() : L"");
    }
void Chilkat::Http::OAuthCallback::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthCallback(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthConsumerKey::get()
    {
    return ref new String(m_impl ? m_impl->oAuthConsumerKey() : L"");
    }
void Chilkat::Http::OAuthConsumerKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthConsumerKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthConsumerSecret::get()
    {
    return ref new String(m_impl ? m_impl->oAuthConsumerSecret() : L"");
    }
void Chilkat::Http::OAuthConsumerSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthConsumerSecret(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthRealm::get()
    {
    return ref new String(m_impl ? m_impl->oAuthRealm() : L"");
    }
void Chilkat::Http::OAuthRealm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthRealm(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthSigMethod::get()
    {
    return ref new String(m_impl ? m_impl->oAuthSigMethod() : L"");
    }
void Chilkat::Http::OAuthSigMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthSigMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthToken::get()
    {
    return ref new String(m_impl ? m_impl->oAuthToken() : L"");
    }
void Chilkat::Http::OAuthToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthToken(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthTokenSecret::get()
    {
    return ref new String(m_impl ? m_impl->oAuthTokenSecret() : L"");
    }
void Chilkat::Http::OAuthTokenSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthTokenSecret(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::OAuthVerifier::get()
    {
    return ref new String(m_impl ? m_impl->oAuthVerifier() : L"");
    }
void Chilkat::Http::OAuthVerifier::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuthVerifier(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
void Chilkat::Http::Password::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Password(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Http::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
Boolean Chilkat::Http::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Http::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
String ^Chilkat::Http::ProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->proxyAuthMethod() : L"");
    }
void Chilkat::Http::ProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::ProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->proxyDomain() : L"");
    }
void Chilkat::Http::ProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::ProxyLogin::get()
    {
    return ref new String(m_impl ? m_impl->proxyLogin() : L"");
    }
void Chilkat::Http::ProxyLogin::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyLogin(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::ProxyLoginDomain::get()
    {
    return ref new String(m_impl ? m_impl->proxyLoginDomain() : L"");
    }
void Chilkat::Http::ProxyLoginDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyLoginDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::ProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->proxyPassword() : L"");
    }
void Chilkat::Http::ProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::ProxyPort::get()
    {
    return m_impl ? m_impl->get_ProxyPort() : 0;
    }
void Chilkat::Http::ProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ProxyPort(newVal);
    }
int Chilkat::Http::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::Http::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
String ^Chilkat::Http::RedirectVerb::get()
    {
    return ref new String(m_impl ? m_impl->redirectVerb() : L"");
    }
void Chilkat::Http::RedirectVerb::set(String ^newVal)
    {
        if (m_impl) m_impl->put_RedirectVerb(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::Referer::get()
    {
    return ref new String(m_impl ? m_impl->referer() : L"");
    }
void Chilkat::Http::Referer::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Referer(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::Http::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
String ^Chilkat::Http::RequiredContentType::get()
    {
    return ref new String(m_impl ? m_impl->requiredContentType() : L"");
    }
void Chilkat::Http::RequiredContentType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_RequiredContentType(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::S3Ssl::get()
    {
    return m_impl ? m_impl->get_S3Ssl() : false;
    }
void Chilkat::Http::S3Ssl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_S3Ssl(newVal);
    }
Boolean Chilkat::Http::SaveCookies::get()
    {
    return m_impl ? m_impl->get_SaveCookies() : false;
    }
void Chilkat::Http::SaveCookies::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SaveCookies(newVal);
    }
int Chilkat::Http::SendBufferSize::get()
    {
    return m_impl ? m_impl->get_SendBufferSize() : 0;
    }
void Chilkat::Http::SendBufferSize::set(int newVal)
    {
        if (m_impl) m_impl->put_SendBufferSize(newVal);
    }
Boolean Chilkat::Http::SendCookies::get()
    {
    return m_impl ? m_impl->get_SendCookies() : false;
    }
void Chilkat::Http::SendCookies::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SendCookies(newVal);
    }
String ^Chilkat::Http::SessionLogFilename::get()
    {
    return ref new String(m_impl ? m_impl->sessionLogFilename() : L"");
    }
void Chilkat::Http::SessionLogFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SessionLogFilename(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::Http::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::Http::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::Http::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::Http::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Http::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Http::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Http::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Http::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Http::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Http::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Http::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
String ^Chilkat::Http::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::Http::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::Http::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::StreamResponseBodyPath::get()
    {
    return ref new String(m_impl ? m_impl->streamResponseBodyPath() : L"");
    }
void Chilkat::Http::StreamResponseBodyPath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_StreamResponseBodyPath(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::TlsCipherSuite::get()
    {
    return ref new String(m_impl ? m_impl->tlsCipherSuite() : L"");
    }
String ^Chilkat::Http::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::Http::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Http::TlsVersion::get()
    {
    return ref new String(m_impl ? m_impl->tlsVersion() : L"");
    }
Boolean Chilkat::Http::UpdateCache::get()
    {
    return m_impl ? m_impl->get_UpdateCache() : false;
    }
void Chilkat::Http::UpdateCache::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UpdateCache(newVal);
    }
Boolean Chilkat::Http::UseIEProxy::get()
    {
    return m_impl ? m_impl->get_UseIEProxy() : false;
    }
void Chilkat::Http::UseIEProxy::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseIEProxy(newVal);
    }
String ^Chilkat::Http::UserAgent::get()
    {
    return ref new String(m_impl ? m_impl->userAgent() : L"");
    }
void Chilkat::Http::UserAgent::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserAgent(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Http::WasRedirected::get()
    {
    return m_impl ? m_impl->get_WasRedirected() : false;
    }


Boolean Http::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Http::AddCacheRoot(Platform::String ^dir)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddCacheRoot(dir ? dir->Data() : L"");
    }
Boolean Http::AddQuickHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddQuickHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void Http::ClearInMemoryCookies(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearInMemoryCookies();
    }
IAsyncOperation<Boolean>^ Http::CloseAllConnectionsAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CloseAllConnections();

});
    }
void Http::DnsCacheClear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->DnsCacheClear();
    }
IAsyncOperation<Boolean>^ Http::DownloadAsync(Platform::String ^url, Platform::String ^filename)
    {
return create_async([this, url, filename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Download(url ? url->Data() : L"",filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Http::DownloadAppendAsync(Platform::String ^url, Platform::String ^filename)
    {
return create_async([this, url, filename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadAppend(url ? url->Data() : L"",filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Http::DownloadHashAsync(Platform::String ^url, Platform::String ^hashAlgorithm, Platform::String ^encoding)
    {
return create_async([this, url, hashAlgorithm, encoding]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->downloadHash(url ? url->Data() : L"",hashAlgorithm ? hashAlgorithm->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Platform::String ^Http::ExtractMetaRefreshUrl(Platform::String ^html)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->extractMetaRefreshUrl(html ? html->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Http::G_SvcOauthAccessTokenAsync(Platform::String ^iss, Platform::String ^scope, Platform::String ^subEmail, int numSec, Cert ^cert)
    {
return create_async([this, iss, scope, subEmail, numSec, cert]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (cert == nullptr) { return nullptr; }
	CkCertW* pObj4 = cert->m_impl;
	 if (!pObj4) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->g_SvcOauthAccessToken(iss ? iss->Data() : L"",scope ? scope->Data() : L"",subEmail ? subEmail->Data() : L"",numSec,*pObj4);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::G_SvcOauthAccessToken2Async(Hashtable ^claimParams, int numSec, Cert ^cert)
    {
return create_async([this, claimParams, numSec, cert]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (claimParams == nullptr) { return nullptr; }
	CkHashtableW* pObj0 = claimParams->m_impl;
	 if (!pObj0) { return nullptr; }
	if (cert == nullptr) { return nullptr; }
	CkCertW* pObj2 = cert->m_impl;
	 if (!pObj2) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->g_SvcOauthAccessToken2(*pObj0,numSec,*pObj2);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Platform::String ^Http::GenTimeStamp(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genTimeStamp();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Http::GetCacheRoot(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCacheRoot(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Http::GetCookieXml(Platform::String ^domain)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCookieXml(domain ? domain->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Http::GetDomain(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getDomain(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<HttpResponse ^>^ Http::GetHeadAsync(Platform::String ^url)
    {
return create_async([this, url]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->GetHead(url ? url->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
Platform::String ^Http::GetRequestHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRequestHeader(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Cert ^>^ Http::GetServerSslCertAsync(Platform::String ^domain, int port)
    {
return create_async([this, domain, port]() -> Cert ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetServerSslCert(domain ? domain->Data() : L"",port);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;

});
    }
Platform::String ^Http::GetUrlPath(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getUrlPath(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Http::HasRequestHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HasRequestHeader(name ? name->Data() : L"");
    }
Boolean Http::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
IAsyncOperation<HttpResponse ^>^ Http::PBinaryAsync(Platform::String ^verb, Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip)
    {
return create_async([this, verb, url, byteData, contentType, md5, gzip]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db2; std::vector<uint8> v2;
        if (byteData != nullptr) { v2 = to_vector(byteData);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PBinary(verb ? verb->Data() : L"",url ? url->Data() : L"",db2,contentType ? contentType->Data() : L"",md5,gzip);
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<HttpResponse ^>^ Http::PTextAsync(Platform::String ^verb, Platform::String ^url, Platform::String ^textData, Platform::String ^charset, Platform::String ^contentType, Boolean md5, Boolean gzip)
    {
return create_async([this, verb, url, textData, charset, contentType, md5, gzip]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PText(verb ? verb->Data() : L"",url ? url->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"",contentType ? contentType->Data() : L"",md5,gzip);
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<Platform::String ^>^ Http::PostBinaryAsync(Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip)
    {
return create_async([this, url, byteData, contentType, md5, gzip]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db1; std::vector<uint8> v1;
        if (byteData != nullptr) { v1 = to_vector(byteData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->postBinary(url ? url->Data() : L"",db1,contentType ? contentType->Data() : L"",md5,gzip);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<HttpResponse ^>^ Http::PostJsonAsync(Platform::String ^url, Platform::String ^jsonText)
    {
return create_async([this, url, jsonText]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PostJson(url ? url->Data() : L"",jsonText ? jsonText->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<HttpResponse ^>^ Http::PostJson2Async(Platform::String ^url, Platform::String ^contentType, Platform::String ^jsonText)
    {
return create_async([this, url, contentType, jsonText]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PostJson2(url ? url->Data() : L"",contentType ? contentType->Data() : L"",jsonText ? jsonText->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<HttpResponse ^>^ Http::PostUrlEncodedAsync(Platform::String ^url, HttpRequest ^req)
    {
return create_async([this, url, req]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (req == nullptr) { return nullptr; }
	CkHttpRequestW* pObj1 = req->m_impl;
	 if (!pObj1) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PostUrlEncoded(url ? url->Data() : L"",*pObj1);
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<HttpResponse ^>^ Http::PostXmlAsync(Platform::String ^url, Platform::String ^xmlDoc, Platform::String ^charset)
    {
return create_async([this, url, xmlDoc, charset]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->PostXml(url ? url->Data() : L"",xmlDoc ? xmlDoc->Data() : L"",charset ? charset->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<Platform::String ^>^ Http::PutBinaryAsync(Platform::String ^url, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Boolean md5, Boolean gzip)
    {
return create_async([this, url, byteData, contentType, md5, gzip]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db1; std::vector<uint8> v1;
        if (byteData != nullptr) { v1 = to_vector(byteData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->putBinary(url ? url->Data() : L"",db1,contentType ? contentType->Data() : L"",md5,gzip);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::PutTextAsync(Platform::String ^url, Platform::String ^textData, Platform::String ^charset, Platform::String ^contentType, Boolean md5, Boolean gzip)
    {
return create_async([this, url, textData, charset, contentType, md5, gzip]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->putText(url ? url->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"",contentType ? contentType->Data() : L"",md5,gzip);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::QuickDeleteStrAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->quickDeleteStr(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Http::QuickGetAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->QuickGet(url ? url->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<HttpResponse ^>^ Http::QuickGetObjAsync(Platform::String ^url)
    {
return create_async([this, url]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->QuickGetObj(url ? url->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<Platform::String ^>^ Http::QuickGetStrAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->quickGetStr(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::QuickPutStrAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->quickPutStr(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Http::RemoveQuickHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveQuickHeader(name ? name->Data() : L"");
    }
void Http::RemoveRequestHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RemoveRequestHeader(name ? name->Data() : L"");
    }
Platform::String ^Http::RenderGet(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->renderGet(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Http::ResumeDownloadAsync(Platform::String ^url, Platform::String ^filename)
    {
return create_async([this, url, filename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ResumeDownload(url ? url->Data() : L"",filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Http::S3_CreateBucketAsync(Platform::String ^bucketName)
    {
return create_async([this, bucketName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_CreateBucket(bucketName ? bucketName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Http::S3_DeleteBucketAsync(Platform::String ^bucketName)
    {
return create_async([this, bucketName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_DeleteBucket(bucketName ? bucketName->Data() : L"");

});
    }
IAsyncOperation<HttpResponse ^>^ Http::S3_DeleteMultipleObjectsAsync(Platform::String ^bucketName, StringArray ^objectNames)
    {
return create_async([this, bucketName, objectNames]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (objectNames == nullptr) { return nullptr; }
	CkStringArrayW* pObj1 = objectNames->m_impl;
	 if (!pObj1) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->S3_DeleteMultipleObjects(bucketName ? bucketName->Data() : L"",*pObj1);
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
IAsyncOperation<Boolean>^ Http::S3_DeleteObjectAsync(Platform::String ^bucketName, Platform::String ^objectName)
    {
return create_async([this, bucketName, objectName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_DeleteObject(bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Http::S3_DownloadBytesAsync(Platform::String ^bucketName, Platform::String ^objectName)
    {
return create_async([this, bucketName, objectName]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->S3_DownloadBytes(bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Http::S3_DownloadFileAsync(Platform::String ^bucketName, Platform::String ^objectName, Platform::String ^localFilePath)
    {
return create_async([this, bucketName, objectName, localFilePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_DownloadFile(bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"",localFilePath ? localFilePath->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Http::S3_DownloadStringAsync(Platform::String ^bucketName, Platform::String ^objectName, Platform::String ^charset)
    {
return create_async([this, bucketName, objectName, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->s3_DownloadString(bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<int>^ Http::S3_FileExistsAsync(Platform::String ^bucketName, Platform::String ^objectName)
    {
return create_async([this, bucketName, objectName]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->S3_FileExists(bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"");

});
    }
Platform::String ^Http::S3_GenerateUrl(Platform::String ^bucket, Platform::String ^path, Chilkat::CkDateTime ^expire)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (expire == nullptr) { return nullptr; }
	CkDateTimeW* pObj2 = expire->m_impl;
	 if (!pObj2) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->s3_GenerateUrl(bucket ? bucket->Data() : L"",path ? path->Data() : L"",*pObj2);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Http::S3_ListBucketObjectsAsync(Platform::String ^bucketName)
    {
return create_async([this, bucketName]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->s3_ListBucketObjects(bucketName ? bucketName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::S3_ListBucketsAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->s3_ListBuckets();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Http::S3_UploadBytesAsync(Windows::Foundation::Collections::IVector<uint8>^objectContent, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^objectName)
    {
return create_async([this, objectContent, contentType, bucketName, objectName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (objectContent != nullptr) { v0 = to_vector(objectContent);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_UploadBytes(db0,contentType ? contentType->Data() : L"",bucketName ? bucketName->Data() : L"",objectName ? objectName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Http::S3_UploadFileAsync(Platform::String ^localFilePath, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^ObjectName)
    {
return create_async([this, localFilePath, contentType, bucketName, ObjectName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_UploadFile(localFilePath ? localFilePath->Data() : L"",contentType ? contentType->Data() : L"",bucketName ? bucketName->Data() : L"",ObjectName ? ObjectName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Http::S3_UploadStringAsync(Platform::String ^objectContent, Platform::String ^charset, Platform::String ^contentType, Platform::String ^bucketName, Platform::String ^ObjectName)
    {
return create_async([this, objectContent, charset, contentType, bucketName, ObjectName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->S3_UploadString(objectContent ? objectContent->Data() : L"",charset ? charset->Data() : L"",contentType ? contentType->Data() : L"",bucketName ? bucketName->Data() : L"",ObjectName ? ObjectName->Data() : L"");

});
    }
Boolean Http::SetCookieXml(Platform::String ^domain, Platform::String ^cookieXml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetCookieXml(domain ? domain->Data() : L"",cookieXml ? cookieXml->Data() : L"");
    }
Boolean Http::SetOAuthRsaKey(PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetOAuthRsaKey(*pObj0);
    }
void Http::SetRequestHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetRequestHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Http::SetSslClientCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCert(*pObj0);
    }
Boolean Http::SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPem(pemDataOrFilename ? pemDataOrFilename->Data() : L"",pemPassword ? pemPassword->Data() : L"");
    }
Boolean Http::SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPfx(pfxFilename ? pfxFilename->Data() : L"",pfxPassword ? pfxPassword->Data() : L"");
    }
void Http::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SleepMs(millisec);
    }
IAsyncOperation<HttpResponse ^>^ Http::SynchronousRequestAsync(Platform::String ^domain, int port, Boolean ssl, HttpRequest ^req)
    {
return create_async([this, domain, port, ssl, req]() -> HttpResponse ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (req == nullptr) { return nullptr; }
	const CkHttpRequestW* pObj3 = req->m_impl;
	 if (!pObj3) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = HttpResponse
	// cppType = CkHttpResponse *
	CkHttpResponseW *pRetObj = m_impl->SynchronousRequest(domain ? domain->Data() : L"",port,ssl,*pObj3);
	if (!pRetObj) return nullptr;
	Chilkat::HttpResponse ^pHttpResponse = ref new Chilkat::HttpResponse();
	pHttpResponse->m_impl = pRetObj;
	return pHttpResponse;

});
    }
Boolean Http::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Platform::String ^Http::UrlDecode(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->urlDecode(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Http::UrlEncode(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->urlEncode(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Http::XmlRpcAsync(Platform::String ^urlEndpoint, Platform::String ^xmlIn)
    {
return create_async([this, urlEndpoint, xmlIn]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->xmlRpc(urlEndpoint ? urlEndpoint->Data() : L"",xmlIn ? xmlIn->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Http::XmlRpcPutAsync(Platform::String ^urlEndpoint, Platform::String ^xmlIn)
    {
return create_async([this, urlEndpoint, xmlIn]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxHttpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->xmlRpcPut(urlEndpoint ? urlEndpoint->Data() : L"",xmlIn ? xmlIn->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }




