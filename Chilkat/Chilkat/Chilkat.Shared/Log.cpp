
// This source file is generated.

#include "pch.h"
#include "Log.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkLogW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Log::~Log(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Log::Log(void) 
{
    m_impl = new CkLogW();
}

//Chilkat::Log::Log(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkLogW *)x;
//    if (!m_impl) m_impl = new CkLogW();
//    }
//    
//Platform::IntPtr Chilkat::Log::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Log::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Log::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Log::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Log::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Log::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Log::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Log::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Log::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Log::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Log::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }


Boolean Log::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Log::Clear(Platform::String ^initialTag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Clear(initialTag ? initialTag->Data() : L"");
    }
void Log::EnterContext(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->EnterContext(tag ? tag->Data() : L"");
    }
void Log::LeaveContext(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LeaveContext();
    }
void Log::LogData(Platform::String ^tag, Platform::String ^message)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogData(tag ? tag->Data() : L"",message ? message->Data() : L"");
    }
void Log::LogDataBase64(Platform::String ^tag, Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db1; std::vector<uint8> v1;
        if (data != nullptr) { v1 = to_vector(data);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogDataBase64(tag ? tag->Data() : L"",db1);
    }
void Log::LogDataHex(Platform::String ^tag, Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db1; std::vector<uint8> v1;
        if (data != nullptr) { v1 = to_vector(data);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogDataHex(tag ? tag->Data() : L"",db1);
    }
void Log::LogDataMax(Platform::String ^tag, Platform::String ^message, int maxNumChars)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogDataMax(tag ? tag->Data() : L"",message ? message->Data() : L"",maxNumChars);
    }
void Log::LogDateTime(Platform::String ^tag, Boolean gmt)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogDateTime(tag ? tag->Data() : L"",gmt);
    }
void Log::LogError(Platform::String ^message)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogError(message ? message->Data() : L"");
    }
void Log::LogInfo(Platform::String ^message)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogInfo(message ? message->Data() : L"");
    }
void Log::LogInt(Platform::String ^tag, int value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogInt(tag ? tag->Data() : L"",value);
    }
void Log::LogInt64(Platform::String ^tag, int64 value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogInt64(tag ? tag->Data() : L"",value);
    }
void Log::LogTimestamp(Platform::String ^tag)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->LogTimestamp(tag ? tag->Data() : L"");
    }




