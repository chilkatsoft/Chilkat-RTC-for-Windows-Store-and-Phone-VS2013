
// This source file is generated.

#include "pch.h"
#include "Asn.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkAsnW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Asn::~Asn(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Asn::Asn(void) 
{
    m_impl = new CkAsnW();
}

//Chilkat::Asn::Asn(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkAsnW *)x;
//    if (!m_impl) m_impl = new CkAsnW();
//    }
//    
//Platform::IntPtr Chilkat::Asn::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Asn::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Asn::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Asn::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Asn::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Asn::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Asn::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Asn::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Asn::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Asn::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Asn::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Asn::BoolValue::get()
    {
    return m_impl ? m_impl->get_BoolValue() : false;
    }
void Chilkat::Asn::BoolValue::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_BoolValue(newVal);
    }
Boolean Chilkat::Asn::Constructed::get()
    {
    return m_impl ? m_impl->get_Constructed() : false;
    }
String ^Chilkat::Asn::ContentStr::get()
    {
    return ref new String(m_impl ? m_impl->contentStr() : L"");
    }
void Chilkat::Asn::ContentStr::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ContentStr(newVal ? newVal->Data() : L"");
    }
int Chilkat::Asn::IntValue::get()
    {
    return m_impl ? m_impl->get_IntValue() : 0;
    }
void Chilkat::Asn::IntValue::set(int newVal)
    {
        if (m_impl) m_impl->put_IntValue(newVal);
    }
int Chilkat::Asn::NumSubItems::get()
    {
    return m_impl ? m_impl->get_NumSubItems() : 0;
    }
String ^Chilkat::Asn::Tag::get()
    {
    return ref new String(m_impl ? m_impl->tag() : L"");
    }
int Chilkat::Asn::TagValue::get()
    {
    return m_impl ? m_impl->get_TagValue() : 0;
    }


Boolean Asn::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Asn::AppendBigInt(Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendBigInt(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::AppendBits(Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendBits(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::AppendBool(Boolean value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendBool(value);
    }
Boolean Asn::AppendContextConstructed(int tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendContextConstructed(tag);
    }
Boolean Asn::AppendContextPrimitive(int tag, Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendContextPrimitive(tag,encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::AppendInt(int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendInt(value);
    }
Boolean Asn::AppendNull(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendNull();
    }
Boolean Asn::AppendOctets(Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendOctets(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::AppendOid(Platform::String ^oid)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendOid(oid ? oid->Data() : L"");
    }
Boolean Asn::AppendSequence(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendSequence();
    }
Boolean Asn::AppendSequence2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendSequence2();
    }
Asn ^Asn::AppendSequenceR(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Asn
	// cppType = CkAsn *
	CkAsnW *pRetObj = m_impl->AppendSequenceR();
	if (!pRetObj) return nullptr;
	Chilkat::Asn ^pAsn = ref new Chilkat::Asn();
	pAsn->m_impl = pRetObj;
	return pAsn;
    }
Boolean Asn::AppendSet(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendSet();
    }
Boolean Asn::AppendSet2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendSet2();
    }
Asn ^Asn::AppendSetR(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Asn
	// cppType = CkAsn *
	CkAsnW *pRetObj = m_impl->AppendSetR();
	if (!pRetObj) return nullptr;
	Chilkat::Asn ^pAsn = ref new Chilkat::Asn();
	pAsn->m_impl = pRetObj;
	return pAsn;
    }
Boolean Asn::AppendString(Platform::String ^strType, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendString(strType ? strType->Data() : L"",value ? value->Data() : L"");
    }
Boolean Asn::AppendTime(Platform::String ^timeFormat, Platform::String ^dateTimeStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendTime(timeFormat ? timeFormat->Data() : L"",dateTimeStr ? dateTimeStr->Data() : L"");
    }
Platform::String ^Asn::AsnToXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->asnToXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Asn::DeleteSubItem(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DeleteSubItem(index);
    }
Windows::Foundation::Collections::IVector<uint8>^Asn::GetBinaryDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetBinaryDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Asn::GetEncodedContent(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedContent(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Asn::GetEncodedDer(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedDer(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Asn ^Asn::GetLastSubItem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Asn
	// cppType = CkAsn *
	CkAsnW *pRetObj = m_impl->GetLastSubItem();
	if (!pRetObj) return nullptr;
	Chilkat::Asn ^pAsn = ref new Chilkat::Asn();
	pAsn->m_impl = pRetObj;
	return pAsn;
    }
Asn ^Asn::GetSubItem(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Asn
	// cppType = CkAsn *
	CkAsnW *pRetObj = m_impl->GetSubItem(index);
	if (!pRetObj) return nullptr;
	Chilkat::Asn ^pAsn = ref new Chilkat::Asn();
	pAsn->m_impl = pRetObj;
	return pAsn;
    }
Boolean Asn::LoadAsnXml(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadAsnXml(xmlStr ? xmlStr->Data() : L"");
    }
Boolean Asn::LoadBinary(Windows::Foundation::Collections::IVector<uint8>^derBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (derBytes != nullptr) { v0 = to_vector(derBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBinary(db0);
    }
Boolean Asn::LoadBinaryFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBinaryFile(path ? path->Data() : L"");
    }
Boolean Asn::LoadEncoded(Platform::String ^asnContent, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEncoded(asnContent ? asnContent->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::SetEncodedContent(Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedContent(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Asn::WriteBinaryDer(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteBinaryDer(path ? path->Data() : L"");
    }




