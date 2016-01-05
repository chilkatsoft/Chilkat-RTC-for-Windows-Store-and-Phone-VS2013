
// This source file is generated.

#include "pch.h"
#include "Atom.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAtomW.h"
		
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Atom::~Atom(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Atom::Atom(void) 
{
    m_impl = new CkAtomW();
}

//Chilkat::Atom::Atom(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAtomW *)x;
//    if (!m_impl) m_impl = new CkAtomW();
//    }
//    
//Platform::IntPtr Chilkat::Atom::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Atom::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Atom::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Atom::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Atom::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Atom::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Atom::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Atom::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Atom::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Atom::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Atom::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Atom::NumEntries::get()
    {
    return m_impl ? m_impl->get_NumEntries() : 0;
    }


Boolean Atom::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
int Atom::AddElement(Platform::String ^tag, Platform::String ^value)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElement(tag ? tag->Data() : L"",value ? value->Data() : L"");
    }
int Atom::AddElementDateStr(Platform::String ^tag, Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElementDateStr(tag ? tag->Data() : L"",dateTimeStr ? dateTimeStr->Data() : L"");
    }
int Atom::AddElementDt(Platform::String ^tag, Chilkat::CkDateTime ^dateTime)
    {
	if (m_impl == nullptr) { return -1; }
	if (dateTime == nullptr) { return -1; }
	CkDateTimeW* pObj1 = dateTime->m_impl;
	 if (!pObj1) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElementDt(tag ? tag->Data() : L"",*pObj1);
    }
int Atom::AddElementHtml(Platform::String ^tag, Platform::String ^htmlStr)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElementHtml(tag ? tag->Data() : L"",htmlStr ? htmlStr->Data() : L"");
    }
int Atom::AddElementXHtml(Platform::String ^tag, Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElementXHtml(tag ? tag->Data() : L"",xmlStr ? xmlStr->Data() : L"");
    }
int Atom::AddElementXml(Platform::String ^tag, Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->AddElementXml(tag ? tag->Data() : L"",xmlStr ? xmlStr->Data() : L"");
    }
void Atom::AddEntry(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddEntry(xmlStr ? xmlStr->Data() : L"");
    }
void Atom::AddLink(Platform::String ^rel, Platform::String ^href, Platform::String ^title, Platform::String ^typ)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddLink(rel ? rel->Data() : L"",href ? href->Data() : L"",title ? title->Data() : L"",typ ? typ->Data() : L"");
    }
void Atom::AddPerson(Platform::String ^tag, Platform::String ^name, Platform::String ^uri, Platform::String ^email)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddPerson(tag ? tag->Data() : L"",name ? name->Data() : L"",uri ? uri->Data() : L"",email ? email->Data() : L"");
    }
void Atom::DeleteElement(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->DeleteElement(tag ? tag->Data() : L"",index);
    }
void Atom::DeleteElementAttr(Platform::String ^tag, int index, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->DeleteElementAttr(tag ? tag->Data() : L"",index,attrName ? attrName->Data() : L"");
    }
void Atom::DeletePerson(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->DeletePerson(tag ? tag->Data() : L"",index);
    }
IAsyncOperation<Boolean>^ Atom::DownloadAtomAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadAtom(url ? url->Data() : L"");

});
    }
Platform::String ^Atom::GetElement(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getElement(tag ? tag->Data() : L"",index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Atom::GetElementAttr(Platform::String ^tag, int index, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getElementAttr(tag ? tag->Data() : L"",index,attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Atom::GetElementCount(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetElementCount(tag ? tag->Data() : L"");
    }
Platform::String ^Atom::GetElementDateStr(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getElementDateStr(tag ? tag->Data() : L"",index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Chilkat::CkDateTime ^Atom::GetElementDt(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetElementDt(tag ? tag->Data() : L"",index);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Atom ^Atom::GetEntry(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Atom
	// cppType = CkAtom *
	CkAtomW *pRetObj = m_impl->GetEntry(index);
	if (!pRetObj) return nullptr;
	Chilkat::Atom ^pAtom = ref new Chilkat::Atom();
	pAtom->m_impl = pRetObj;
	return pAtom;
    }
Platform::String ^Atom::GetLinkHref(Platform::String ^relName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getLinkHref(relName ? relName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Atom::GetPersonInfo(Platform::String ^tag, int index, Platform::String ^tag2)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPersonInfo(tag ? tag->Data() : L"",index,tag2 ? tag2->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Atom::GetTopAttr(Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTopAttr(attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Atom::HasElement(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HasElement(tag ? tag->Data() : L"");
    }
Boolean Atom::LoadXml(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xmlStr ? xmlStr->Data() : L"");
    }
void Atom::NewEntry(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->NewEntry();
    }
void Atom::NewFeed(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->NewFeed();
    }
void Atom::SetElementAttr(Platform::String ^tag, int index, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetElementAttr(tag ? tag->Data() : L"",index,attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
    }
void Atom::SetTopAttr(Platform::String ^attrName, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetTopAttr(attrName ? attrName->Data() : L"",value ? value->Data() : L"");
    }
Platform::String ^Atom::ToXmlString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toXmlString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Atom::UpdateElement(Platform::String ^tag, int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElement(tag ? tag->Data() : L"",index,value ? value->Data() : L"");
    }
void Atom::UpdateElementDateStr(Platform::String ^tag, int index, Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElementDateStr(tag ? tag->Data() : L"",index,dateTimeStr ? dateTimeStr->Data() : L"");
    }
void Atom::UpdateElementDt(Platform::String ^tag, int index, Chilkat::CkDateTime ^dateTime)
    {
	if (m_impl == nullptr) { return ; }
	if (dateTime == nullptr) { return ; }
	CkDateTimeW* pObj2 = dateTime->m_impl;
	 if (!pObj2) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElementDt(tag ? tag->Data() : L"",index,*pObj2);
    }
void Atom::UpdateElementHtml(Platform::String ^tag, int index, Platform::String ^htmlStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElementHtml(tag ? tag->Data() : L"",index,htmlStr ? htmlStr->Data() : L"");
    }
void Atom::UpdateElementXHtml(Platform::String ^tag, int index, Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElementXHtml(tag ? tag->Data() : L"",index,xmlStr ? xmlStr->Data() : L"");
    }
void Atom::UpdateElementXml(Platform::String ^tag, int index, Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdateElementXml(tag ? tag->Data() : L"",index,xmlStr ? xmlStr->Data() : L"");
    }
void Atom::UpdatePerson(Platform::String ^tag, int index, Platform::String ^name, Platform::String ^uri, Platform::String ^email)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxAtomProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->UpdatePerson(tag ? tag->Data() : L"",index,name ? name->Data() : L"",uri ? uri->Data() : L"",email ? email->Data() : L"");
    }




