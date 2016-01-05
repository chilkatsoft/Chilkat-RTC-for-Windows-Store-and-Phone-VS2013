
// This source file is generated.

#include "pch.h"
#include "JavaKeyStore.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkJavaKeyStoreW.h"
		
#include "include/CkPfxW.h"
#include "include/CkCertW.h"
#include "include/CkCertChainW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkPemW.h"
#include "include/CkXmlCertVaultW.h"
#include "Pfx.h"
#include "Cert.h"
#include "CertChain.h"
#include "PrivateKey.h"
#include "Pem.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::JavaKeyStore::~JavaKeyStore(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::JavaKeyStore::JavaKeyStore(void) 
{
    m_impl = new CkJavaKeyStoreW();
}

//Chilkat::JavaKeyStore::JavaKeyStore(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkJavaKeyStoreW *)x;
//    if (!m_impl) m_impl = new CkJavaKeyStoreW();
//    }
//    
//Platform::IntPtr Chilkat::JavaKeyStore::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::JavaKeyStore::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::JavaKeyStore::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::JavaKeyStore::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::JavaKeyStore::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::JavaKeyStore::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::JavaKeyStore::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::JavaKeyStore::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::JavaKeyStore::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::JavaKeyStore::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::JavaKeyStore::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::JavaKeyStore::NumPrivateKeys::get()
    {
    return m_impl ? m_impl->get_NumPrivateKeys() : 0;
    }
int Chilkat::JavaKeyStore::NumTrustedCerts::get()
    {
    return m_impl ? m_impl->get_NumTrustedCerts() : 0;
    }
Boolean Chilkat::JavaKeyStore::RequireCompleteChain::get()
    {
    return m_impl ? m_impl->get_RequireCompleteChain() : false;
    }
void Chilkat::JavaKeyStore::RequireCompleteChain::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireCompleteChain(newVal);
    }
Boolean Chilkat::JavaKeyStore::VerifyKeyedDigest::get()
    {
    return m_impl ? m_impl->get_VerifyKeyedDigest() : false;
    }
void Chilkat::JavaKeyStore::VerifyKeyedDigest::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerifyKeyedDigest(newVal);
    }


Boolean JavaKeyStore::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean JavaKeyStore::AddPfx(Pfx ^pfx, Platform::String ^alias, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	if (pfx == nullptr) { return false; }
	CkPfxW* pObj0 = pfx->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfx(*pObj0,alias ? alias->Data() : L"",password ? password->Data() : L"");
    }
Boolean JavaKeyStore::AddPrivateKey(Cert ^cert, Platform::String ^alias, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPrivateKey(*pObj0,alias ? alias->Data() : L"",password ? password->Data() : L"");
    }
Boolean JavaKeyStore::AddTrustedCert(Cert ^cert, Platform::String ^alias)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddTrustedCert(*pObj0,alias ? alias->Data() : L"");
    }
Boolean JavaKeyStore::ChangePassword(int index, Platform::String ^oldPassword, Platform::String ^newPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ChangePassword(index,oldPassword ? oldPassword->Data() : L"",newPassword ? newPassword->Data() : L"");
    }
CertChain ^JavaKeyStore::FindCertChain(Platform::String ^alias, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->FindCertChain(alias ? alias->Data() : L"",caseSensitive);
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
PrivateKey ^JavaKeyStore::FindPrivateKey(Platform::String ^password, Platform::String ^alias, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->FindPrivateKey(password ? password->Data() : L"",alias ? alias->Data() : L"",caseSensitive);
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
Cert ^JavaKeyStore::FindTrustedCert(Platform::String ^alias, Boolean caseSensitive)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindTrustedCert(alias ? alias->Data() : L"",caseSensitive);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
CertChain ^JavaKeyStore::GetCertChain(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->GetCertChain(index);
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
PrivateKey ^JavaKeyStore::GetPrivateKey(Platform::String ^password, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->GetPrivateKey(password ? password->Data() : L"",index);
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
Platform::String ^JavaKeyStore::GetPrivateKeyAlias(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPrivateKeyAlias(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^JavaKeyStore::GetTrustedCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetTrustedCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^JavaKeyStore::GetTrustedCertAlias(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTrustedCertAlias(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JavaKeyStore::LoadBinary(Platform::String ^password, Windows::Foundation::Collections::IVector<uint8>^jksData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (jksData != nullptr) { v1 = to_vector(jksData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBinary(password ? password->Data() : L"",db1);
    }
Boolean JavaKeyStore::LoadEncoded(Platform::String ^password, Platform::String ^jksEncData, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEncoded(password ? password->Data() : L"",jksEncData ? jksEncData->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean JavaKeyStore::LoadFile(Platform::String ^password, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFile(password ? password->Data() : L"",path ? path->Data() : L"");
    }
Boolean JavaKeyStore::RemoveEntry(int entryType, int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveEntry(entryType,index);
    }
Boolean JavaKeyStore::SetAlias(int entryType, int index, Platform::String ^alias)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetAlias(entryType,index,alias ? alias->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^JavaKeyStore::ToBinary(Platform::String ^password)
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
Platform::String ^JavaKeyStore::ToEncodedString(Platform::String ^password, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toEncodedString(password ? password->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean JavaKeyStore::ToFile(Platform::String ^password, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ToFile(password ? password->Data() : L"",path ? path->Data() : L"");
    }
Pem ^JavaKeyStore::ToPem(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Pem
	// cppType = CkPem *
	CkPemW *pRetObj = m_impl->ToPem(password ? password->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Pem ^pPem = ref new Chilkat::Pem();
	pPem->m_impl = pRetObj;
	return pPem;
    }
Pfx ^JavaKeyStore::ToPfx(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Pfx
	// cppType = CkPfx *
	CkPfxW *pRetObj = m_impl->ToPfx(password ? password->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Pfx ^pPfx = ref new Chilkat::Pfx();
	pPfx->m_impl = pRetObj;
	return pPfx;
    }
Boolean JavaKeyStore::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean JavaKeyStore::UseCertVault(XmlCertVault ^vault)
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




