
// This source file is generated.

#include "pch.h"
#include "Url.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkUrlW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Url::~Url(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Url::Url(void) 
{
    m_impl = new CkUrlW();
}

//Chilkat::Url::Url(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkUrlW *)x;
//    if (!m_impl) m_impl = new CkUrlW();
//    }
//    
//Platform::IntPtr Chilkat::Url::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Url::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Url::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Url::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Url::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Url::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Url::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Url::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Url::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Url::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Url::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Url::Frag::get()
    {
    return ref new String(m_impl ? m_impl->frag() : L"");
    }
String ^Chilkat::Url::Host::get()
    {
    return ref new String(m_impl ? m_impl->host() : L"");
    }
String ^Chilkat::Url::HostType::get()
    {
    return ref new String(m_impl ? m_impl->hostType() : L"");
    }
String ^Chilkat::Url::Login::get()
    {
    return ref new String(m_impl ? m_impl->login() : L"");
    }
String ^Chilkat::Url::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
String ^Chilkat::Url::Path::get()
    {
    return ref new String(m_impl ? m_impl->path() : L"");
    }
int Chilkat::Url::Port::get()
    {
    return m_impl ? m_impl->get_Port() : 0;
    }
String ^Chilkat::Url::Query::get()
    {
    return ref new String(m_impl ? m_impl->query() : L"");
    }
Boolean Chilkat::Url::Ssl::get()
    {
    return m_impl ? m_impl->get_Ssl() : false;
    }


Boolean Url::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Url::ParseUrl(Platform::String ^url)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ParseUrl(url ? url->Data() : L"");
    }




