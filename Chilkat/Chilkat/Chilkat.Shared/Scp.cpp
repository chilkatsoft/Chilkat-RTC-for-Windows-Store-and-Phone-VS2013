
// This source file is generated.

#include "pch.h"
#include "Scp.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkScpW.h"
		
#include "include/CkSshW.h"
#include "Ssh.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Scp::~Scp(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Scp::Scp(void) 
{
    m_impl = new CkScpW();
}

//Chilkat::Scp::Scp(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkScpW *)x;
//    if (!m_impl) m_impl = new CkScpW();
//    }
//    
//Platform::IntPtr Chilkat::Scp::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Scp::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Scp::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Scp::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Scp::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Scp::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Scp::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Scp::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Scp::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Scp::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Scp::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Scp::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Scp::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
int Chilkat::Scp::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Scp::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
String ^Chilkat::Scp::SyncMustMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustMatch() : L"");
    }
void Chilkat::Scp::SyncMustMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Scp::SyncMustNotMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustNotMatch() : L"");
    }
void Chilkat::Scp::SyncMustNotMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustNotMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Scp::SyncedFiles::get()
    {
    return ref new String(m_impl ? m_impl->syncedFiles() : L"");
    }
void Chilkat::Scp::SyncedFiles::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncedFiles(newVal ? newVal->Data() : L"");
    }


Boolean Scp::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Scp::DownloadBinaryAsync(Platform::String ^remotePath)
    {
return create_async([this, remotePath]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DownloadBinary(remotePath ? remotePath->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Scp::DownloadBinaryEncodedAsync(Platform::String ^remotePath, Platform::String ^encoding)
    {
return create_async([this, remotePath, encoding]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->downloadBinaryEncoded(remotePath ? remotePath->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Scp::DownloadFileAsync(Platform::String ^remotePath, Platform::String ^localPath)
    {
return create_async([this, remotePath, localPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadFile(remotePath ? remotePath->Data() : L"",localPath ? localPath->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Scp::DownloadStringAsync(Platform::String ^remotePath, Platform::String ^charset)
    {
return create_async([this, remotePath, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->downloadString(remotePath ? remotePath->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Scp::SyncTreeDownloadAsync(Platform::String ^remoteRoot, Platform::String ^localRoot, int mode, Boolean bRecurse)
    {
return create_async([this, remoteRoot, localRoot, mode, bRecurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncTreeDownload(remoteRoot ? remoteRoot->Data() : L"",localRoot ? localRoot->Data() : L"",mode,bRecurse);

});
    }
IAsyncOperation<Boolean>^ Scp::SyncTreeUploadAsync(Platform::String ^localBaseDir, Platform::String ^remoteBaseDir, int mode, Boolean bRecurse)
    {
return create_async([this, localBaseDir, remoteBaseDir, mode, bRecurse]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncTreeUpload(localBaseDir ? localBaseDir->Data() : L"",remoteBaseDir ? remoteBaseDir->Data() : L"",mode,bRecurse);

});
    }
IAsyncOperation<Boolean>^ Scp::UploadBinaryAsync(Platform::String ^remotePath, Windows::Foundation::Collections::IVector<uint8>^binData)
    {
return create_async([this, remotePath, binData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (binData != nullptr) { v1 = to_vector(binData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadBinary(remotePath ? remotePath->Data() : L"",db1);

});
    }
IAsyncOperation<Boolean>^ Scp::UploadBinaryEncodedAsync(Platform::String ^remotePath, Platform::String ^encodedData, Platform::String ^encoding)
    {
return create_async([this, remotePath, encodedData, encoding]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadBinaryEncoded(remotePath ? remotePath->Data() : L"",encodedData ? encodedData->Data() : L"",encoding ? encoding->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Scp::UploadFileAsync(Platform::String ^localPath, Platform::String ^remotePath)
    {
return create_async([this, localPath, remotePath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadFile(localPath ? localPath->Data() : L"",remotePath ? remotePath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Scp::UploadStringAsync(Platform::String ^remotePath, Platform::String ^textData, Platform::String ^charset)
    {
return create_async([this, remotePath, textData, charset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UploadString(remotePath ? remotePath->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"");

});
    }
Boolean Scp::UseSsh(Ssh ^sshConnection)
    {
	if (m_impl == nullptr) { return false; }
	if (sshConnection == nullptr) { return false; }
	CkSshW* pObj0 = sshConnection->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxScpProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSsh(*pObj0);
    }




