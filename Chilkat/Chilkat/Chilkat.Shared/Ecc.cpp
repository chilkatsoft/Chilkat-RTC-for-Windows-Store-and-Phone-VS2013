
// This source file is generated.

#include "pch.h"
#include "Ecc.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkEccW.h"
		
#include "include/CkPrivateKeyW.h"
#include "include/CkPrngW.h"
#include "include/CkPublicKeyW.h"
#include "PrivateKey.h"
#include "Prng.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Ecc::~Ecc(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Ecc::Ecc(void) 
{
    m_impl = new CkEccW();
}

//Chilkat::Ecc::Ecc(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkEccW *)x;
//    if (!m_impl) m_impl = new CkEccW();
//    }
//    
//Platform::IntPtr Chilkat::Ecc::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Ecc::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Ecc::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Ecc::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Ecc::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Ecc::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Ecc::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ecc::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Ecc::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Ecc::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Ecc::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }


Boolean Ecc::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
PrivateKey ^Ecc::GenEccKey(Platform::String ^curveName, Prng ^prng)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (prng == nullptr) { return nullptr; }
	CkPrngW* pObj1 = prng->m_impl;
	 if (!pObj1) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->GenEccKey(curveName ? curveName->Data() : L"",*pObj1);
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
Platform::String ^Ecc::SharedSecretENC(PrivateKey ^privKey, PublicKey ^pubKey, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (privKey == nullptr) { return nullptr; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return nullptr; }
	if (pubKey == nullptr) { return nullptr; }
	CkPublicKeyW* pObj1 = pubKey->m_impl;
	 if (!pObj1) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->sharedSecretENC(*pObj0,*pObj1,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ecc::SignHashENC(Platform::String ^encodedHash, Platform::String ^encoding, PrivateKey ^privkey, Prng ^prng)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (privkey == nullptr) { return nullptr; }
	CkPrivateKeyW* pObj2 = privkey->m_impl;
	 if (!pObj2) { return nullptr; }
	if (prng == nullptr) { return nullptr; }
	CkPrngW* pObj3 = prng->m_impl;
	 if (!pObj3) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signHashENC(encodedHash ? encodedHash->Data() : L"",encoding ? encoding->Data() : L"",*pObj2,*pObj3);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Ecc::VerifyHashENC(Platform::String ^encodedHash, Platform::String ^encodedSig, Platform::String ^encoding, PublicKey ^pubkey)
    {
	if (m_impl == nullptr) { return -1; }
	if (pubkey == nullptr) { return -1; }
	CkPublicKeyW* pObj3 = pubkey->m_impl;
	 if (!pObj3) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->VerifyHashENC(encodedHash ? encodedHash->Data() : L"",encodedSig ? encodedSig->Data() : L"",encoding ? encoding->Data() : L"",*pObj3);
    }
PrivateKey ^Ecc::GenEccKey2(Platform::String ^curveName, Platform::String ^encodedK, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->GenEccKey2(curveName ? curveName->Data() : L"",encodedK ? encodedK->Data() : L"",encoding ? encoding->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }




