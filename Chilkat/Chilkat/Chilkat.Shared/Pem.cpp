
// This source file is generated.

#include "pch.h"
#include "Pem.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPemW.h"
		
#include "include/CkCertW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkCertChainW.h"
#include "include/CkPublicKeyW.h"
#include "include/CkJavaKeyStoreW.h"
#include "include/CkPfxW.h"
#include "Cert.h"
#include "PrivateKey.h"
#include "CertChain.h"
#include "PublicKey.h"
#include "JavaKeyStore.h"
#include "Pfx.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Pem::~Pem(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Pem::Pem(void) 
{
    m_impl = new CkPemW();
}

//Chilkat::Pem::Pem(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPemW *)x;
//    if (!m_impl) m_impl = new CkPemW();
//    }
//    
//Platform::IntPtr Chilkat::Pem::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Pem::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Pem::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Pem::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Pem::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Pem::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Pem::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Pem::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Pem::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Pem::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Pem::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Pem::AppendMode::get()
    {
    return m_impl ? m_impl->get_AppendMode() : false;
    }
void Chilkat::Pem::AppendMode::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AppendMode(newVal);
    }
int Chilkat::Pem::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Pem::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
int Chilkat::Pem::NumCerts::get()
    {
    return m_impl ? m_impl->get_NumCerts() : 0;
    }
int Chilkat::Pem::NumCsrs::get()
    {
    return m_impl ? m_impl->get_NumCsrs() : 0;
    }
int Chilkat::Pem::NumPrivateKeys::get()
    {
    return m_impl ? m_impl->get_NumPrivateKeys() : 0;
    }
int Chilkat::Pem::NumPublicKeys::get()
    {
    return m_impl ? m_impl->get_NumPublicKeys() : 0;
    }
String ^Chilkat::Pem::PrivateKeyFormat::get()
    {
    return ref new String(m_impl ? m_impl->privateKeyFormat() : L"");
    }
void Chilkat::Pem::PrivateKeyFormat::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PrivateKeyFormat(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Pem::PublicKeyFormat::get()
    {
    return ref new String(m_impl ? m_impl->publicKeyFormat() : L"");
    }
void Chilkat::Pem::PublicKeyFormat::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PublicKeyFormat(newVal ? newVal->Data() : L"");
    }


Boolean Pem::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Pem::AddCert(Cert ^cert, Boolean includeChain)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddCert(*pObj0,includeChain);
    }
Boolean Pem::AddPrivateKey(PrivateKey ^privateKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privateKey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPrivateKey(*pObj0);
    }
Boolean Pem::AddPrivateKey2(PrivateKey ^privKey, CertChain ^certChain)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	if (certChain == nullptr) { return false; }
	CkCertChainW* pObj1 = certChain->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPrivateKey2(*pObj0,*pObj1);
    }
Boolean Pem::AddPublicKey(PublicKey ^pubkey)
    {
	if (m_impl == nullptr) { return false; }
	if (pubkey == nullptr) { return false; }
	CkPublicKeyW* pObj0 = pubkey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPublicKey(*pObj0);
    }
Boolean Pem::Clear(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Clear();
    }
Cert ^Pem::GetCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Pem::GetEncodedItem(Platform::String ^itemType, Platform::String ^itemSubType, Platform::String ^encoding, int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedItem(itemType ? itemType->Data() : L"",itemSubType ? itemSubType->Data() : L"",encoding ? encoding->Data() : L"",index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
PrivateKey ^Pem::GetPrivateKey(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->GetPrivateKey(index);
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
PublicKey ^Pem::GetPublicKey(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = PublicKey
	// cppType = CkPublicKey *
	CkPublicKeyW *pRetObj = m_impl->GetPublicKey(index);
	if (!pRetObj) return nullptr;
	Chilkat::PublicKey ^pPublicKey = ref new Chilkat::PublicKey();
	pPublicKey->m_impl = pRetObj;
	return pPublicKey;
    }
IAsyncOperation<Boolean>^ Pem::LoadP7bAsync(Windows::Foundation::Collections::IVector<uint8>^p7bData)
    {
return create_async([this, p7bData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (p7bData != nullptr) { v0 = to_vector(p7bData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadP7b(db0);

});
    }
IAsyncOperation<Boolean>^ Pem::LoadP7bFileAsync(Platform::String ^path)
    {
return create_async([this, path]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadP7bFile(path ? path->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Pem::LoadPemAsync(Platform::String ^pemContent, Platform::String ^password)
    {
return create_async([this, pemContent, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadPem(pemContent ? pemContent->Data() : L"",password ? password->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Pem::LoadPemFileAsync(Platform::String ^path, Platform::String ^password)
    {
return create_async([this, path, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadPemFile(path ? path->Data() : L"",password ? password->Data() : L"");

});
    }
Boolean Pem::RemoveCert(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveCert(index);
    }
Boolean Pem::RemovePrivateKey(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemovePrivateKey(index);
    }
JavaKeyStore ^Pem::ToJks(Platform::String ^alias, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = JavaKeyStore
	// cppType = CkJavaKeyStore *
	CkJavaKeyStoreW *pRetObj = m_impl->ToJks(alias ? alias->Data() : L"",password ? password->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::JavaKeyStore ^pJavaKeyStore = ref new Chilkat::JavaKeyStore();
	pJavaKeyStore->m_impl = pRetObj;
	return pJavaKeyStore;
    }
Platform::String ^Pem::ToPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Pem::ToPemEx(Boolean extendedAttrs, Boolean noKeys, Boolean noCerts, Boolean noCaCerts, Platform::String ^encryptAlg, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPemEx(extendedAttrs,noKeys,noCerts,noCaCerts,encryptAlg ? encryptAlg->Data() : L"",password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Pfx ^Pem::ToPfx(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxPemProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Pfx
	// cppType = CkPfx *
	CkPfxW *pRetObj = m_impl->ToPfx();
	if (!pRetObj) return nullptr;
	Chilkat::Pfx ^pPfx = ref new Chilkat::Pfx();
	pPfx->m_impl = pRetObj;
	return pPfx;
    }




