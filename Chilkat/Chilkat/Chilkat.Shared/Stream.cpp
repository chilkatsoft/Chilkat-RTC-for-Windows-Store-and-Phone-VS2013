
// This source file is generated.

#include "pch.h"
#include "Stream.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkStreamW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Stream::~Stream(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Stream::Stream(void) 
{
    m_impl = new CkStreamW();
}

//Chilkat::Stream::Stream(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkStreamW *)x;
//    if (!m_impl) m_impl = new CkStreamW();
//    }
//    
//Platform::IntPtr Chilkat::Stream::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Stream::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Stream::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Stream::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Stream::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Stream::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Stream::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Stream::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Stream::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Stream::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Stream::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Stream::DefaultChunkSize::get()
    {
    return m_impl ? m_impl->get_DefaultChunkSize() : 0;
    }
void Chilkat::Stream::DefaultChunkSize::set(int newVal)
    {
        if (m_impl) m_impl->put_DefaultChunkSize(newVal);
    }
Boolean Chilkat::Stream::EndOfStream::get()
    {
    return m_impl ? m_impl->get_EndOfStream() : false;
    }
Boolean Chilkat::Stream::IsWriteClosed::get()
    {
    return m_impl ? m_impl->get_IsWriteClosed() : false;
    }
int Chilkat::Stream::ReadFailReason::get()
    {
    return m_impl ? m_impl->get_ReadFailReason() : 0;
    }
int Chilkat::Stream::ReadTimeoutMs::get()
    {
    return m_impl ? m_impl->get_ReadTimeoutMs() : 0;
    }
void Chilkat::Stream::ReadTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeoutMs(newVal);
    }
String ^Chilkat::Stream::SinkFile::get()
    {
    return ref new String(m_impl ? m_impl->sinkFile() : L"");
    }
void Chilkat::Stream::SinkFile::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SinkFile(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Stream::SourceFile::get()
    {
    return ref new String(m_impl ? m_impl->sourceFile() : L"");
    }
void Chilkat::Stream::SourceFile::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SourceFile(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Stream::StringBom::get()
    {
    return m_impl ? m_impl->get_StringBom() : false;
    }
void Chilkat::Stream::StringBom::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StringBom(newVal);
    }
String ^Chilkat::Stream::StringCharset::get()
    {
    return ref new String(m_impl ? m_impl->stringCharset() : L"");
    }
void Chilkat::Stream::StringCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_StringCharset(newVal ? newVal->Data() : L"");
    }
int Chilkat::Stream::WriteFailReason::get()
    {
    return m_impl ? m_impl->get_WriteFailReason() : 0;
    }
int Chilkat::Stream::WriteTimeoutMs::get()
    {
    return m_impl ? m_impl->get_WriteTimeoutMs() : 0;
    }
void Chilkat::Stream::WriteTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_WriteTimeoutMs(newVal);
    }
Boolean Chilkat::Stream::CanRead::get()
    {
    return m_impl ? m_impl->get_CanRead() : false;
    }
Boolean Chilkat::Stream::CanWrite::get()
    {
    return m_impl ? m_impl->get_CanWrite() : false;
    }
Boolean Chilkat::Stream::DataAvailable::get()
    {
    return m_impl ? m_impl->get_DataAvailable() : false;
    }
int64 Chilkat::Stream::Length::get()
    {
    return m_impl ? m_impl->get_Length() : 0;
    }
int64 Chilkat::Stream::NumReceived::get()
    {
    return m_impl ? m_impl->get_NumReceived() : 0;
    }
int64 Chilkat::Stream::NumSent::get()
    {
    return m_impl ? m_impl->get_NumSent() : 0;
    }


Boolean Stream::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Stream::ReadBytesAsync(void)
    {
return create_async([this]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadBytes(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Stream::ReadBytesENCAsync(Platform::String ^encoding)
    {
return create_async([this, encoding]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readBytesENC(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Stream::ReadNBytesAsync(int numBytes)
    {
return create_async([this, numBytes]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadNBytes(numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Stream::ReadNBytesENCAsync(int numBytes, Platform::String ^encoding)
    {
return create_async([this, numBytes, encoding]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readNBytesENC(numBytes,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Stream::ReadStringAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readString();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Stream::ReadToCRLFAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readToCRLF();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Stream::ReadUntilMatchAsync(Platform::String ^matchStr)
    {
return create_async([this, matchStr]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->readUntilMatch(matchStr ? matchStr->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
void Stream::Reset(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->Reset();
    }
IAsyncOperation<Boolean>^ Stream::RunStreamAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RunStream();

});
    }
Boolean Stream::SetSinkStream(Stream ^strm)
    {
	if (m_impl == nullptr) { return false; }
	if (strm == nullptr) { return false; }
	CkStreamW* pObj0 = strm->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSinkStream(*pObj0);
    }
Boolean Stream::SetSourceBytes(Windows::Foundation::Collections::IVector<uint8>^sourceData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (sourceData != nullptr) { v0 = to_vector(sourceData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSourceBytes(db0);
    }
Boolean Stream::SetSourceStream(Stream ^strm)
    {
	if (m_impl == nullptr) { return false; }
	if (strm == nullptr) { return false; }
	CkStreamW* pObj0 = strm->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSourceStream(*pObj0);
    }
Boolean Stream::SetSourceString(Platform::String ^srcStr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSourceString(srcStr ? srcStr->Data() : L"",charset ? charset->Data() : L"");
    }
IAsyncOperation<Boolean>^ Stream::WriteByteAsync(int byteVal)
    {
return create_async([this, byteVal]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteByte(byteVal);

});
    }
IAsyncOperation<Boolean>^ Stream::WriteBytesAsync(Windows::Foundation::Collections::IVector<uint8>^byteData)
    {
return create_async([this, byteData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (byteData != nullptr) { v0 = to_vector(byteData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteBytes(db0);

});
    }
IAsyncOperation<Boolean>^ Stream::WriteBytesENCAsync(Platform::String ^byteData, Platform::String ^encoding)
    {
return create_async([this, byteData, encoding]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteBytesENC(byteData ? byteData->Data() : L"",encoding ? encoding->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Stream::WriteStringAsync(Platform::String ^str)
    {
return create_async([this, str]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteString(str ? str->Data() : L"");

});
    }
Boolean Stream::WriteClose(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxStreamProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteClose();
    }




