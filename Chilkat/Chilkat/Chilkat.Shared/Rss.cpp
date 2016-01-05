
// This source file is generated.

#include "pch.h"
#include "Rss.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkRssW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Rss::~Rss(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Rss::Rss(void) 
{
    m_impl = new CkRssW();
}

//Chilkat::Rss::Rss(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkRssW *)x;
//    if (!m_impl) m_impl = new CkRssW();
//    }
//    
//Platform::IntPtr Chilkat::Rss::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Rss::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Rss::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Rss::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Rss::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Rss::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Rss::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Rss::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Rss::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Rss::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Rss::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Rss::NumChannels::get()
    {
    return m_impl ? m_impl->get_NumChannels() : 0;
    }
int Chilkat::Rss::NumItems::get()
    {
    return m_impl ? m_impl->get_NumItems() : 0;
    }


Boolean Rss::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Rss ^Rss::AddNewChannel(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->AddNewChannel();
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
Rss ^Rss::AddNewImage(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->AddNewImage();
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
Rss ^Rss::AddNewItem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->AddNewItem();
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
IAsyncOperation<Boolean>^ Rss::DownloadRssAsync(Platform::String ^url)
    {
return create_async([this, url]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadRss(url ? url->Data() : L"");

});
    }
Platform::String ^Rss::GetAttr(Platform::String ^tag, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttr(tag ? tag->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Rss ^Rss::GetChannel(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->GetChannel(index);
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
int Rss::GetCount(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetCount(tag ? tag->Data() : L"");
    }
Platform::String ^Rss::GetDateStr(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getDateStr(tag ? tag->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Rss ^Rss::GetImage(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->GetImage();
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
int Rss::GetInt(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetInt(tag ? tag->Data() : L"");
    }
Rss ^Rss::GetItem(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Rss
	// cppType = CkRss *
	CkRssW *pRetObj = m_impl->GetItem(index);
	if (!pRetObj) return nullptr;
	Chilkat::Rss ^pRss = ref new Chilkat::Rss();
	pRss->m_impl = pRetObj;
	return pRss;
    }
Platform::String ^Rss::GetString(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getString(tag ? tag->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Rss::LoadRssFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadRssFile(filename ? filename->Data() : L"");
    }
Boolean Rss::LoadRssString(Platform::String ^rssString)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadRssString(rssString ? rssString->Data() : L"");
    }
Platform::String ^Rss::MGetAttr(Platform::String ^tag, int index, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->mGetAttr(tag ? tag->Data() : L"",index,attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rss::MGetString(Platform::String ^tag, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->mGetString(tag ? tag->Data() : L"",index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Rss::MSetAttr(Platform::String ^tag, int idx, Platform::String ^attrName, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->MSetAttr(tag ? tag->Data() : L"",idx,attrName ? attrName->Data() : L"",value ? value->Data() : L"");
    }
Boolean Rss::MSetString(Platform::String ^tag, int idx, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->MSetString(tag ? tag->Data() : L"",idx,value ? value->Data() : L"");
    }
void Rss::NewRss(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->NewRss();
    }
void Rss::Remove(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->Remove(tag ? tag->Data() : L"");
    }
void Rss::SetAttr(Platform::String ^tag, Platform::String ^attrName, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetAttr(tag ? tag->Data() : L"",attrName ? attrName->Data() : L"",value ? value->Data() : L"");
    }
void Rss::SetDateNow(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetDateNow(tag ? tag->Data() : L"");
    }
void Rss::SetDateStr(Platform::String ^tag, Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetDateStr(tag ? tag->Data() : L"",dateTimeStr ? dateTimeStr->Data() : L"");
    }
void Rss::SetInt(Platform::String ^tag, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetInt(tag ? tag->Data() : L"",value);
    }
void Rss::SetString(Platform::String ^tag, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetString(tag ? tag->Data() : L"",value ? value->Data() : L"");
    }
Platform::String ^Rss::ToXmlString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxRssProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toXmlString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




