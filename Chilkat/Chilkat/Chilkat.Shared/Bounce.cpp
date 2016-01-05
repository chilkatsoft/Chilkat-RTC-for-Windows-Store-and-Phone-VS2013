
// This source file is generated.

#include "pch.h"
#include "Bounce.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkBounceW.h"
		
#include "include/CkEmailW.h"
#include "Email.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Bounce::~Bounce(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Bounce::Bounce(void) 
{
    m_impl = new CkBounceW();
}

//Chilkat::Bounce::Bounce(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkBounceW *)x;
//    if (!m_impl) m_impl = new CkBounceW();
//    }
//    
//Platform::IntPtr Chilkat::Bounce::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Bounce::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Bounce::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Bounce::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Bounce::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Bounce::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Bounce::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Bounce::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Bounce::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Bounce::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Bounce::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Bounce::BounceAddress::get()
    {
    return ref new String(m_impl ? m_impl->bounceAddress() : L"");
    }
String ^Chilkat::Bounce::BounceData::get()
    {
    return ref new String(m_impl ? m_impl->bounceData() : L"");
    }
int Chilkat::Bounce::BounceType::get()
    {
    return m_impl ? m_impl->get_BounceType() : 0;
    }


Boolean Bounce::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Bounce::ExamineEmail(Email ^email)
    {
	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	const CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExamineEmail(*pObj0);
    }
Boolean Bounce::ExamineEml(Platform::String ^emlFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExamineEml(emlFilename ? emlFilename->Data() : L"");
    }
Boolean Bounce::ExamineMime(Platform::String ^mimeText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExamineMime(mimeText ? mimeText->Data() : L"");
    }
Boolean Bounce::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }




