
// This source file is generated.

#include "pch.h"
#include "TrustedRoots.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkTrustedRootsW.h"
		
#include "include/CkCertW.h"
#include "include/CkJavaKeyStoreW.h"
#include "Cert.h"
#include "JavaKeyStore.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::TrustedRoots::~TrustedRoots(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::TrustedRoots::TrustedRoots(void) 
{
    m_impl = new CkTrustedRootsW();
}

//Chilkat::TrustedRoots::TrustedRoots(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkTrustedRootsW *)x;
//    if (!m_impl) m_impl = new CkTrustedRootsW();
//    }
//    
//Platform::IntPtr Chilkat::TrustedRoots::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::TrustedRoots::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::TrustedRoots::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::TrustedRoots::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::TrustedRoots::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::TrustedRoots::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::TrustedRoots::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::TrustedRoots::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::TrustedRoots::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::TrustedRoots::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::TrustedRoots::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::TrustedRoots::NumCerts::get()
    {
    return m_impl ? m_impl->get_NumCerts() : 0;
    }
Boolean Chilkat::TrustedRoots::TrustSystemCaRoots::get()
    {
    return m_impl ? m_impl->get_TrustSystemCaRoots() : false;
    }
void Chilkat::TrustedRoots::TrustSystemCaRoots::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_TrustSystemCaRoots(newVal);
    }


Boolean TrustedRoots::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean TrustedRoots::Activate(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Activate();
    }
Boolean TrustedRoots::AddCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddCert(*pObj0);
    }
IAsyncOperation<Boolean>^ TrustedRoots::AddJavaKeyStoreAsync(JavaKeyStore ^keystore)
    {
return create_async([this, keystore]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (keystore == nullptr) { return false; }
	CkJavaKeyStoreW* pObj0 = keystore->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddJavaKeyStore(*pObj0);

});
    }
Boolean TrustedRoots::Deactivate(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Deactivate();
    }
Cert ^TrustedRoots::GetCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
IAsyncOperation<Boolean>^ TrustedRoots::LoadCaCertsPemAsync(Platform::String ^path)
    {
return create_async([this, path]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxTrustedRootsProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadCaCertsPem(path ? path->Data() : L"");

});
    }




