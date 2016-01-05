
// This source file is generated.

#include "pch.h"
#include "HtmlToXml.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHtmlToXmlW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::HtmlToXml::~HtmlToXml(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::HtmlToXml::HtmlToXml(void) 
{
    m_impl = new CkHtmlToXmlW();
}

//Chilkat::HtmlToXml::HtmlToXml(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHtmlToXmlW *)x;
//    if (!m_impl) m_impl = new CkHtmlToXmlW();
//    }
//    
//Platform::IntPtr Chilkat::HtmlToXml::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::HtmlToXml::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::HtmlToXml::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::HtmlToXml::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::HtmlToXml::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::HtmlToXml::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::HtmlToXml::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::HtmlToXml::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::HtmlToXml::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::HtmlToXml::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::HtmlToXml::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::HtmlToXml::DropCustomTags::get()
    {
    return m_impl ? m_impl->get_DropCustomTags() : false;
    }
void Chilkat::HtmlToXml::DropCustomTags::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DropCustomTags(newVal);
    }
String ^Chilkat::HtmlToXml::Html::get()
    {
    return ref new String(m_impl ? m_impl->html() : L"");
    }
void Chilkat::HtmlToXml::Html::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Html(newVal ? newVal->Data() : L"");
    }
int Chilkat::HtmlToXml::Nbsp::get()
    {
    return m_impl ? m_impl->get_Nbsp() : 0;
    }
void Chilkat::HtmlToXml::Nbsp::set(int newVal)
    {
        if (m_impl) m_impl->put_Nbsp(newVal);
    }
String ^Chilkat::HtmlToXml::XmlCharset::get()
    {
    return ref new String(m_impl ? m_impl->xmlCharset() : L"");
    }
void Chilkat::HtmlToXml::XmlCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_XmlCharset(newVal ? newVal->Data() : L"");
    }


Boolean HtmlToXml::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean HtmlToXml::ConvertFile(Platform::String ^inHtmlPath, Platform::String ^destXmlPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertFile(inHtmlPath ? inHtmlPath->Data() : L"",destXmlPath ? destXmlPath->Data() : L"");
    }
void HtmlToXml::DropTagType(Platform::String ^tagName)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DropTagType(tagName ? tagName->Data() : L"");
    }
void HtmlToXml::DropTextFormattingTags(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DropTextFormattingTags();
    }
Boolean HtmlToXml::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Windows::Foundation::Collections::IVector<uint8>^HtmlToXml::ReadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFile(path ? path->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^HtmlToXml::ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileToString(filename ? filename->Data() : L"",srcCharset ? srcCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void HtmlToXml::SetHtmlBytes(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetHtmlBytes(db0);
    }
Boolean HtmlToXml::SetHtmlFromFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetHtmlFromFile(filename ? filename->Data() : L"");
    }
Platform::String ^HtmlToXml::ToXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void HtmlToXml::UndropTagType(Platform::String ^tagName)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UndropTagType(tagName ? tagName->Data() : L"");
    }
void HtmlToXml::UndropTextFormattingTags(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UndropTextFormattingTags();
    }
Boolean HtmlToXml::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean HtmlToXml::WriteFile(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^fileData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (fileData != nullptr) { v1 = to_vector(fileData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteFile(path ? path->Data() : L"",db1);
    }
Boolean HtmlToXml::WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteStringToFile(str ? str->Data() : L"",filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }




