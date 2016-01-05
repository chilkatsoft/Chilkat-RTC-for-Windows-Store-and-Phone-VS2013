
// This source file is generated.

#include "pch.h"
#include "Hashtable.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHashtableW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Hashtable::~Hashtable(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Hashtable::Hashtable(void) 
{
    m_impl = new CkHashtableW();
}

//Chilkat::Hashtable::Hashtable(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHashtableW *)x;
//    if (!m_impl) m_impl = new CkHashtableW();
//    }
//    
//Platform::IntPtr Chilkat::Hashtable::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Hashtable::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Hashtable::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Hashtable::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Hashtable::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Hashtable::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Hashtable::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Hashtable::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Hashtable::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Hashtable::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Hashtable::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }


Boolean Hashtable::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Hashtable::AddInt(Platform::String ^key, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddInt(key ? key->Data() : L"",value);
    }
Boolean Hashtable::AddStr(Platform::String ^key, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStr(key ? key->Data() : L"",value ? value->Data() : L"");
    }
void Hashtable::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Clear();
    }
Boolean Hashtable::ClearWithNewCapacity(int capacity)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ClearWithNewCapacity(capacity);
    }
Boolean Hashtable::Contains(Platform::String ^key)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Contains(key ? key->Data() : L"");
    }
int Hashtable::LookupInt(Platform::String ^key)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->LookupInt(key ? key->Data() : L"");
    }
Platform::String ^Hashtable::LookupStr(Platform::String ^key)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->lookupStr(key ? key->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Hashtable::Remove(Platform::String ^key)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Remove(key ? key->Data() : L"");
    }




