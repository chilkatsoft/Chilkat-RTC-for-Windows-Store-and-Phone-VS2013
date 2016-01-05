
// This source file is generated.

#include "pch.h"
#include "OAuth1.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkOAuth1W.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::OAuth1::~OAuth1(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::OAuth1::OAuth1(void) 
{
    m_impl = new CkOAuth1W();
}

//Chilkat::OAuth1::OAuth1(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkOAuth1W *)x;
//    if (!m_impl) m_impl = new CkOAuth1W();
//    }
//    
//Platform::IntPtr Chilkat::OAuth1::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::OAuth1::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::OAuth1::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::OAuth1::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::OAuth1::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::OAuth1::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::OAuth1::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::OAuth1::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::OAuth1::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::OAuth1::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::OAuth1::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::OAuth1::AuthorizationHeader::get()
    {
    return ref new String(m_impl ? m_impl->authorizationHeader() : L"");
    }
String ^Chilkat::OAuth1::BaseString::get()
    {
    return ref new String(m_impl ? m_impl->baseString() : L"");
    }
String ^Chilkat::OAuth1::ConsumerKey::get()
    {
    return ref new String(m_impl ? m_impl->consumerKey() : L"");
    }
void Chilkat::OAuth1::ConsumerKey::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ConsumerKey(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::ConsumerSecret::get()
    {
    return ref new String(m_impl ? m_impl->consumerSecret() : L"");
    }
void Chilkat::OAuth1::ConsumerSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ConsumerSecret(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::EncodedSignature::get()
    {
    return ref new String(m_impl ? m_impl->encodedSignature() : L"");
    }
String ^Chilkat::OAuth1::GeneratedUrl::get()
    {
    return ref new String(m_impl ? m_impl->generatedUrl() : L"");
    }
String ^Chilkat::OAuth1::HmacKey::get()
    {
    return ref new String(m_impl ? m_impl->hmacKey() : L"");
    }
String ^Chilkat::OAuth1::Nonce::get()
    {
    return ref new String(m_impl ? m_impl->nonce() : L"");
    }
void Chilkat::OAuth1::Nonce::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Nonce(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::OauthMethod::get()
    {
    return ref new String(m_impl ? m_impl->oauthMethod() : L"");
    }
void Chilkat::OAuth1::OauthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OauthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::OauthUrl::get()
    {
    return ref new String(m_impl ? m_impl->oauthUrl() : L"");
    }
void Chilkat::OAuth1::OauthUrl::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OauthUrl(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::OauthVersion::get()
    {
    return ref new String(m_impl ? m_impl->oauthVersion() : L"");
    }
void Chilkat::OAuth1::OauthVersion::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OauthVersion(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::QueryString::get()
    {
    return ref new String(m_impl ? m_impl->queryString() : L"");
    }
String ^Chilkat::OAuth1::Signature::get()
    {
    return ref new String(m_impl ? m_impl->signature() : L"");
    }
String ^Chilkat::OAuth1::SignatureMethod::get()
    {
    return ref new String(m_impl ? m_impl->signatureMethod() : L"");
    }
void Chilkat::OAuth1::SignatureMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SignatureMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::Timestamp::get()
    {
    return ref new String(m_impl ? m_impl->timestamp() : L"");
    }
void Chilkat::OAuth1::Timestamp::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Timestamp(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::Token::get()
    {
    return ref new String(m_impl ? m_impl->token() : L"");
    }
void Chilkat::OAuth1::Token::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Token(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::OAuth1::TokenSecret::get()
    {
    return ref new String(m_impl ? m_impl->tokenSecret() : L"");
    }
void Chilkat::OAuth1::TokenSecret::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TokenSecret(newVal ? newVal->Data() : L"");
    }


Boolean OAuth1::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean OAuth1::AddParam(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddParam(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean OAuth1::Generate(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Generate();
    }
Boolean OAuth1::RemoveParam(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveParam(name ? name->Data() : L"");
    }
Boolean OAuth1::GenNonce(int numBytes)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenNonce(numBytes);
    }
Boolean OAuth1::GenTimestamp(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenTimestamp();
    }




