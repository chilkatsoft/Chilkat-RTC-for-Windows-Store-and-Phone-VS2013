
// This source file is generated.

#include "pch.h"
#include "Zip.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkZipW.h"
		
#include "include/CkZipEntryW.h"
#include "include/CkStringArrayW.h"
#include "ZipEntry.h"
#include "StringArray.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Zip::~Zip(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Zip::Zip(void) 
{
    m_impl = new CkZipW();
}

//Chilkat::Zip::Zip(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkZipW *)x;
//    if (!m_impl) m_impl = new CkZipW();
//    }
//    
//Platform::IntPtr Chilkat::Zip::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Zip::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Zip::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Zip::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Zip::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Zip::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Zip::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Zip::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Zip::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Zip::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Zip::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Zip::AppendFromDir::get()
    {
    return ref new String(m_impl ? m_impl->appendFromDir() : L"");
    }
void Chilkat::Zip::AppendFromDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AppendFromDir(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Zip::CaseSensitive::get()
    {
    return m_impl ? m_impl->get_CaseSensitive() : false;
    }
void Chilkat::Zip::CaseSensitive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CaseSensitive(newVal);
    }
Boolean Chilkat::Zip::ClearArchiveAttribute::get()
    {
    return m_impl ? m_impl->get_ClearArchiveAttribute() : false;
    }
void Chilkat::Zip::ClearArchiveAttribute::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ClearArchiveAttribute(newVal);
    }
Boolean Chilkat::Zip::ClearReadOnlyAttr::get()
    {
    return m_impl ? m_impl->get_ClearReadOnlyAttr() : false;
    }
void Chilkat::Zip::ClearReadOnlyAttr::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ClearReadOnlyAttr(newVal);
    }
String ^Chilkat::Zip::Comment::get()
    {
    return ref new String(m_impl ? m_impl->comment() : L"");
    }
void Chilkat::Zip::Comment::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Comment(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Zip::DecryptPassword::get()
    {
    return ref new String(m_impl ? m_impl->decryptPassword() : L"");
    }
void Chilkat::Zip::DecryptPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DecryptPassword(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Zip::DiscardPaths::get()
    {
    return m_impl ? m_impl->get_DiscardPaths() : false;
    }
void Chilkat::Zip::DiscardPaths::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_DiscardPaths(newVal);
    }
int Chilkat::Zip::EncryptKeyLength::get()
    {
    return m_impl ? m_impl->get_EncryptKeyLength() : 0;
    }
void Chilkat::Zip::EncryptKeyLength::set(int newVal)
    {
        if (m_impl) m_impl->put_EncryptKeyLength(newVal);
    }
String ^Chilkat::Zip::EncryptPassword::get()
    {
    return ref new String(m_impl ? m_impl->encryptPassword() : L"");
    }
void Chilkat::Zip::EncryptPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EncryptPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Zip::Encryption::get()
    {
    return m_impl ? m_impl->get_Encryption() : 0;
    }
void Chilkat::Zip::Encryption::set(int newVal)
    {
        if (m_impl) m_impl->put_Encryption(newVal);
    }
int Chilkat::Zip::FileCount::get()
    {
    return m_impl ? m_impl->get_FileCount() : 0;
    }
String ^Chilkat::Zip::FileName::get()
    {
    return ref new String(m_impl ? m_impl->fileName() : L"");
    }
void Chilkat::Zip::FileName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FileName(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Zip::HasZipFormatErrors::get()
    {
    return m_impl ? m_impl->get_HasZipFormatErrors() : false;
    }
int Chilkat::Zip::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Zip::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Zip::IgnoreAccessDenied::get()
    {
    return m_impl ? m_impl->get_IgnoreAccessDenied() : false;
    }
void Chilkat::Zip::IgnoreAccessDenied::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IgnoreAccessDenied(newVal);
    }
int Chilkat::Zip::NumEntries::get()
    {
    return m_impl ? m_impl->get_NumEntries() : 0;
    }
int Chilkat::Zip::OemCodePage::get()
    {
    return m_impl ? m_impl->get_OemCodePage() : 0;
    }
void Chilkat::Zip::OemCodePage::set(int newVal)
    {
        if (m_impl) m_impl->put_OemCodePage(newVal);
    }
Boolean Chilkat::Zip::OverwriteExisting::get()
    {
    return m_impl ? m_impl->get_OverwriteExisting() : false;
    }
void Chilkat::Zip::OverwriteExisting::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_OverwriteExisting(newVal);
    }
Boolean Chilkat::Zip::PasswordProtect::get()
    {
    return m_impl ? m_impl->get_PasswordProtect() : false;
    }
void Chilkat::Zip::PasswordProtect::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PasswordProtect(newVal);
    }
String ^Chilkat::Zip::PathPrefix::get()
    {
    return ref new String(m_impl ? m_impl->pathPrefix() : L"");
    }
void Chilkat::Zip::PathPrefix::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PathPrefix(newVal ? newVal->Data() : L"");
    }
int Chilkat::Zip::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Zip::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
String ^Chilkat::Zip::TempDir::get()
    {
    return ref new String(m_impl ? m_impl->tempDir() : L"");
    }
void Chilkat::Zip::TempDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TempDir(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Zip::TextFlag::get()
    {
    return m_impl ? m_impl->get_TextFlag() : false;
    }
void Chilkat::Zip::TextFlag::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TextFlag(newVal);
    }
Boolean Chilkat::Zip::Zipx::get()
    {
    return m_impl ? m_impl->get_Zipx() : false;
    }
void Chilkat::Zip::Zipx::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Zipx(newVal);
    }
String ^Chilkat::Zip::ZipxDefaultAlg::get()
    {
    return ref new String(m_impl ? m_impl->zipxDefaultAlg() : L"");
    }
void Chilkat::Zip::ZipxDefaultAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ZipxDefaultAlg(newVal ? newVal->Data() : L"");
    }


Boolean Zip::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Zip::AddNoCompressExtension(Platform::String ^fileExtension)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddNoCompressExtension(fileExtension ? fileExtension->Data() : L"");
    }
ZipEntry ^Zip::AppendBase64(Platform::String ^fileName, Platform::String ^encodedCompressedData)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendBase64(fileName ? fileName->Data() : L"",encodedCompressedData ? encodedCompressedData->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::AppendCompressed(Platform::String ^fileName, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendCompressed(fileName ? fileName->Data() : L"",db1);
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::AppendData(Platform::String ^fileName, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendData(fileName ? fileName->Data() : L"",db1);
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
IAsyncOperation<Boolean>^ Zip::AppendFilesAsync(Platform::String ^filePattern, Boolean recurse)
    {
return create_async([this, filePattern, recurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendFiles(filePattern ? filePattern->Data() : L"",recurse);

});
    }
IAsyncOperation<Boolean>^ Zip::AppendFilesExAsync(Platform::String ^filePattern, Boolean recurse, Boolean saveExtraPath, Boolean archiveOnly, Boolean includeHidden, Boolean includeSystem)
    {
return create_async([this, filePattern, recurse, saveExtraPath, archiveOnly, includeHidden, includeSystem]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendFilesEx(filePattern ? filePattern->Data() : L"",recurse,saveExtraPath,archiveOnly,includeHidden,includeSystem);

});
    }
ZipEntry ^Zip::AppendHex(Platform::String ^fileName, Platform::String ^encodedCompressedData)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendHex(fileName ? fileName->Data() : L"",encodedCompressedData ? encodedCompressedData->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
IAsyncOperation<Boolean>^ Zip::AppendMultipleAsync(StringArray ^fileSpecs, Boolean recurse)
    {
return create_async([this, fileSpecs, recurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (fileSpecs == nullptr) { return false; }
	CkStringArrayW* pObj0 = fileSpecs->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendMultiple(*pObj0,recurse);

});
    }
ZipEntry ^Zip::AppendNew(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendNew(fileName ? fileName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::AppendNewDir(Platform::String ^dirName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendNewDir(dirName ? dirName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
IAsyncOperation<Boolean>^ Zip::AppendOneFileOrDirAsync(Platform::String ^fileOrDirName, Boolean saveExtraPath)
    {
return create_async([this, fileOrDirName, saveExtraPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendOneFileOrDir(fileOrDirName ? fileOrDirName->Data() : L"",saveExtraPath);

});
    }
ZipEntry ^Zip::AppendString(Platform::String ^fileName, Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendString(fileName ? fileName->Data() : L"",str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::AppendString2(Platform::String ^fileName, Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->AppendString2(fileName ? fileName->Data() : L"",str ? str->Data() : L"",charset ? charset->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
Boolean Zip::AppendZip(Platform::String ^zipFileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendZip(zipFileName ? zipFileName->Data() : L"");
    }
void Zip::CloseZip(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->CloseZip();
    }
Boolean Zip::DeleteEntry(ZipEntry ^entry)
    {
	if (m_impl == nullptr) { return false; }
	if (entry == nullptr) { return false; }
	CkZipEntryW* pObj0 = entry->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteEntry(*pObj0);
    }
void Zip::ExcludeDir(Platform::String ^dirName)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ExcludeDir(dirName ? dirName->Data() : L"");
    }
IAsyncOperation<Boolean>^ Zip::ExtractAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Extract(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Zip::ExtractIntoAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExtractInto(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Zip::ExtractMatchingAsync(Platform::String ^dirPath, Platform::String ^pattern)
    {
return create_async([this, dirPath, pattern]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExtractMatching(dirPath ? dirPath->Data() : L"",pattern ? pattern->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Zip::ExtractNewerAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExtractNewer(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Zip::ExtractOneAsync(ZipEntry ^entry, Platform::String ^dirPath)
    {
return create_async([this, entry, dirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (entry == nullptr) { return false; }
	CkZipEntryW* pObj0 = entry->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExtractOne(*pObj0,dirPath ? dirPath->Data() : L"");

});
    }
ZipEntry ^Zip::FirstEntry(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->FirstEntry();
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::FirstMatchingEntry(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->FirstMatchingEntry(pattern ? pattern->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
Platform::String ^Zip::GetDirectoryAsXML(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getDirectoryAsXML();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
ZipEntry ^Zip::GetEntryByID(int entryID)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->GetEntryByID(entryID);
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::GetEntryByIndex(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->GetEntryByIndex(index);
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
ZipEntry ^Zip::GetEntryByName(Platform::String ^entryName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->GetEntryByName(entryName ? entryName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
StringArray ^Zip::GetExclusions(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetExclusions();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
ZipEntry ^Zip::InsertNew(Platform::String ^fileName, int beforeIndex)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = ZipEntry
	// cppType = CkZipEntry *
	CkZipEntryW *pRetObj = m_impl->InsertNew(fileName ? fileName->Data() : L"",beforeIndex);
	if (!pRetObj) return nullptr;
	Chilkat::ZipEntry ^pZipEntry = ref new Chilkat::ZipEntry();
	pZipEntry->m_impl = pRetObj;
	return pZipEntry;
    }
Boolean Zip::IsNoCompressExtension(Platform::String ^fileExtension)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsNoCompressExtension(fileExtension ? fileExtension->Data() : L"");
    }
Boolean Zip::IsPasswordProtected(Platform::String ^zipFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsPasswordProtected(zipFilename ? zipFilename->Data() : L"");
    }
Boolean Zip::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Boolean Zip::NewZip(Platform::String ^ZipFileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->NewZip(ZipFileName ? ZipFileName->Data() : L"");
    }
Boolean Zip::OpenFromByteData(Windows::Foundation::Collections::IVector<uint8>^byteData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (byteData != nullptr) { v0 = to_vector(byteData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->OpenFromByteData(db0);
    }
Boolean Zip::OpenFromMemory(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->OpenFromMemory(db0);
    }
IAsyncOperation<Boolean>^ Zip::OpenZipAsync(Platform::String ^ZipFileName)
    {
return create_async([this, ZipFileName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->OpenZip(ZipFileName ? ZipFileName->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Zip::QuickAppendAsync(Platform::String ^ZipFileName)
    {
return create_async([this, ZipFileName]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->QuickAppend(ZipFileName ? ZipFileName->Data() : L"");

});
    }
void Zip::RemoveNoCompressExtension(Platform::String ^fileExtension)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RemoveNoCompressExtension(fileExtension ? fileExtension->Data() : L"");
    }
void Zip::SetCompressionLevel(int level)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetCompressionLevel(level);
    }
void Zip::SetExclusions(StringArray ^excludePatterns)
    {
	if (m_impl == nullptr) { return ; }
	if (excludePatterns == nullptr) { return ; }
	const CkStringArrayW* pObj0 = excludePatterns->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetExclusions(*pObj0);
    }
void Zip::SetPassword(Platform::String ^password)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetPassword(password ? password->Data() : L"");
    }
Boolean Zip::UnlockComponent(Platform::String ^regCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(regCode ? regCode->Data() : L"");
    }
IAsyncOperation<int>^ Zip::UnzipAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->Unzip(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<int>^ Zip::UnzipIntoAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->UnzipInto(dirPath ? dirPath->Data() : L"");

});
    }
IAsyncOperation<int>^ Zip::UnzipMatchingAsync(Platform::String ^dirPath, Platform::String ^pattern, Boolean verbose)
    {
return create_async([this, dirPath, pattern, verbose]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->UnzipMatching(dirPath ? dirPath->Data() : L"",pattern ? pattern->Data() : L"",verbose);

});
    }
IAsyncOperation<int>^ Zip::UnzipMatchingIntoAsync(Platform::String ^dirPath, Platform::String ^pattern, Boolean verbose)
    {
return create_async([this, dirPath, pattern, verbose]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->UnzipMatchingInto(dirPath ? dirPath->Data() : L"",pattern ? pattern->Data() : L"",verbose);

});
    }
IAsyncOperation<int>^ Zip::UnzipNewerAsync(Platform::String ^dirPath)
    {
return create_async([this, dirPath]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->UnzipNewer(dirPath ? dirPath->Data() : L"");

});
    }
Boolean Zip::VerifyPassword(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyPassword();
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Zip::WriteToMemoryAsync(void)
    {
return create_async([this]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->WriteToMemory(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Boolean>^ Zip::WriteZipAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteZip();

});
    }
IAsyncOperation<Boolean>^ Zip::WriteZipAndCloseAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteZipAndClose();

});
    }




