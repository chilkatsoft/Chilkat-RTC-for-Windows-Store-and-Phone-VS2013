
// This source file is generated.

#include "pch.h"
#include "Tar.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkTarW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Tar::~Tar(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Tar::Tar(void) 
{
    m_impl = new CkTarW();
}

//Chilkat::Tar::Tar(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkTarW *)x;
//    if (!m_impl) m_impl = new CkTarW();
//    }
//    
//Platform::IntPtr Chilkat::Tar::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Tar::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Tar::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Tar::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Tar::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Tar::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Tar::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Tar::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Tar::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Tar::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Tar::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Tar::CaptureXmlListing::get()
    {
    return m_impl ? m_impl->get_CaptureXmlListing() : false;
    }
void Chilkat::Tar::CaptureXmlListing::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CaptureXmlListing(newVal);
    }
String ^Chilkat::Tar::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::Tar::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
int Chilkat::Tar::DirMode::get()
    {
    return m_impl ? m_impl->get_DirMode() : 0;
    }
void Chilkat::Tar::DirMode::set(int newVal)
    {
        if (m_impl) m_impl->put_DirMode(newVal);
    }
String ^Chilkat::Tar::DirPrefix::get()
    {
    return ref new String(m_impl ? m_impl->dirPrefix() : L"");
    }
void Chilkat::Tar::DirPrefix::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DirPrefix(newVal ? newVal->Data() : L"");
    }
int Chilkat::Tar::FileMode::get()
    {
    return m_impl ? m_impl->get_FileMode() : 0;
    }
void Chilkat::Tar::FileMode::set(int newVal)
    {
        if (m_impl) m_impl->put_FileMode(newVal);
    }
int Chilkat::Tar::GroupId::get()
    {
    return m_impl ? m_impl->get_GroupId() : 0;
    }
void Chilkat::Tar::GroupId::set(int newVal)
    {
        if (m_impl) m_impl->put_GroupId(newVal);
    }
String ^Chilkat::Tar::GroupName::get()
    {
    return ref new String(m_impl ? m_impl->groupName() : L"");
    }
void Chilkat::Tar::GroupName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_GroupName(newVal ? newVal->Data() : L"");
    }
int Chilkat::Tar::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Tar::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Boolean Chilkat::Tar::MatchCaseSensitive::get()
    {
    return m_impl ? m_impl->get_MatchCaseSensitive() : false;
    }
void Chilkat::Tar::MatchCaseSensitive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_MatchCaseSensitive(newVal);
    }
String ^Chilkat::Tar::MustMatch::get()
    {
    return ref new String(m_impl ? m_impl->mustMatch() : L"");
    }
void Chilkat::Tar::MustMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MustMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Tar::MustNotMatch::get()
    {
    return ref new String(m_impl ? m_impl->mustNotMatch() : L"");
    }
void Chilkat::Tar::MustNotMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MustNotMatch(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Tar::NoAbsolutePaths::get()
    {
    return m_impl ? m_impl->get_NoAbsolutePaths() : false;
    }
void Chilkat::Tar::NoAbsolutePaths::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NoAbsolutePaths(newVal);
    }
int Chilkat::Tar::NumDirRoots::get()
    {
    return m_impl ? m_impl->get_NumDirRoots() : 0;
    }
int Chilkat::Tar::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Tar::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
int Chilkat::Tar::ScriptFileMode::get()
    {
    return m_impl ? m_impl->get_ScriptFileMode() : 0;
    }
void Chilkat::Tar::ScriptFileMode::set(int newVal)
    {
        if (m_impl) m_impl->put_ScriptFileMode(newVal);
    }
Boolean Chilkat::Tar::SuppressOutput::get()
    {
    return m_impl ? m_impl->get_SuppressOutput() : false;
    }
void Chilkat::Tar::SuppressOutput::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SuppressOutput(newVal);
    }
Boolean Chilkat::Tar::UntarCaseSensitive::get()
    {
    return m_impl ? m_impl->get_UntarCaseSensitive() : false;
    }
void Chilkat::Tar::UntarCaseSensitive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UntarCaseSensitive(newVal);
    }
Boolean Chilkat::Tar::UntarDebugLog::get()
    {
    return m_impl ? m_impl->get_UntarDebugLog() : false;
    }
void Chilkat::Tar::UntarDebugLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UntarDebugLog(newVal);
    }
Boolean Chilkat::Tar::UntarDiscardPaths::get()
    {
    return m_impl ? m_impl->get_UntarDiscardPaths() : false;
    }
void Chilkat::Tar::UntarDiscardPaths::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UntarDiscardPaths(newVal);
    }
String ^Chilkat::Tar::UntarFromDir::get()
    {
    return ref new String(m_impl ? m_impl->untarFromDir() : L"");
    }
void Chilkat::Tar::UntarFromDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UntarFromDir(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Tar::UntarMatchPattern::get()
    {
    return ref new String(m_impl ? m_impl->untarMatchPattern() : L"");
    }
void Chilkat::Tar::UntarMatchPattern::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UntarMatchPattern(newVal ? newVal->Data() : L"");
    }
int Chilkat::Tar::UntarMaxCount::get()
    {
    return m_impl ? m_impl->get_UntarMaxCount() : 0;
    }
void Chilkat::Tar::UntarMaxCount::set(int newVal)
    {
        if (m_impl) m_impl->put_UntarMaxCount(newVal);
    }
int Chilkat::Tar::UserId::get()
    {
    return m_impl ? m_impl->get_UserId() : 0;
    }
void Chilkat::Tar::UserId::set(int newVal)
    {
        if (m_impl) m_impl->put_UserId(newVal);
    }
String ^Chilkat::Tar::UserName::get()
    {
    return ref new String(m_impl ? m_impl->userName() : L"");
    }
void Chilkat::Tar::UserName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Tar::WriteFormat::get()
    {
    return ref new String(m_impl ? m_impl->writeFormat() : L"");
    }
void Chilkat::Tar::WriteFormat::set(String ^newVal)
    {
        if (m_impl) m_impl->put_WriteFormat(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Tar::XmlListing::get()
    {
    return ref new String(m_impl ? m_impl->xmlListing() : L"");
    }
void Chilkat::Tar::XmlListing::set(String ^newVal)
    {
        if (m_impl) m_impl->put_XmlListing(newVal ? newVal->Data() : L"");
    }


Boolean Tar::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Tar::AddDirRoot(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddDirRoot(dirPath ? dirPath->Data() : L"");
    }
Boolean Tar::AddFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddFile(path ? path->Data() : L"");
    }
Platform::String ^Tar::GetDirRoot(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getDirRoot(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Tar::ListXmlAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->listXml(tarPath ? tarPath->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Tar::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<int>^ Tar::UntarAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->Untar(tarPath ? tarPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::UntarBz2Async(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UntarBz2(tarPath ? tarPath->Data() : L"");

});
    }
Windows::Foundation::Collections::IVector<uint8>^Tar::UntarFirstMatchingToMemory(Windows::Foundation::Collections::IVector<uint8>^tarFileBytes, Platform::String ^matchPattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (tarFileBytes != nullptr) { v0 = to_vector(tarFileBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->UntarFirstMatchingToMemory(db0,matchPattern ? matchPattern->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
IAsyncOperation<int>^ Tar::UntarFromMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^tarFileBytes)
    {
return create_async([this, tarFileBytes]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	CkByteData db0; std::vector<uint8> v0;
        if (tarFileBytes != nullptr) { v0 = to_vector(tarFileBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->UntarFromMemory(db0);

});
    }
IAsyncOperation<Boolean>^ Tar::UntarGzAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UntarGz(tarPath ? tarPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::UntarZAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UntarZ(tarPath ? tarPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::VerifyTarAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyTar(tarPath ? tarPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::WriteTarAsync(Platform::String ^tarPath)
    {
return create_async([this, tarPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteTar(tarPath ? tarPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::WriteTarBz2Async(Platform::String ^bz2Path)
    {
return create_async([this, bz2Path]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteTarBz2(bz2Path ? bz2Path->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Tar::WriteTarGzAsync(Platform::String ^gzPath)
    {
return create_async([this, gzPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTarProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteTarGz(gzPath ? gzPath->Data() : L"");

});
    }




