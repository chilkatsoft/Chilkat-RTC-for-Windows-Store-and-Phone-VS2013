
// This source file is generated.

#include "pch.h"
#include "HtmlToText.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHtmlToTextW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::HtmlToText::~HtmlToText(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::HtmlToText::HtmlToText(void) 
{
    m_impl = new CkHtmlToTextW();
}

//Chilkat::HtmlToText::HtmlToText(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHtmlToTextW *)x;
//    if (!m_impl) m_impl = new CkHtmlToTextW();
//    }
//    
//Platform::IntPtr Chilkat::HtmlToText::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::HtmlToText::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::HtmlToText::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::HtmlToText::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::HtmlToText::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::HtmlToText::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::HtmlToText::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::HtmlToText::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::HtmlToText::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::HtmlToText::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::HtmlToText::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::HtmlToText::DecodeHtmlEntities::get()
    {
    return m_impl ? m_impl->get_DecodeHtmlEntities() : false;
    }
void Chilkat::HtmlToText::DecodeHtmlEntities::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DecodeHtmlEntities(newVal);
    }
int Chilkat::HtmlToText::RightMargin::get()
    {
    return m_impl ? m_impl->get_RightMargin() : 0;
    }
void Chilkat::HtmlToText::RightMargin::set(int newVal)
    {
        if (m_impl) m_impl->put_RightMargin(newVal);
    }
Boolean Chilkat::HtmlToText::SuppressLinks::get()
    {
    return m_impl ? m_impl->get_SuppressLinks() : false;
    }
void Chilkat::HtmlToText::SuppressLinks::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SuppressLinks(newVal);
    }


Boolean HtmlToText::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean HtmlToText::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Platform::String ^HtmlToText::ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileToString(filename ? filename->Data() : L"",srcCharset ? srcCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HtmlToText::ToText(Platform::String ^html)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toText(html ? html->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean HtmlToText::UnlockComponent(Platform::String ^code)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(code ? code->Data() : L"");
    }
Boolean HtmlToText::WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteStringToFile(str ? str->Data() : L"",filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }




