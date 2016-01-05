
// This source file is generated.

#include "pch.h"
#include "Cache.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCacheW.h"
		
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Cache::~Cache(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Cache::Cache(void) 
{
    m_impl = new CkCacheW();
}

//Chilkat::Cache::Cache(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCacheW *)x;
//    if (!m_impl) m_impl = new CkCacheW();
//    }
//    
//Platform::IntPtr Chilkat::Cache::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Cache::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Cache::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Cache::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Cache::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Cache::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Cache::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Cache::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Cache::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Cache::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Cache::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Cache::LastEtagFetched::get()
    {
    return ref new String(m_impl ? m_impl->lastEtagFetched() : L"");
    }
String ^Chilkat::Cache::LastExpirationFetchedStr::get()
    {
    return ref new String(m_impl ? m_impl->lastExpirationFetchedStr() : L"");
    }
Boolean Chilkat::Cache::LastHitExpired::get()
    {
    return m_impl ? m_impl->get_LastHitExpired() : false;
    }
String ^Chilkat::Cache::LastKeyFetched::get()
    {
    return ref new String(m_impl ? m_impl->lastKeyFetched() : L"");
    }
int Chilkat::Cache::Level::get()
    {
    return m_impl ? m_impl->get_Level() : 0;
    }
void Chilkat::Cache::Level::set(int newVal)
    {
        if (m_impl) m_impl->put_Level(newVal);
    }
int Chilkat::Cache::NumRoots::get()
    {
    return m_impl ? m_impl->get_NumRoots() : 0;
    }


Boolean Cache::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Cache::AddRoot(Platform::String ^path)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddRoot(path ? path->Data() : L"");
    }
int Cache::DeleteAll(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->DeleteAll();
    }
int Cache::DeleteAllExpired(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->DeleteAllExpired();
    }
Boolean Cache::DeleteFromCache(Platform::String ^url)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DeleteFromCache(url ? url->Data() : L"");
    }
int Cache::DeleteOlderDt(Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return -1; }
	if (dt == nullptr) { return -1; }
	CkDateTimeW* pObj0 = dt->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->DeleteOlderDt(*pObj0);
    }
int Cache::DeleteOlderStr(Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->DeleteOlderStr(dateTimeStr ? dateTimeStr->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Cache::FetchFromCache(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->FetchFromCache(url ? url->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Cache::FetchText(Platform::String ^key)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchText(key ? key->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cache::GetEtag(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEtag(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Chilkat::CkDateTime ^Cache::GetExpirationDt(Platform::String ^key)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetExpirationDt(key ? key->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Platform::String ^Cache::GetExpirationStr(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getExpirationStr(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cache::GetFilename(Platform::String ^url)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFilename(url ? url->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cache::GetRoot(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRoot(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Cache::IsCached(Platform::String ^url)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsCached(url ? url->Data() : L"");
    }
Boolean Cache::SaveTextDt(Platform::String ^key, Chilkat::CkDateTime ^expire, Platform::String ^eTag, Platform::String ^strData)
    {
	if (m_impl == nullptr) { return false; }
	if (expire == nullptr) { return false; }
	CkDateTimeW* pObj1 = expire->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveTextDt(key ? key->Data() : L"",*pObj1,eTag ? eTag->Data() : L"",strData ? strData->Data() : L"");
    }
Boolean Cache::SaveTextNoExpire(Platform::String ^key, Platform::String ^eTag, Platform::String ^strData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveTextNoExpire(key ? key->Data() : L"",eTag ? eTag->Data() : L"",strData ? strData->Data() : L"");
    }
Boolean Cache::SaveTextStr(Platform::String ^key, Platform::String ^expireDateTimeStr, Platform::String ^eTag, Platform::String ^strData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveTextStr(key ? key->Data() : L"",expireDateTimeStr ? expireDateTimeStr->Data() : L"",eTag ? eTag->Data() : L"",strData ? strData->Data() : L"");
    }
Boolean Cache::SaveToCacheDt(Platform::String ^url, Chilkat::CkDateTime ^expire, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	if (expire == nullptr) { return false; }
	CkDateTimeW* pObj1 = expire->m_impl;
	 if (!pObj1) { return false; }
	CkByteData db3; std::vector<uint8> v3;
        if (data != nullptr) { v3 = to_vector(data);
            db3.borrowData(&v3[0], (unsigned long)v3.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToCacheDt(url ? url->Data() : L"",*pObj1,eTag ? eTag->Data() : L"",db3);
    }
Boolean Cache::SaveToCacheNoExpire(Platform::String ^url, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (data != nullptr) { v2 = to_vector(data);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToCacheNoExpire(url ? url->Data() : L"",eTag ? eTag->Data() : L"",db2);
    }
Boolean Cache::SaveToCacheStr(Platform::String ^url, Platform::String ^expireDateTimeStr, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db3; std::vector<uint8> v3;
        if (data != nullptr) { v3 = to_vector(data);
            db3.borrowData(&v3[0], (unsigned long)v3.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToCacheStr(url ? url->Data() : L"",expireDateTimeStr ? expireDateTimeStr->Data() : L"",eTag ? eTag->Data() : L"",db3);
    }
Boolean Cache::UpdateExpirationDt(Platform::String ^url, Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDateTimeW* pObj1 = dt->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UpdateExpirationDt(url ? url->Data() : L"",*pObj1);
    }
Boolean Cache::UpdateExpirationStr(Platform::String ^url, Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UpdateExpirationStr(url ? url->Data() : L"",dateTimeStr ? dateTimeStr->Data() : L"");
    }




