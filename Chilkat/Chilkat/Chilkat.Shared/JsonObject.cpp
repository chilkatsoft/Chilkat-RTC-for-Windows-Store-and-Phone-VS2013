
// This source file is generated.

#include "pch.h"
#include "JsonObject.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJsonObjectW.h"
		
#include "include/CkJsonArrayW.h"
#include "JsonArray.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::JsonObject::~JsonObject(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::JsonObject::JsonObject(void) 
{
    m_impl = new CkJsonObjectW();
}

//Chilkat::JsonObject::JsonObject(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJsonObjectW *)x;
//    if (!m_impl) m_impl = new CkJsonObjectW();
//    }
//    
//Platform::IntPtr Chilkat::JsonObject::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::JsonObject::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::JsonObject::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::JsonObject::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::JsonObject::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::JsonObject::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::JsonObject::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::JsonObject::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::JsonObject::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::JsonObject::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::JsonObject::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::JsonObject::EmitCompact::get()
    {
    return m_impl ? m_impl->get_EmitCompact() : false;
    }
void Chilkat::JsonObject::EmitCompact::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCompact(newVal);
    }
Boolean Chilkat::JsonObject::EmitCrLf::get()
    {
    return m_impl ? m_impl->get_EmitCrLf() : false;
    }
void Chilkat::JsonObject::EmitCrLf::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitCrLf(newVal);
    }
int Chilkat::JsonObject::I::get()
    {
    return m_impl ? m_impl->get_I() : 0;
    }
void Chilkat::JsonObject::I::set(int newVal)
    {
        if (m_impl) m_impl->put_I(newVal);
    }
int Chilkat::JsonObject::J::get()
    {
    return m_impl ? m_impl->get_J() : 0;
    }
void Chilkat::JsonObject::J::set(int newVal)
    {
        if (m_impl) m_impl->put_J(newVal);
    }
int Chilkat::JsonObject::K::get()
    {
    return m_impl ? m_impl->get_K() : 0;
    }
void Chilkat::JsonObject::K::set(int newVal)
    {
        if (m_impl) m_impl->put_K(newVal);
    }
int Chilkat::JsonObject::Size::get()
    {
    return m_impl ? m_impl->get_Size() : 0;
    }


Boolean JsonObject::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean JsonObject::AddArrayAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddArrayAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddBoolAt(int index, Platform::String ^name, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddBoolAt(index,name ? name->Data() : L"",value);
    }
Boolean JsonObject::AddIntAt(int index, Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddIntAt(index,name ? name->Data() : L"",value);
    }
Boolean JsonObject::AddNullAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddNullAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddNumberAt(int index, Platform::String ^name, Platform::String ^numericStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddNumberAt(index,name ? name->Data() : L"",numericStr ? numericStr->Data() : L"");
    }
Boolean JsonObject::AddObjectAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddObjectAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::AddStringAt(int index, Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringAt(index,name ? name->Data() : L"",value ? value->Data() : L"");
    }
JsonArray ^JsonObject::ArrayAt(int index)
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
JsonArray ^JsonObject::ArrayOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JsonArray
	// cppType = CkJsonArray *
	CkJsonArrayW *pRetObj = m_impl->ArrayOf(jsonPath ? jsonPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonArray ^pJsonArray = ref new Chilkat::JsonArray();
	pJsonArray->m_impl = pRetObj;
	return pJsonArray;
    }
Boolean JsonObject::BoolAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->BoolAt(index);
    }
Boolean JsonObject::BoolOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->BoolOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::Delete(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Delete(name ? name->Data() : L"");
    }
Boolean JsonObject::DeleteAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DeleteAt(index);
    }
Platform::String ^JsonObject::Emit(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->emit();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
JsonObject ^JsonObject::GetDocRoot(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JsonObject
	// cppType = CkJsonObject *
	CkJsonObjectW *pRetObj = m_impl->GetDocRoot();
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
int JsonObject::IndexOf(Platform::String ^name)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->IndexOf(name ? name->Data() : L"");
    }
int JsonObject::IntAt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->IntAt(index);
    }
int JsonObject::IntOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->IntOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::IsNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsNullAt(index);
    }
Boolean JsonObject::IsNullOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsNullOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::Load(Platform::String ^json)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Load(json ? json->Data() : L"");
    }
Boolean JsonObject::LoadFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFile(path ? path->Data() : L"");
    }
Platform::String ^JsonObject::NameAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->nameAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
JsonObject ^JsonObject::ObjectAt(int index)
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
JsonObject ^JsonObject::ObjectOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JsonObject
	// cppType = CkJsonObject *
	CkJsonObjectW *pRetObj = m_impl->ObjectOf(jsonPath ? jsonPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JsonObject ^pJsonObject = ref new Chilkat::JsonObject();
	pJsonObject->m_impl = pRetObj;
	return pJsonObject;
    }
Boolean JsonObject::Rename(Platform::String ^oldName, Platform::String ^newName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Rename(oldName ? oldName->Data() : L"",newName ? newName->Data() : L"");
    }
Boolean JsonObject::RenameAt(int index, Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RenameAt(index,name ? name->Data() : L"");
    }
Boolean JsonObject::SetBoolAt(int index, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBoolAt(index,value);
    }
Boolean JsonObject::SetBoolOf(Platform::String ^jsonPath, Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBoolOf(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::SetIntAt(int index, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetIntAt(index,value);
    }
Boolean JsonObject::SetIntOf(Platform::String ^jsonPath, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetIntOf(jsonPath ? jsonPath->Data() : L"",value);
    }
Boolean JsonObject::SetNullAt(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNullAt(index);
    }
Boolean JsonObject::SetNullOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNullOf(jsonPath ? jsonPath->Data() : L"");
    }
Boolean JsonObject::SetNumberAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNumberAt(index,value ? value->Data() : L"");
    }
Boolean JsonObject::SetNumberOf(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetNumberOf(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }
Boolean JsonObject::SetStringAt(int index, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetStringAt(index,value ? value->Data() : L"");
    }
Boolean JsonObject::SetStringOf(Platform::String ^jsonPath, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetStringOf(jsonPath ? jsonPath->Data() : L"",value ? value->Data() : L"");
    }
int JsonObject::SizeOfArray(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->SizeOfArray(jsonPath ? jsonPath->Data() : L"");
    }
Platform::String ^JsonObject::StringAt(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->stringAt(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^JsonObject::StringOf(Platform::String ^jsonPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->stringOf(jsonPath ? jsonPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




