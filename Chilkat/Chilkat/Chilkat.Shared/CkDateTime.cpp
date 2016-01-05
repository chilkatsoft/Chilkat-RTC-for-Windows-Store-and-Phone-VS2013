
// This source file is generated.

#include "pch.h"
#include "CkDateTime.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDateTimeW.h"
		
#include "include/CkDtObjW.h"
#include "DtObj.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::CkDateTime::~CkDateTime(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::CkDateTime::CkDateTime(void) 
{
    m_impl = new CkDateTimeW();
}

//Chilkat::CkDateTime::CkDateTime(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDateTimeW *)x;
//    if (!m_impl) m_impl = new CkDateTimeW();
//    }
//    
//Platform::IntPtr Chilkat::CkDateTime::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::CkDateTime::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::CkDateTime::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::CkDateTime::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::CkDateTime::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::CkDateTime::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::CkDateTime::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::CkDateTime::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::CkDateTime::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::CkDateTime::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::CkDateTime::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::CkDateTime::IsDst::get()
    {
    return m_impl ? m_impl->get_IsDst() : 0;
    }
int Chilkat::CkDateTime::UtcOffset::get()
    {
    return m_impl ? m_impl->get_UtcOffset() : 0;
    }


Boolean Chilkat::CkDateTime::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Chilkat::CkDateTime::AddDays(int numDays)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDays(numDays);
    }
void Chilkat::CkDateTime::DeSerialize(Platform::String ^serializedDateTime)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DeSerialize(serializedDateTime ? serializedDateTime->Data() : L"");
    }
int64 Chilkat::CkDateTime::GetAsDateTimeTicks(Boolean bLocal)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int64
	// cppType = __int64
	return m_impl->GetAsDateTimeTicks(bLocal);
    }
uint32 Chilkat::CkDateTime::GetAsDosDate(Boolean bLocal)
    {
	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	// gType = unsigned long
	// cppType = unsigned long
	return m_impl->GetAsDosDate(bLocal);
    }
double Chilkat::CkDateTime::GetAsOleDate(Boolean bLocal)
    {
	if (m_impl == nullptr) { return 0.0; }
	// --- prep output arg ---
	// gType = double
	// cppType = double
	return m_impl->GetAsOleDate(bLocal);
    }
Platform::String ^Chilkat::CkDateTime::GetAsRfc822(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAsRfc822(bLocal);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Chilkat::CkDateTime::GetAsUnixTime(Boolean bLocal)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = time_t
	return (int) m_impl->GetAsUnixTime(bLocal);
    }
int64 Chilkat::CkDateTime::GetAsUnixTime64(Boolean bLocal)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int64
	// cppType = __int64
	return m_impl->GetAsUnixTime64(bLocal);
    }
DtObj ^Chilkat::CkDateTime::GetDtObj(Boolean bLocal)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = DtObj
	// cppType = CkDtObj *
	CkDtObjW *pRetObj = m_impl->GetDtObj(bLocal);
	if (!pRetObj) return nullptr;
	Chilkat::DtObj ^pDtObj = ref new Chilkat::DtObj();
	pDtObj->m_impl = pRetObj;
	return pDtObj;
    }
Platform::String ^Chilkat::CkDateTime::Serialize(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->serialize();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Chilkat::CkDateTime::SetFromCurrentSystemTime(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromCurrentSystemTime();
    }
void Chilkat::CkDateTime::SetFromDateTimeTicks(Boolean bLocal, int64 ticks)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromDateTimeTicks(bLocal,ticks);
    }
void Chilkat::CkDateTime::SetFromDosDate(Boolean bLocal, uint32 t)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromDosDate(bLocal,t);
    }
Boolean Chilkat::CkDateTime::SetFromDtObj(DtObj ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDtObjW* pObj0 = dt->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromDtObj(*pObj0);
    }
void Chilkat::CkDateTime::SetFromNtpTime(int ntpSeconds)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromNtpTime(ntpSeconds);
    }
void Chilkat::CkDateTime::SetFromOleDate(Boolean bLocal, double dt)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromOleDate(bLocal,dt);
    }
Boolean Chilkat::CkDateTime::SetFromRfc822(Platform::String ^rfc822Str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromRfc822(rfc822Str ? rfc822Str->Data() : L"");
    }
void Chilkat::CkDateTime::SetFromUnixTime(Boolean bLocal, int t)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromUnixTime(bLocal,t);
    }
void Chilkat::CkDateTime::SetFromUnixTime64(Boolean bLocal, int64 t)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromUnixTime64(bLocal,t);
    }




