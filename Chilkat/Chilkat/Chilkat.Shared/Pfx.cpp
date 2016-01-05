
// This source file is generated.

#include "pch.h"
#include "Pfx.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPfxW.h"
		
#include "include/CkCertW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkCertChainW.h"
#include "include/CkJavaKeyStoreW.h"
#include "include/CkXmlCertVaultW.h"
#include "Cert.h"
#include "PrivateKey.h"
#include "CertChain.h"
#include "JavaKeyStore.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Pfx::~Pfx(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Pfx::Pfx(void) 
{
    m_impl = new CkPfxW();
}

//Chilkat::Pfx::Pfx(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPfxW *)x;
//    if (!m_impl) m_impl = new CkPfxW();
//    }
//    
//Platform::IntPtr Chilkat::Pfx::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Pfx::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Pfx::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Pfx::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Pfx::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Pfx::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Pfx::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Pfx::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Pfx::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Pfx::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Pfx::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Pfx::NumCerts::get()
    {
    return m_impl ? m_impl->get_NumCerts() : 0;
    }
int Chilkat::Pfx::NumPrivateKeys::get()
    {
    return m_impl ? m_impl->get_NumPrivateKeys() : 0;
    }


Boolean Pfx::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Pfx::AddCert(Cert ^cert, Boolean includeChain)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCert(*pObj0,includeChain);
    }
Boolean Pfx::AddPrivateKey(PrivateKey ^privKey, CertChain ^certChain)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	if (certChain == nullptr) { return false; }
	CkCertChainW* pObj1 = certChain->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPrivateKey(*pObj0,*pObj1);
    }
Cert ^Pfx::GetCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
PrivateKey ^Pfx::GetPrivateKey(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->GetPrivateKey(index);
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
Boolean Pfx::LoadPem(Platform::String ^pemStr, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPem(pemStr ? pemStr->Data() : L"",password ? password->Data() : L"");
    }
Boolean Pfx::LoadPfxBytes(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxBytes(db0,password ? password->Data() : L"");
    }
Boolean Pfx::LoadPfxEncoded(Platform::String ^encodedData, Platform::String ^encoding, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxEncoded(encodedData ? encodedData->Data() : L"",encoding ? encoding->Data() : L"",password ? password->Data() : L"");
    }
Boolean Pfx::LoadPfxFile(Platform::String ^path, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxFile(path ? path->Data() : L"",password ? password->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Pfx::ToBinary(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ToBinary(password ? password->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Pfx::ToEncodedString(Platform::String ^password, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toEncodedString(password ? password->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Pfx::ToFile(Platform::String ^password, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ToFile(password ? password->Data() : L"",path ? path->Data() : L"");
    }
JavaKeyStore ^Pfx::ToJavaKeyStore(Platform::String ^alias, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = JavaKeyStore
	// cppType = CkJavaKeyStore *
	CkJavaKeyStoreW *pRetObj = m_impl->ToJavaKeyStore(alias ? alias->Data() : L"",password ? password->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JavaKeyStore ^pJavaKeyStore = ref new Chilkat::JavaKeyStore();
	pJavaKeyStore->m_impl = pRetObj;
	return pJavaKeyStore;
    }
Platform::String ^Pfx::ToPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Pfx::ToPemEx(Boolean extendedAttrs, Boolean noKeys, Boolean noCerts, Boolean noCaCerts, Platform::String ^encryptAlg, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPemEx(extendedAttrs,noKeys,noCerts,noCaCerts,encryptAlg ? encryptAlg->Data() : L"",password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Pfx::UseCertVault(XmlCertVault ^vault)
    {
	if (m_impl == nullptr) { return false; }
	if (vault == nullptr) { return false; }
	CkXmlCertVaultW* pObj0 = vault->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UseCertVault(*pObj0);
    }




