
// This source file is generated.

#include "pch.h"
#include "CertStore.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCertStoreW.h"
		
#include "include/CkCertW.h"
#include "Cert.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::CertStore::~CertStore(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::CertStore::CertStore(void) 
{
    m_impl = new CkCertStoreW();
}

//Chilkat::CertStore::CertStore(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCertStoreW *)x;
//    if (!m_impl) m_impl = new CkCertStoreW();
//    }
//    
//Platform::IntPtr Chilkat::CertStore::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::CertStore::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::CertStore::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::CertStore::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::CertStore::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::CertStore::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::CertStore::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::CertStore::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::CertStore::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::CertStore::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::CertStore::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::CertStore::AvoidWindowsPkAccess::get()
    {
    return m_impl ? m_impl->get_AvoidWindowsPkAccess() : false;
    }
void Chilkat::CertStore::AvoidWindowsPkAccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AvoidWindowsPkAccess(newVal);
    }
int Chilkat::CertStore::NumCertificates::get()
    {
    return m_impl ? m_impl->get_NumCertificates() : 0;
    }


Boolean CertStore::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Cert ^CertStore::FindCertByRfc822Name(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertByRfc822Name(name ? name->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySerial(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySerial(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySha1Thumbprint(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySha1Thumbprint(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySubject(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySubject(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySubjectCN(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySubjectCN(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySubjectE(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySubjectE(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertBySubjectO(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertBySubjectO(str ? str->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::FindCertForEmail(Platform::String ^emailAddress)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindCertForEmail(emailAddress ? emailAddress->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^CertStore::GetCertificate(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetCertificate(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Boolean CertStore::LoadPemFile(Platform::String ^pemPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPemFile(pemPath ? pemPath->Data() : L"");
    }
Boolean CertStore::LoadPemStr(Platform::String ^pemString)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPemStr(pemString ? pemString->Data() : L"");
    }
Boolean CertStore::LoadPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxData(db0,password ? password->Data() : L"");
    }
Boolean CertStore::LoadPfxFile(Platform::String ^pfxFilename, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxFile(pfxFilename ? pfxFilename->Data() : L"",password ? password->Data() : L"");
    }




