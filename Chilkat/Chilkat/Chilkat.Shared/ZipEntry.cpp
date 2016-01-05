
// This source file is generated.

#include "pch.h"
#include "ZipEntry.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkZipEntryW.h"
		
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::ZipEntry::~ZipEntry(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::ZipEntry::ZipEntry(void) 
{
    m_impl = new CkZipEntryW();
}

//Chilkat::ZipEntry::ZipEntry(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkZipEntryW *)x;
//    if (!m_impl) m_impl = new CkZipEntryW();
//    }
//    
//Platform::IntPtr Chilkat::ZipEntry::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::ZipEntry::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::ZipEntry::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::ZipEntry::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::ZipEntry::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::ZipEntry::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::ZipEntry::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::ZipEntry::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::ZipEntry::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::ZipEntry::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::ZipEntry::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::ZipEntry::Comment::get()
    {
    return ref new String(m_impl ? m_impl->comment() : L"");
    }
void Chilkat::ZipEntry::Comment::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Comment(newVal ? newVal->Data() : L"");
    }
uint32 Chilkat::ZipEntry::CompressedLength::get()
    {
    return m_impl ? m_impl->get_CompressedLength() : 0;
    }
int64 Chilkat::ZipEntry::CompressedLength64::get()
    {
    return m_impl ? m_impl->get_CompressedLength64() : 0;
    }
int Chilkat::ZipEntry::CompressionLevel::get()
    {
    return m_impl ? m_impl->get_CompressionLevel() : 0;
    }
void Chilkat::ZipEntry::CompressionLevel::set(int newVal)
    {
        if (m_impl) m_impl->put_CompressionLevel(newVal);
    }
int Chilkat::ZipEntry::CompressionMethod::get()
    {
    return m_impl ? m_impl->get_CompressionMethod() : 0;
    }
void Chilkat::ZipEntry::CompressionMethod::set(int newVal)
    {
        if (m_impl) m_impl->put_CompressionMethod(newVal);
    }
int Chilkat::ZipEntry::Crc::get()
    {
    return m_impl ? m_impl->get_Crc() : 0;
    }
int Chilkat::ZipEntry::EntryID::get()
    {
    return m_impl ? m_impl->get_EntryID() : 0;
    }
int Chilkat::ZipEntry::EntryType::get()
    {
    return m_impl ? m_impl->get_EntryType() : 0;
    }
String ^Chilkat::ZipEntry::FileDateTimeStr::get()
    {
    return ref new String(m_impl ? m_impl->fileDateTimeStr() : L"");
    }
void Chilkat::ZipEntry::FileDateTimeStr::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FileDateTimeStr(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::ZipEntry::FileName::get()
    {
    return ref new String(m_impl ? m_impl->fileName() : L"");
    }
void Chilkat::ZipEntry::FileName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FileName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::ZipEntry::FileNameHex::get()
    {
    return ref new String(m_impl ? m_impl->fileNameHex() : L"");
    }
int Chilkat::ZipEntry::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::ZipEntry::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::ZipEntry::IsDirectory::get()
    {
    return m_impl ? m_impl->get_IsDirectory() : false;
    }
Boolean Chilkat::ZipEntry::TextFlag::get()
    {
    return m_impl ? m_impl->get_TextFlag() : false;
    }
void Chilkat::ZipEntry::TextFlag::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TextFlag(newVal);
    }
uint32 Chilkat::ZipEntry::UncompressedLength::get()
    {
    return m_impl ? m_impl->get_UncompressedLength() : 0;
    }
int64 Chilkat::ZipEntry::UncompressedLength64::get()
    {
    return m_impl ? m_impl->get_UncompressedLength64() : 0;
    }


Boolean ZipEntry::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ ZipEntry::AppendDataAsync(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
return create_async([this, inData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendData(db0);

});
    }
IAsyncOperation<Boolean>^ ZipEntry::AppendStringAsync(Platform::String ^inStr, Platform::String ^charset)
    {
return create_async([this, inStr, charset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendString(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"");

});
    }
Windows::Foundation::Collections::IVector<uint8>^ZipEntry::Copy(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->Copy(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^ZipEntry::CopyToBase64(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->copyToBase64();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^ZipEntry::CopyToHex(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->copyToHex();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ ZipEntry::ExtractAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Extract(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ ZipEntry::ExtractIntoAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExtractInto(dirPath ? dirPath->Data() : L"");

});
    }
Chilkat::CkDateTime ^ZipEntry::GetDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ZipEntry::InflateAsync(void)
    {
return create_async([this]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->Inflate(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
ZipEntry ^ZipEntry::NextEntry(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->NextEntry();
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^ZipEntry::NextMatchingEntry(Platform::String ^matchStr)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->NextMatchingEntry(matchStr ? matchStr->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
Boolean ZipEntry::ReplaceData(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReplaceData(db0);
    }
Boolean ZipEntry::ReplaceString(Platform::String ^inStr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ReplaceString(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"");
    }
void ZipEntry::SetDt(Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return ; }
	if (dt == nullptr) { return ; }
	CkDateTimeW* pObj0 = dt->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetDt(*pObj0);
    }
IAsyncOperation<Platform::String ^>^ ZipEntry::UnzipToStringAsync(int lineEndingBehavior, Platform::String ^srcCharset)
    {
return create_async([this, lineEndingBehavior, srcCharset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipEntryProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->unzipToString(lineEndingBehavior,srcCharset ? srcCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }




