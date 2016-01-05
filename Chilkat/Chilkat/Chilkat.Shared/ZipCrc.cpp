
// This source file is generated.

#include "pch.h"
#include "ZipCrc.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkZipCrcW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::ZipCrc::~ZipCrc(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::ZipCrc::ZipCrc(void) 
{
    m_impl = new CkZipCrcW();
}

//Chilkat::ZipCrc::ZipCrc(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkZipCrcW *)x;
//    if (!m_impl) m_impl = new CkZipCrcW();
//    }
//    
//Platform::IntPtr Chilkat::ZipCrc::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::ZipCrc::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::ZipCrc::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::ZipCrc::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::ZipCrc::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::ZipCrc::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::ZipCrc::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::ZipCrc::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::ZipCrc::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::ZipCrc::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::ZipCrc::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }


Boolean ZipCrc::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void ZipCrc::BeginStream(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->BeginStream();
    }
int ZipCrc::CalculateCrc(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return -1; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->CalculateCrc(db0);
    }
int ZipCrc::EndStream(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->EndStream();
    }
IAsyncOperation<int>^ ZipCrc::FileCrcAsync(Platform::String ^path)
    {
return create_async([this, path]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->FileCrc(path ? path->Data() : L"");

});
    }
void ZipCrc::MoreData(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->MoreData(db0);
    }
Platform::String ^ZipCrc::ToHex(int crc)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxZipCrcProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toHex(crc);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




