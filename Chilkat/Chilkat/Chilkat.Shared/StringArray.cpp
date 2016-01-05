
// This source file is generated.

#include "pch.h"
#include "StringArray.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkStringArrayW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::StringArray::~StringArray(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::StringArray::StringArray(void) 
{
    m_impl = new CkStringArrayW();
}

//Chilkat::StringArray::StringArray(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkStringArrayW *)x;
//    if (!m_impl) m_impl = new CkStringArrayW();
//    }
//    
//Platform::IntPtr Chilkat::StringArray::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::StringArray::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::StringArray::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::StringArray::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::StringArray::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::StringArray::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::StringArray::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::StringArray::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::StringArray::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::StringArray::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::StringArray::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::StringArray::Count::get()
    {
    return m_impl ? m_impl->get_Count() : 0;
    }
Boolean Chilkat::StringArray::Crlf::get()
    {
    return m_impl ? m_impl->get_Crlf() : false;
    }
void Chilkat::StringArray::Crlf::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Crlf(newVal);
    }
int Chilkat::StringArray::Length::get()
    {
    return m_impl ? m_impl->get_Length() : 0;
    }
Boolean Chilkat::StringArray::Trim::get()
    {
    return m_impl ? m_impl->get_Trim() : false;
    }
void Chilkat::StringArray::Trim::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Trim(newVal);
    }
Boolean Chilkat::StringArray::Unique::get()
    {
    return m_impl ? m_impl->get_Unique() : false;
    }
void Chilkat::StringArray::Unique::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Unique(newVal);
    }


Boolean StringArray::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean StringArray::Append(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Append(str ? str->Data() : L"");
    }
Boolean StringArray::AppendSerialized(Platform::String ^encodedStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendSerialized(encodedStr ? encodedStr->Data() : L"");
    }
void StringArray::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Clear();
    }
Boolean StringArray::Contains(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Contains(str ? str->Data() : L"");
    }
int StringArray::Find(Platform::String ^str, int firstIndex)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->Find(str ? str->Data() : L"",firstIndex);
    }
int StringArray::FindFirstMatch(Platform::String ^str, int firstIndex)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->FindFirstMatch(str ? str->Data() : L"",firstIndex);
    }
Platform::String ^StringArray::GetString(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getString(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int StringArray::GetStringLen(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetStringLen(index);
    }
void StringArray::InsertAt(int index, Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->InsertAt(index,str ? str->Data() : L"");
    }
Platform::String ^StringArray::LastString(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->lastString();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean StringArray::LoadFromFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFromFile(filename ? filename->Data() : L"");
    }
Boolean StringArray::LoadFromFile2(Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFromFile2(filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }
void StringArray::LoadFromText(Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LoadFromText(str ? str->Data() : L"");
    }
Platform::String ^StringArray::Pop(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->pop();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void StringArray::Prepend(Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Prepend(str ? str->Data() : L"");
    }
void StringArray::Remove(Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Remove(str ? str->Data() : L"");
    }
Boolean StringArray::RemoveAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveAt(index);
    }
void StringArray::ReplaceAt(int index, Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ReplaceAt(index,str ? str->Data() : L"");
    }
Boolean StringArray::SaveNthToFile(int index, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveNthToFile(index,filename ? filename->Data() : L"");
    }
Boolean StringArray::SaveToFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToFile(filename ? filename->Data() : L"");
    }
Boolean StringArray::SaveToFile2(Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToFile2(filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }
Platform::String ^StringArray::SaveToText(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->saveToText();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^StringArray::Serialize(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->serialize();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void StringArray::Sort(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Sort(ascending);
    }
void StringArray::SplitAndAppend(Platform::String ^str, Platform::String ^boundary)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SplitAndAppend(str ? str->Data() : L"",boundary ? boundary->Data() : L"");
    }
void StringArray::Subtract(StringArray ^sa)
    {
	if (m_impl == nullptr) { return ; }
	if (sa == nullptr) { return ; }
	CkStringArrayW* pObj0 = sa->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Subtract(*pObj0);
    }
void StringArray::Union(StringArray ^sa)
    {
	if (m_impl == nullptr) { return ; }
	if (sa == nullptr) { return ; }
	CkStringArrayW* pObj0 = sa->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Union(*pObj0);
    }




