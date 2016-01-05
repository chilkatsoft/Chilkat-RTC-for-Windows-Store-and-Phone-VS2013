
// This source file is generated.

#include "pch.h"
#include "UnixCompress.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkUnixCompressW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::UnixCompress::~UnixCompress(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::UnixCompress::UnixCompress(void) 
{
    m_impl = new CkUnixCompressW();
}

//Chilkat::UnixCompress::UnixCompress(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkUnixCompressW *)x;
//    if (!m_impl) m_impl = new CkUnixCompressW();
//    }
//    
//Platform::IntPtr Chilkat::UnixCompress::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::UnixCompress::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::UnixCompress::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::UnixCompress::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::UnixCompress::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::UnixCompress::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::UnixCompress::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::UnixCompress::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::UnixCompress::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::UnixCompress::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::UnixCompress::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::UnixCompress::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::UnixCompress::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }


Boolean UnixCompress::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ UnixCompress::CompressFileAsync(Platform::String ^inFilename, Platform::String ^destPath)
    {
return create_async([this, inFilename, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CompressFile(inFilename ? inFilename->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UnixCompress::CompressFileToMemAsync(Platform::String ^inFilename)
    {
return create_async([this, inFilename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->CompressFileToMem(inFilename ? inFilename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
Boolean UnixCompress::CompressMemToFile(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CompressMemToFile(db0,destPath ? destPath->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^UnixCompress::CompressMemory(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->CompressMemory(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^UnixCompress::CompressString(Platform::String ^inStr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->CompressString(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean UnixCompress::CompressStringToFile(Platform::String ^inStr, Platform::String ^charset, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CompressStringToFile(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",destPath ? destPath->Data() : L"");
    }
Boolean UnixCompress::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
IAsyncOperation<Boolean>^ UnixCompress::UnTarZAsync(Platform::String ^zFilename, Platform::String ^destDir, Boolean bNoAbsolute)
    {
return create_async([this, zFilename, destDir, bNoAbsolute]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnTarZ(zFilename ? zFilename->Data() : L"",destDir ? destDir->Data() : L"",bNoAbsolute);

});
    }
IAsyncOperation<Boolean>^ UnixCompress::UncompressFileAsync(Platform::String ^inFilename, Platform::String ^destPath)
    {
return create_async([this, inFilename, destPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UncompressFile(inFilename ? inFilename->Data() : L"",destPath ? destPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UnixCompress::UncompressFileToMemAsync(Platform::String ^inFilename)
    {
return create_async([this, inFilename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->UncompressFileToMem(inFilename ? inFilename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ UnixCompress::UncompressFileToStringAsync(Platform::String ^inFilename, Platform::String ^inCharset)
    {
return create_async([this, inFilename, inCharset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->uncompressFileToString(inFilename ? inFilename->Data() : L"",inCharset ? inCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean UnixCompress::UncompressMemToFile(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UncompressMemToFile(db0,destPath ? destPath->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^UnixCompress::UncompressMemory(Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->UncompressMemory(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^UnixCompress::UncompressString(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^inCharset)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->uncompressString(db0,inCharset ? inCharset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean UnixCompress::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxUnixCompressProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }




