
// This source file is generated.

#include "pch.h"
#include "Charset.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCharsetW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Charset::~Charset(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Charset::Charset(void) 
{
    m_impl = new CkCharsetW();
}

//Chilkat::Charset::Charset(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCharsetW *)x;
//    if (!m_impl) m_impl = new CkCharsetW();
//    }
//    
//Platform::IntPtr Chilkat::Charset::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Charset::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Charset::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Charset::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Charset::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Charset::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Charset::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Charset::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Charset::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Charset::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Charset::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Charset::AltToCharset::get()
    {
    return ref new String(m_impl ? m_impl->altToCharset() : L"");
    }
void Chilkat::Charset::AltToCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AltToCharset(newVal ? newVal->Data() : L"");
    }
int Chilkat::Charset::ErrorAction::get()
    {
    return m_impl ? m_impl->get_ErrorAction() : 0;
    }
void Chilkat::Charset::ErrorAction::set(int newVal)
    {
        if (m_impl) m_impl->put_ErrorAction(newVal);
    }
String ^Chilkat::Charset::FromCharset::get()
    {
    return ref new String(m_impl ? m_impl->fromCharset() : L"");
    }
void Chilkat::Charset::FromCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FromCharset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Charset::LastInputAsHex::get()
    {
    return ref new String(m_impl ? m_impl->lastInputAsHex() : L"");
    }
String ^Chilkat::Charset::LastInputAsQP::get()
    {
    return ref new String(m_impl ? m_impl->lastInputAsQP() : L"");
    }
String ^Chilkat::Charset::LastOutputAsHex::get()
    {
    return ref new String(m_impl ? m_impl->lastOutputAsHex() : L"");
    }
String ^Chilkat::Charset::LastOutputAsQP::get()
    {
    return ref new String(m_impl ? m_impl->lastOutputAsQP() : L"");
    }
Boolean Chilkat::Charset::SaveLast::get()
    {
    return m_impl ? m_impl->get_SaveLast() : false;
    }
void Chilkat::Charset::SaveLast::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SaveLast(newVal);
    }
String ^Chilkat::Charset::ToCharset::get()
    {
    return ref new String(m_impl ? m_impl->toCharset() : L"");
    }
void Chilkat::Charset::ToCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ToCharset(newVal ? newVal->Data() : L"");
    }


Boolean Charset::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
int Charset::CharsetToCodePage(Platform::String ^charsetName)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->CharsetToCodePage(charsetName ? charsetName->Data() : L"");
    }
Platform::String ^Charset::CodePageToCharset(int codePage)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->codePageToCharset(codePage);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ConvertData(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ConvertData(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Charset::ConvertFile(Platform::String ^srcPath, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertFile(srcPath ? srcPath->Data() : L"",destPath ? destPath->Data() : L"");
    }
Boolean Charset::ConvertFileNoPreamble(Platform::String ^srcPath, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertFileNoPreamble(srcPath ? srcPath->Data() : L"",destPath ? destPath->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ConvertFromUnicode(Platform::String ^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ConvertFromUnicode(inData ? inData->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ConvertFromUtf16(Windows::Foundation::Collections::IVector<uint8>^uniData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (uniData != nullptr) { v0 = to_vector(uniData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ConvertFromUtf16(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ConvertHtml(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ConvertHtml(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Charset::ConvertHtmlFile(Platform::String ^srcPath, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertHtmlFile(srcPath ? srcPath->Data() : L"",destPath ? destPath->Data() : L"");
    }
Platform::String ^Charset::ConvertToUnicode(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->convertToUnicode(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ConvertToUtf16(Windows::Foundation::Collections::IVector<uint8>^mbData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (mbData != nullptr) { v0 = to_vector(mbData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ConvertToUtf16(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Charset::EntityEncodeDec(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->entityEncodeDec(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Charset::EntityEncodeHex(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->entityEncodeHex(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Charset::GetHtmlCharset(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHtmlCharset(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Charset::GetHtmlFileCharset(Platform::String ^htmlFilename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHtmlFileCharset(htmlFilename ? htmlFilename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Charset::HtmlDecodeToStr(Platform::String ^inStr)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->htmlDecodeToStr(inStr ? inStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::HtmlEntityDecode(Windows::Foundation::Collections::IVector<uint8>^inHtml)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inHtml != nullptr) { v0 = to_vector(inHtml);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HtmlEntityDecode(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Charset::HtmlEntityDecodeFile(Platform::String ^inFilename, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HtmlEntityDecodeFile(inFilename ? inFilename->Data() : L"",destPath ? destPath->Data() : L"");
    }
Boolean Charset::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Platform::String ^Charset::LowerCase(Platform::String ^inStr)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->lowerCase(inStr ? inStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Charset::ReadFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFile(filename ? filename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Charset::ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readFileToString(filename ? filename->Data() : L"",srcCharset ? srcCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Charset::SetErrorBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetErrorBytes(db0);
    }
void Charset::SetErrorString(Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetErrorString(str ? str->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean Charset::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Platform::String ^Charset::UpperCase(Platform::String ^inStr)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->upperCase(inStr ? inStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Charset::UrlDecodeStr(Platform::String ^inStr)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->urlDecodeStr(inStr ? inStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Charset::VerifyData(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyData(charset ? charset->Data() : L"",db1);
    }
Boolean Charset::VerifyFile(Platform::String ^charset, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyFile(charset ? charset->Data() : L"",filename ? filename->Data() : L"");
    }
Boolean Charset::WriteFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (fileData != nullptr) { v1 = to_vector(fileData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteFile(filename ? filename->Data() : L"",db1);
    }
Boolean Charset::WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteStringToFile(str ? str->Data() : L"",filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }




