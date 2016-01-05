
// This source file is generated.

#include "pch.h"
#include "Xml.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Xml::~Xml(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Xml::Xml(void) 
{
    m_impl = new CkXmlW();
}

//Chilkat::Xml::Xml(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlW *)x;
//    if (!m_impl) m_impl = new CkXmlW();
//    }
//    
//Platform::IntPtr Chilkat::Xml::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Xml::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Xml::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Xml::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Xml::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Xml::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Xml::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Xml::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Xml::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Xml::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Xml::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Xml::Cdata::get()
    {
    return m_impl ? m_impl->get_Cdata() : false;
    }
void Chilkat::Xml::Cdata::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Cdata(newVal);
    }
String ^Chilkat::Xml::Content::get()
    {
    return ref new String(m_impl ? m_impl->content() : L"");
    }
void Chilkat::Xml::Content::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Content(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::ContentInt::get()
    {
    return m_impl ? m_impl->get_ContentInt() : 0;
    }
void Chilkat::Xml::ContentInt::set(int newVal)
    {
        if (m_impl) m_impl->put_ContentInt(newVal);
    }
String ^Chilkat::Xml::DocType::get()
    {
    return ref new String(m_impl ? m_impl->docType() : L"");
    }
void Chilkat::Xml::DocType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DocType(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Xml::EmitBom::get()
    {
    return m_impl ? m_impl->get_EmitBom() : false;
    }
void Chilkat::Xml::EmitBom::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitBom(newVal);
    }
Boolean Chilkat::Xml::EmitXmlDecl::get()
    {
    return m_impl ? m_impl->get_EmitXmlDecl() : false;
    }
void Chilkat::Xml::EmitXmlDecl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmitXmlDecl(newVal);
    }
String ^Chilkat::Xml::Encoding::get()
    {
    return ref new String(m_impl ? m_impl->encoding() : L"");
    }
void Chilkat::Xml::Encoding::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Encoding(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::NumAttributes::get()
    {
    return m_impl ? m_impl->get_NumAttributes() : 0;
    }
int Chilkat::Xml::NumChildren::get()
    {
    return m_impl ? m_impl->get_NumChildren() : 0;
    }
Boolean Chilkat::Xml::SortCaseInsensitive::get()
    {
    return m_impl ? m_impl->get_SortCaseInsensitive() : false;
    }
void Chilkat::Xml::SortCaseInsensitive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SortCaseInsensitive(newVal);
    }
Boolean Chilkat::Xml::Standalone::get()
    {
    return m_impl ? m_impl->get_Standalone() : false;
    }
void Chilkat::Xml::Standalone::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Standalone(newVal);
    }
String ^Chilkat::Xml::Tag::get()
    {
    return ref new String(m_impl ? m_impl->tag() : L"");
    }
void Chilkat::Xml::Tag::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Tag(newVal ? newVal->Data() : L"");
    }
int Chilkat::Xml::TreeId::get()
    {
    return m_impl ? m_impl->get_TreeId() : 0;
    }


Boolean Xml::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Platform::String ^Xml::AccumulateTagContent(Platform::String ^tag, Platform::String ^skipTags)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->accumulateTagContent(tag ? tag->Data() : L"",skipTags ? skipTags->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::AddAttribute(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddAttribute(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Xml::AddAttributeInt(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddAttributeInt(name ? name->Data() : L"",value);
    }
Boolean Xml::AddChildTree(Xml ^tree)
    {
	if (m_impl == nullptr) { return false; }
	if (tree == nullptr) { return false; }
	const CkXmlW* pObj0 = tree->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddChildTree(*pObj0);
    }
void Xml::AddOrUpdateAttribute(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddOrUpdateAttribute(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void Xml::AddOrUpdateAttributeI(Platform::String ^name, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddOrUpdateAttributeI(name ? name->Data() : L"",value);
    }
void Xml::AddStyleSheet(Platform::String ^styleSheet)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddStyleSheet(styleSheet ? styleSheet->Data() : L"");
    }
void Xml::AddToAttribute(Platform::String ^name, int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddToAttribute(name ? name->Data() : L"",amount);
    }
void Xml::AddToChildContent(Platform::String ^tag, int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddToChildContent(tag ? tag->Data() : L"",amount);
    }
void Xml::AddToContent(int amount)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddToContent(amount);
    }
Boolean Xml::AppendToContent(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendToContent(str ? str->Data() : L"");
    }
Boolean Xml::BEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->BEncodeContent(charset ? charset->Data() : L"",db1);
    }
Boolean Xml::ChildContentMatches(Platform::String ^tag, Platform::String ^pattern, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ChildContentMatches(tag ? tag->Data() : L"",pattern ? pattern->Data() : L"",caseSensitive);
    }
Platform::String ^Xml::ChilkatPath(Platform::String ^pathCmd)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->chilkatPath(pathCmd ? pathCmd->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Xml::Clear(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Clear();
    }
Boolean Xml::ContentMatches(Platform::String ^pattern, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ContentMatches(pattern ? pattern->Data() : L"",caseSensitive);
    }
void Xml::Copy(Xml ^node)
    {
	if (m_impl == nullptr) { return ; }
	if (node == nullptr) { return ; }
	const CkXmlW* pObj0 = node->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Copy(*pObj0);
    }
void Xml::CopyRef(Xml ^node)
    {
	if (m_impl == nullptr) { return ; }
	if (node == nullptr) { return ; }
	CkXmlW* pObj0 = node->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->CopyRef(*pObj0);
    }
Windows::Foundation::Collections::IVector<uint8>^Xml::DecodeContent(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DecodeContent(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Xml::DecodeEntities(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decodeEntities(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::DecryptContent(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DecryptContent(password ? password->Data() : L"");
    }
Boolean Xml::EncryptContent(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->EncryptContent(password ? password->Data() : L"");
    }
Xml ^Xml::ExtractChildByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->ExtractChildByIndex(index);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::ExtractChildByName(Platform::String ^tag, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->ExtractChildByName(tag ? tag->Data() : L"",attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FindChild(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->FindChild(tag ? tag->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::FindChild2(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FindChild2(tag ? tag->Data() : L"");
    }
Xml ^Xml::FindNextRecord(Platform::String ^tag, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->FindNextRecord(tag ? tag->Data() : L"",contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FindOrAddNewChild(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->FindOrAddNewChild(tag ? tag->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::FirstChild(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->FirstChild();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::FirstChild2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FirstChild2();
    }
Platform::String ^Xml::GetAttrValue(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttrValue(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Xml::GetAttrValueInt(Platform::String ^name)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetAttrValueInt(name ? name->Data() : L"");
    }
Platform::String ^Xml::GetAttributeName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttributeName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetAttributeValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttributeValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Xml::GetAttributeValueInt(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetAttributeValueInt(index);
    }
Windows::Foundation::Collections::IVector<uint8>^Xml::GetBinaryContent(Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetBinaryContent(unzipFlag,decryptFlag,password ? password->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Xml ^Xml::GetChild(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetChild(index);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetChild2(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GetChild2(index);
    }
Boolean Xml::GetChildBoolValue(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GetChildBoolValue(tag ? tag->Data() : L"");
    }
Platform::String ^Xml::GetChildContent(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getChildContent(tag ? tag->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetChildContentByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getChildContentByIndex(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Xml ^Xml::GetChildExact(Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetChildExact(tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
int Xml::GetChildIntValue(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetChildIntValue(tag ? tag->Data() : L"");
    }
Platform::String ^Xml::GetChildTag(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getChildTag(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Xml::GetChildTagByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getChildTagByIndex(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Xml ^Xml::GetChildWithAttr(Platform::String ^tag, Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetChildWithAttr(tag ? tag->Data() : L"",attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetChildWithContent(content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetChildWithTag(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetChildWithTag(tag ? tag->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::GetNthChildWithTag(Platform::String ^tag, int n)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetNthChildWithTag(tag ? tag->Data() : L"",n);
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetNthChildWithTag2(Platform::String ^tag, int n)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GetNthChildWithTag2(tag ? tag->Data() : L"",n);
    }
Xml ^Xml::GetParent(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetParent();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::GetParent2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GetParent2();
    }
Xml ^Xml::GetRoot(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetRoot();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::GetRoot2(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->GetRoot2();
    }
Xml ^Xml::GetSelf(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->GetSelf();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Platform::String ^Xml::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::HasAttrWithValue(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasAttrWithValue(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Xml::HasAttribute(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasAttribute(name ? name->Data() : L"");
    }
Boolean Xml::HasChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasChildWithContent(content ? content->Data() : L"");
    }
Boolean Xml::HasChildWithTag(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasChildWithTag(tag ? tag->Data() : L"");
    }
Boolean Xml::HasChildWithTagAndContent(Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasChildWithTagAndContent(tag ? tag->Data() : L"",content ? content->Data() : L"");
    }
void Xml::InsertChildTreeAfter(int index, Xml ^tree)
    {
	if (m_impl == nullptr) { return ; }
	if (tree == nullptr) { return ; }
	const CkXmlW* pObj1 = tree->m_impl;
	 if (!pObj1) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->InsertChildTreeAfter(index,*pObj1);
    }
void Xml::InsertChildTreeBefore(int index, Xml ^tree)
    {
	if (m_impl == nullptr) { return ; }
	if (tree == nullptr) { return ; }
	const CkXmlW* pObj1 = tree->m_impl;
	 if (!pObj1) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->InsertChildTreeBefore(index,*pObj1);
    }
Xml ^Xml::LastChild(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->LastChild();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::LastChild2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LastChild2();
    }
Boolean Xml::LoadXml(Platform::String ^xmlData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xmlData ? xmlData->Data() : L"");
    }
Boolean Xml::LoadXml2(Platform::String ^xmlData, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml2(xmlData ? xmlData->Data() : L"",autoTrim);
    }
Boolean Xml::LoadXmlFile(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlFile(fileName ? fileName->Data() : L"");
    }
Boolean Xml::LoadXmlFile2(Platform::String ^fileName, Boolean autoTrim)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlFile2(fileName ? fileName->Data() : L"",autoTrim);
    }
Xml ^Xml::NewChild(Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->NewChild(tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::NewChild2(Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->NewChild2(tag ? tag->Data() : L"",content ? content->Data() : L"");
    }
Xml ^Xml::NewChildAfter(int index, Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->NewChildAfter(index,tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Xml ^Xml::NewChildBefore(int index, Platform::String ^tag, Platform::String ^content)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->NewChildBefore(index,tag ? tag->Data() : L"",content ? content->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
void Xml::NewChildInt2(Platform::String ^tag, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->NewChildInt2(tag ? tag->Data() : L"",value);
    }
Xml ^Xml::NextSibling(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->NextSibling();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::NextSibling2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->NextSibling2();
    }
int Xml::NumChildrenHavingTag(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->NumChildrenHavingTag(tag ? tag->Data() : L"");
    }
Xml ^Xml::PreviousSibling(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->PreviousSibling();
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::PreviousSibling2(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->PreviousSibling2();
    }
Boolean Xml::QEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->QEncodeContent(charset ? charset->Data() : L"",db1);
    }
Boolean Xml::RemoveAllAttributes(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveAllAttributes();
    }
void Xml::RemoveAllChildren(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveAllChildren();
    }
Boolean Xml::RemoveAttribute(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveAttribute(name ? name->Data() : L"");
    }
void Xml::RemoveChild(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveChild(tag ? tag->Data() : L"");
    }
void Xml::RemoveChildByIndex(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveChildByIndex(index);
    }
void Xml::RemoveChildWithContent(Platform::String ^content)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveChildWithContent(content ? content->Data() : L"");
    }
void Xml::RemoveFromTree(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveFromTree();
    }
Boolean Xml::SaveBinaryContent(Platform::String ^filename, Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveBinaryContent(filename ? filename->Data() : L"",unzipFlag,decryptFlag,password ? password->Data() : L"");
    }
Boolean Xml::SaveXml(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXml(fileName ? fileName->Data() : L"");
    }
Xml ^Xml::SearchAllForContent(Xml ^afterPtr, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->SearchAllForContent(pObj0,contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchAllForContent2(Xml ^afterPtr, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SearchAllForContent2(pObj0,contentPattern ? contentPattern->Data() : L"");
    }
Xml ^Xml::SearchForAttribute(Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->SearchForAttribute(pObj0,tag ? tag->Data() : L"",attr ? attr->Data() : L"",valuePattern ? valuePattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForAttribute2(Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SearchForAttribute2(pObj0,tag ? tag->Data() : L"",attr ? attr->Data() : L"",valuePattern ? valuePattern->Data() : L"");
    }
Xml ^Xml::SearchForContent(Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->SearchForContent(pObj0,tag ? tag->Data() : L"",contentPattern ? contentPattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForContent2(Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SearchForContent2(pObj0,tag ? tag->Data() : L"",contentPattern ? contentPattern->Data() : L"");
    }
Xml ^Xml::SearchForTag(Xml ^afterPtr, Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (afterPtr == nullptr) { return nullptr; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = Xml
	// cppType = CkXml *
	CkXmlW *pRetObj = m_impl->SearchForTag(pObj0,tag ? tag->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Xml ^pXml = ref new Chilkat::Xml();
	pXml->m_impl = pRetObj;
	return pXml;
    }
Boolean Xml::SearchForTag2(Xml ^afterPtr, Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	if (afterPtr == nullptr) { return false; }
	const CkXmlW* pObj0 = afterPtr->m_impl;
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SearchForTag2(pObj0,tag ? tag->Data() : L"");
    }
Boolean Xml::SetBinaryContent(Windows::Foundation::Collections::IVector<uint8>^inData, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBinaryContent(db0,zipFlag,encryptFlag,password ? password->Data() : L"");
    }
Boolean Xml::SetBinaryContentFromFile(Platform::String ^filename, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBinaryContentFromFile(filename ? filename->Data() : L"",zipFlag,encryptFlag,password ? password->Data() : L"");
    }
void Xml::SortByAttribute(Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByAttribute(attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortByAttributeInt(Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByAttributeInt(attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortByContent(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByContent(ascending);
    }
void Xml::SortByTag(Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortByTag(ascending);
    }
void Xml::SortRecordsByAttribute(Platform::String ^sortTag, Platform::String ^attrName, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortRecordsByAttribute(sortTag ? sortTag->Data() : L"",attrName ? attrName->Data() : L"",ascending);
    }
void Xml::SortRecordsByContent(Platform::String ^sortTag, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortRecordsByContent(sortTag ? sortTag->Data() : L"",ascending);
    }
void Xml::SortRecordsByContentInt(Platform::String ^sortTag, Boolean ascending)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SortRecordsByContentInt(sortTag ? sortTag->Data() : L"",ascending);
    }
Boolean Xml::SwapNode(Xml ^node)
    {
	if (m_impl == nullptr) { return false; }
	if (node == nullptr) { return false; }
	const CkXmlW* pObj0 = node->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SwapNode(*pObj0);
    }
Boolean Xml::SwapTree(Xml ^tree)
    {
	if (m_impl == nullptr) { return false; }
	if (tree == nullptr) { return false; }
	const CkXmlW* pObj0 = tree->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SwapTree(*pObj0);
    }
Platform::String ^Xml::TagContent(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->tagContent(tag ? tag->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Xml::TagEquals(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->TagEquals(tag ? tag->Data() : L"");
    }
Boolean Xml::UnzipContent(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnzipContent();
    }
Boolean Xml::UnzipTree(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnzipTree();
    }
Boolean Xml::UpdateAttribute(Platform::String ^attrName, Platform::String ^attrValue)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UpdateAttribute(attrName ? attrName->Data() : L"",attrValue ? attrValue->Data() : L"");
    }
Boolean Xml::UpdateAttributeInt(Platform::String ^attrName, int value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UpdateAttributeInt(attrName ? attrName->Data() : L"",value);
    }
void Xml::UpdateChildContent(Platform::String ^tag, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UpdateChildContent(tag ? tag->Data() : L"",value ? value->Data() : L"");
    }
void Xml::UpdateChildContentInt(Platform::String ^tag, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UpdateChildContentInt(tag ? tag->Data() : L"",value);
    }
Boolean Xml::ZipContent(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ZipContent();
    }
Boolean Xml::ZipTree(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ZipTree();
    }




