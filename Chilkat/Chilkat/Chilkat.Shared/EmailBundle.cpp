
// This source file is generated.

#include "pch.h"
#include "EmailBundle.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkEmailBundleW.h"
		
#include "include/CkEmailW.h"
#include "include/CkStringArrayW.h"
#include "Email.h"
#include "StringArray.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::EmailBundle::~EmailBundle(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::EmailBundle::EmailBundle(void) 
{
    m_impl = new CkEmailBundleW();
}

//Chilkat::EmailBundle::EmailBundle(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkEmailBundleW *)x;
//    if (!m_impl) m_impl = new CkEmailBundleW();
//    }
//    
//Platform::IntPtr Chilkat::EmailBundle::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::EmailBundle::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::EmailBundle::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::EmailBundle::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::EmailBundle::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::EmailBundle::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::EmailBundle::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::EmailBundle::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::EmailBundle::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::EmailBundle::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::EmailBundle::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::EmailBundle::MessageCount::get()
    {
    return m_impl ? m_impl->get_MessageCount() : 0;
    }


Boolean EmailBundle::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean EmailBundle::AddEmail(Email ^email)
    {
	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddEmail(*pObj0);
    }
Email ^EmailBundle::FindByHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FindByHeader(name ? name->Data() : L"",value ? value->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^EmailBundle::GetEmail(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->GetEmail(index);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
StringArray ^EmailBundle::GetUidls(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetUidls();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Platform::String ^EmailBundle::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean EmailBundle::LoadXml(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(filename ? filename->Data() : L"");
    }
Boolean EmailBundle::LoadXmlString(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlString(xmlStr ? xmlStr->Data() : L"");
    }
Boolean EmailBundle::RemoveEmail(Email ^email)
    {
	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveEmail(*pObj0);
    }
Boolean EmailBundle::RemoveEmailByIndex(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveEmailByIndex(index);
    }
Boolean EmailBundle::SaveXml(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXml(filename ? filename->Data() : L"");
    }
void EmailBundle::SortByDate(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByDate(ascending);
    }
void EmailBundle::SortByRecipient(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByRecipient(ascending);
    }
void EmailBundle::SortBySender(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortBySender(ascending);
    }
void EmailBundle::SortBySubject(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortBySubject(ascending);
    }




