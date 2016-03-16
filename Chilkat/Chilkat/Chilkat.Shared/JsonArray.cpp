
// This source file is generated.

#include "pch.h"
#include "JsonArray.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJsonArrayW.h"
		
#include "include/CkJsonObjectW.h"
#include "JsonObject.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::JsonArray::~JsonArray(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::JsonArray::JsonArray(void) 
{
    m_impl = new CkJsonArrayW();
}

//Chilkat::JsonArray::JsonArray(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJsonArrayW *)x;
//    if (!m_impl) m_impl = new CkJsonArrayW();
//    }
//    
//Platform::IntPtr Chilkat::JsonArray::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::JsonArray::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::JsonArray::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::JsonArray::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::JsonArray::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::JsonArray::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::JsonArray::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::JsonArray::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::JsonArray::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::JsonArray::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::JsonArray::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::JsonArray::Size::get()
    {
    return m_impl ? m_impl->get_Size() : 0;
    }


Boolean JsonArray::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean JsonArray::AddArrayAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddArrayAt(index);
    }
Boolean JsonArray::AddBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddBoolAt(index,value);
    }
Boolean JsonArray::AddIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddIntAt(index,value);
    }
Boolean JsonArray::AddNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddNullAt(index);
    }
Boolean JsonArray::AddNumberAt(int index, Platform::String ^numericStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddNumberAt(index,numericStr ? numericStr->Data() : L"");
    }
Boolean JsonArray::AddObjectAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddObjectAt(index);
    }
Boolean JsonArray::AddStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringAt(index,value ? value->Data() : L"");
    }
JsonArray ^JsonArray::ArrayAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JsonArray
	// cppType = CkJsonArray *
	CkJsonArrayW *pRetObj = m_impl->ArrayAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
Boolean JsonArray::BoolAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->BoolAt(index);
    }
Boolean JsonArray::DeleteAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DeleteAt(index);
    }
int JsonArray::IntAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->IntAt(index);
    }
Boolean JsonArray::IsNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsNullAt(index);
    }
JsonObject ^JsonArray::ObjectAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JsonObject
	// cppType = CkJsonObject *
	CkJsonObjectW *pRetObj = m_impl->ObjectAt(index);
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonArray::SetBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBoolAt(index,value);
    }
Boolean JsonArray::SetIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetIntAt(index,value);
    }
Boolean JsonArray::SetNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNullAt(index);
    }
Boolean JsonArray::SetNumberAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNumberAt(index,value ? value->Data() : L"");
    }
Boolean JsonArray::SetStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetStringAt(index,value ? value->Data() : L"");
    }
Platform::String ^JsonArray::StringAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->stringAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




