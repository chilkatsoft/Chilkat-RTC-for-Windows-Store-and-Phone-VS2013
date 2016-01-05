
// This source file is generated.

#include "pch.h"
#include "MessageSet.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMessageSetW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::MessageSet::~MessageSet(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::MessageSet::MessageSet(void) 
{
    m_impl = new CkMessageSetW();
}

//Chilkat::MessageSet::MessageSet(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMessageSetW *)x;
//    if (!m_impl) m_impl = new CkMessageSetW();
//    }
//    
//Platform::IntPtr Chilkat::MessageSet::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::MessageSet::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::MessageSet::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::MessageSet::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::MessageSet::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::MessageSet::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::MessageSet::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MessageSet::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::MessageSet::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::MessageSet::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::MessageSet::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::MessageSet::Count::get()
    {
    return m_impl ? m_impl->get_Count() : 0;
    }
Boolean Chilkat::MessageSet::HasUids::get()
    {
    return m_impl ? m_impl->get_HasUids() : false;
    }
void Chilkat::MessageSet::HasUids::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_HasUids(newVal);
    }


Boolean MessageSet::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean MessageSet::ContainsId(int id)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ContainsId(id);
    }
Boolean MessageSet::FromCompactString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromCompactString(str ? str->Data() : L"");
    }
int MessageSet::GetId(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetId(index);
    }
void MessageSet::InsertId(int id)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->InsertId(id);
    }
void MessageSet::RemoveId(int id)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveId(id);
    }
Platform::String ^MessageSet::ToCommaSeparatedStr(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toCommaSeparatedStr();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^MessageSet::ToCompactString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toCompactString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




