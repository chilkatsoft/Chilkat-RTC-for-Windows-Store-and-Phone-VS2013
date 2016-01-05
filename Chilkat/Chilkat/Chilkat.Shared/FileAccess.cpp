
// This source file is generated.

#include "pch.h"
#include "FileAccess.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkFileAccessW.h"
		
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::FileAccess::~FileAccess(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::FileAccess::FileAccess(void) 
{
    m_impl = new CkFileAccessW();
}

//Chilkat::FileAccess::FileAccess(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkFileAccessW *)x;
//    if (!m_impl) m_impl = new CkFileAccessW();
//    }
//    
//Platform::IntPtr Chilkat::FileAccess::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::FileAccess::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::FileAccess::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::FileAccess::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::FileAccess::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::FileAccess::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::FileAccess::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::FileAccess::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::FileAccess::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::FileAccess::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::FileAccess::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::FileAccess::CurrentDir::get()
    {
    return ref new String(m_impl ? m_impl->currentDir() : L"");
    }
Boolean Chilkat::FileAccess::EndOfFile::get()
    {
    return m_impl ? m_impl->get_EndOfFile() : false;
    }
int Chilkat::FileAccess::FileOpenError::get()
    {
    return m_impl ? m_impl->get_FileOpenError() : 0;
    }
String ^Chilkat::FileAccess::FileOpenErrorMsg::get()
    {
    return ref new String(m_impl ? m_impl->fileOpenErrorMsg() : L"");
    }


Boolean FileAccess::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean FileAccess::AppendAnsi(Platform::String ^text)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendAnsi(text ? text->Data() : L"");
    }
Boolean FileAccess::AppendText(Platform::String ^text, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendText(text ? text->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean FileAccess::AppendUnicodeBOM(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendUnicodeBOM();
    }
Boolean FileAccess::AppendUtf8BOM(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendUtf8BOM();
    }
Boolean FileAccess::DirAutoCreate(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DirAutoCreate(path ? path->Data() : L"");
    }
Boolean FileAccess::DirCreate(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DirCreate(path ? path->Data() : L"");
    }
Boolean FileAccess::DirDelete(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DirDelete(path ? path->Data() : L"");
    }
Boolean FileAccess::DirEnsureExists(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DirEnsureExists(filePath ? filePath->Data() : L"");
    }
void FileAccess::FileClose(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->FileClose();
    }
Boolean FileAccess::FileContentsEqual(Platform::String ^path1, Platform::String ^path2)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileContentsEqual(path1 ? path1->Data() : L"",path2 ? path2->Data() : L"");
    }
Boolean FileAccess::FileCopy(Platform::String ^existing, Platform::String ^newFilename, Boolean failIfExists)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileCopy(existing ? existing->Data() : L"",newFilename ? newFilename->Data() : L"",failIfExists);
    }
Boolean FileAccess::FileDelete(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileDelete(filename ? filename->Data() : L"");
    }
Boolean FileAccess::FileExists(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileExists(path ? path->Data() : L"");
    }
int FileAccess::FileExists3(Platform::String ^path)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->FileExists3(path ? path->Data() : L"");
    }
Boolean FileAccess::FileOpen(Platform::String ^filename, uint32 accessMode, uint32 shareMode, uint32 createDisp, uint32 attr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileOpen(filename ? filename->Data() : L"",accessMode,shareMode,createDisp,attr);
    }
Windows::Foundation::Collections::IVector<uint8>^FileAccess::FileRead(int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->FileRead(numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean FileAccess::FileRename(Platform::String ^existing, Platform::String ^newFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileRename(existing ? existing->Data() : L"",newFilename ? newFilename->Data() : L"");
    }
Boolean FileAccess::FileSeek(int offset, int origin)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileSeek(offset,origin);
    }
int FileAccess::FileSize(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->FileSize(filename ? filename->Data() : L"");
    }
Boolean FileAccess::FileWrite(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FileWrite(db0);
    }
Platform::String ^FileAccess::GetTempFilename(Platform::String ^dirName, Platform::String ^prefix)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTempFilename(dirName ? dirName->Data() : L"",prefix ? prefix->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean FileAccess::OpenForAppend(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->OpenForAppend(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForRead(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->OpenForRead(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForReadWrite(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->OpenForReadWrite(filePath ? filePath->Data() : L"");
    }
Boolean FileAccess::OpenForWrite(Platform::String ^filePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->OpenForWrite(filePath ? filePath->Data() : L"");
    }
Platform::String ^FileAccess::ReadBinaryToEncoded(Platform::String ^filename, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readBinaryToEncoded(filename ? filename->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^FileAccess::ReadEntireFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadEntireFile(filename ? filename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^FileAccess::ReadEntireTextFile(Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readEntireTextFile(filename ? filename->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean FileAccess::ReassembleFile(Platform::String ^partsDirPath, Platform::String ^partPrefix, Platform::String ^partExtension, Platform::String ^reassembledFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ReassembleFile(partsDirPath ? partsDirPath->Data() : L"",partPrefix ? partPrefix->Data() : L"",partExtension ? partExtension->Data() : L"",reassembledFilename ? reassembledFilename->Data() : L"");
    }
int FileAccess::ReplaceStrings(Platform::String ^path, Platform::String ^charset, Platform::String ^existingString, Platform::String ^replacementString)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->ReplaceStrings(path ? path->Data() : L"",charset ? charset->Data() : L"",existingString ? existingString->Data() : L"",replacementString ? replacementString->Data() : L"");
    }
Boolean FileAccess::SetCurrentDir(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetCurrentDir(path ? path->Data() : L"");
    }
Boolean FileAccess::SetFileTimes(Platform::String ^path, Chilkat::CkDateTime ^create, Chilkat::CkDateTime ^lastAccess, Chilkat::CkDateTime ^lastModified)
    {
	if (m_impl == nullptr) { return false; }
	if (create == nullptr) { return false; }
	CkDateTimeW* pObj1 = create->m_impl;
	 if (!pObj1) { return false; }
	if (lastAccess == nullptr) { return false; }
	CkDateTimeW* pObj2 = lastAccess->m_impl;
	 if (!pObj2) { return false; }
	if (lastModified == nullptr) { return false; }
	CkDateTimeW* pObj3 = lastModified->m_impl;
	 if (!pObj3) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFileTimes(path ? path->Data() : L"",*pObj1,*pObj2,*pObj3);
    }
Boolean FileAccess::SetLastModified(Platform::String ^path, Chilkat::CkDateTime ^lastModified)
    {
	if (m_impl == nullptr) { return false; }
	if (lastModified == nullptr) { return false; }
	CkDateTimeW* pObj1 = lastModified->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetLastModified(path ? path->Data() : L"",*pObj1);
    }
Boolean FileAccess::SplitFile(Platform::String ^fileToSplit, Platform::String ^partPrefix, Platform::String ^partExtension, int partSize, Platform::String ^destDir)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SplitFile(fileToSplit ? fileToSplit->Data() : L"",partPrefix ? partPrefix->Data() : L"",partExtension ? partExtension->Data() : L"",partSize,destDir ? destDir->Data() : L"");
    }
Boolean FileAccess::TreeDelete(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->TreeDelete(path ? path->Data() : L"");
    }
Boolean FileAccess::WriteEntireFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (fileData != nullptr) { v1 = to_vector(fileData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteEntireFile(filename ? filename->Data() : L"",db1);
    }
Boolean FileAccess::WriteEntireTextFile(Platform::String ^filename, Platform::String ^fileData, Platform::String ^charset, Boolean includePreamble)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->WriteEntireTextFile(filename ? filename->Data() : L"",fileData ? fileData->Data() : L"",charset ? charset->Data() : L"",includePreamble);
    }




