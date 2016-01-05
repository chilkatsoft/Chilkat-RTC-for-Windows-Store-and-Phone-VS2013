
// This source file is generated.

#include "pch.h"
#include "DtObj.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDtObjW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::DtObj::~DtObj(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::DtObj::DtObj(void) 
{
    m_impl = new CkDtObjW();
}

//Chilkat::DtObj::DtObj(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDtObjW *)x;
//    if (!m_impl) m_impl = new CkDtObjW();
//    }
//    
//Platform::IntPtr Chilkat::DtObj::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::DtObj::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::DtObj::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::DtObj::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::DtObj::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::DtObj::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::DtObj::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::DtObj::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::DtObj::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::DtObj::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::DtObj::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::DtObj::Day::get()
    {
    return m_impl ? m_impl->get_Day() : 0;
    }
void Chilkat::DtObj::Day::set(int newVal)
    {
        if (m_impl) m_impl->put_Day(newVal);
    }
int Chilkat::DtObj::Hour::get()
    {
    return m_impl ? m_impl->get_Hour() : 0;
    }
void Chilkat::DtObj::Hour::set(int newVal)
    {
        if (m_impl) m_impl->put_Hour(newVal);
    }
int Chilkat::DtObj::Minute::get()
    {
    return m_impl ? m_impl->get_Minute() : 0;
    }
void Chilkat::DtObj::Minute::set(int newVal)
    {
        if (m_impl) m_impl->put_Minute(newVal);
    }
int Chilkat::DtObj::Month::get()
    {
    return m_impl ? m_impl->get_Month() : 0;
    }
void Chilkat::DtObj::Month::set(int newVal)
    {
        if (m_impl) m_impl->put_Month(newVal);
    }
int Chilkat::DtObj::Second::get()
    {
    return m_impl ? m_impl->get_Second() : 0;
    }
void Chilkat::DtObj::Second::set(int newVal)
    {
        if (m_impl) m_impl->put_Second(newVal);
    }
int Chilkat::DtObj::StructTmMonth::get()
    {
    return m_impl ? m_impl->get_StructTmMonth() : 0;
    }
void Chilkat::DtObj::StructTmMonth::set(int newVal)
    {
        if (m_impl) m_impl->put_StructTmMonth(newVal);
    }
int Chilkat::DtObj::StructTmYear::get()
    {
    return m_impl ? m_impl->get_StructTmYear() : 0;
    }
void Chilkat::DtObj::StructTmYear::set(int newVal)
    {
        if (m_impl) m_impl->put_StructTmYear(newVal);
    }
Boolean Chilkat::DtObj::Utc::get()
    {
    return m_impl ? m_impl->get_Utc() : false;
    }
void Chilkat::DtObj::Utc::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Utc(newVal);
    }
int Chilkat::DtObj::Year::get()
    {
    return m_impl ? m_impl->get_Year() : 0;
    }
void Chilkat::DtObj::Year::set(int newVal)
    {
        if (m_impl) m_impl->put_Year(newVal);
    }


Boolean DtObj::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void DtObj::DeSerialize(Platform::String ^serializedDtObj)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DeSerialize(serializedDtObj ? serializedDtObj->Data() : L"");
    }
Platform::String ^DtObj::Serialize(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->serialize();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




