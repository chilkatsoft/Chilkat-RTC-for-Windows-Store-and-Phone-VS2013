
// This source file is generated.

#include "pch.h"
#include "Rsa.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkRsaW.h"
		
#include "include/CkPrivateKeyW.h"
#include "include/CkPublicKeyW.h"
#include "PrivateKey.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Rsa::~Rsa(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Rsa::Rsa(void) 
{
    m_impl = new CkRsaW();
}

//Chilkat::Rsa::Rsa(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkRsaW *)x;
//    if (!m_impl) m_impl = new CkRsaW();
//    }
//    
//Platform::IntPtr Chilkat::Rsa::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Rsa::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Rsa::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Rsa::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Rsa::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Rsa::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Rsa::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Rsa::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Rsa::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Rsa::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Rsa::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Rsa::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::Rsa::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Rsa::EncodingMode::get()
    {
    return ref new String(m_impl ? m_impl->encodingMode() : L"");
    }
void Chilkat::Rsa::EncodingMode::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EncodingMode(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Rsa::LittleEndian::get()
    {
    return m_impl ? m_impl->get_LittleEndian() : false;
    }
void Chilkat::Rsa::LittleEndian::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LittleEndian(newVal);
    }
Boolean Chilkat::Rsa::NoUnpad::get()
    {
    return m_impl ? m_impl->get_NoUnpad() : false;
    }
void Chilkat::Rsa::NoUnpad::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_NoUnpad(newVal);
    }
int Chilkat::Rsa::NumBits::get()
    {
    return m_impl ? m_impl->get_NumBits() : 0;
    }
String ^Chilkat::Rsa::OaepHash::get()
    {
    return ref new String(m_impl ? m_impl->oaepHash() : L"");
    }
void Chilkat::Rsa::OaepHash::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OaepHash(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Rsa::OaepPadding::get()
    {
    return m_impl ? m_impl->get_OaepPadding() : false;
    }
void Chilkat::Rsa::OaepPadding::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_OaepPadding(newVal);
    }


Boolean Rsa::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::DecryptBytes(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DecryptBytes(db0,bUsePrivateKey,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::DecryptBytesENC(Platform::String ^str, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DecryptBytesENC(str ? str->Data() : L"",bUsePrivateKey,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::DecryptString(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decryptString(db0,bUsePrivateKey);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rsa::DecryptStringENC(Platform::String ^str, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decryptStringENC(str ? str->Data() : L"",bUsePrivateKey);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::EncryptBytes(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->EncryptBytes(db0,bUsePrivateKey,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::EncryptBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encryptBytesENC(db0,bUsePrivateKey);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::EncryptString(Platform::String ^str, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->EncryptString(str ? str->Data() : L"",bUsePrivateKey,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::EncryptStringENC(Platform::String ^str, Boolean bUsePrivateKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encryptStringENC(str ? str->Data() : L"",bUsePrivateKey);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rsa::ExportPrivateKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->exportPrivateKey();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
PrivateKey ^Rsa::ExportPrivateKeyObj(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->ExportPrivateKeyObj();
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
Platform::String ^Rsa::ExportPublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->exportPublicKey();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
PublicKey ^Rsa::ExportPublicKeyObj(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PublicKey
	// cppType = CkPublicKey *
	CkPublicKeyW *pRetObj = m_impl->ExportPublicKeyObj();
	if (!pRetObj) return nullptr;
	Chilkat::PublicKey ^pPublicKey = ref new Chilkat::PublicKey();
	pPublicKey->m_impl = pRetObj;
	return pPublicKey;
    }
Boolean Rsa::GenerateKey(int numBits)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenerateKey(numBits);
    }
Boolean Rsa::ImportPrivateKey(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ImportPrivateKey(xml ? xml->Data() : L"");
    }
Boolean Rsa::ImportPrivateKeyObj(PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = key->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ImportPrivateKeyObj(*pObj0);
    }
Boolean Rsa::ImportPublicKey(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ImportPublicKey(xml ? xml->Data() : L"");
    }
Boolean Rsa::ImportPublicKeyObj(PublicKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (key == nullptr) { return false; }
	CkPublicKeyW* pObj0 = key->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ImportPublicKeyObj(*pObj0);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::OpenSslSignBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpenSslSignBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::OpenSslSignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openSslSignBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::OpenSslSignString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpenSslSignString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::OpenSslSignStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openSslSignStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::OpenSslVerifyBytes(Windows::Foundation::Collections::IVector<uint8>^signature)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (signature != nullptr) { v0 = to_vector(signature);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpenSslVerifyBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::OpenSslVerifyBytesENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpenSslVerifyBytesENC(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::OpenSslVerifyString(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openSslVerifyString(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rsa::OpenSslVerifyStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->openSslVerifyStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::SignBytes(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SignBytes(db0,hashAlg ? hashAlg->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::SignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signBytesENC(db0,hashAlg ? hashAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::SignHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (hashBytes != nullptr) { v0 = to_vector(hashBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SignHash(db0,hashAlg ? hashAlg->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::SignHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signHashENC(encodedHash ? encodedHash->Data() : L"",hashAlg ? hashAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Rsa::SignString(Platform::String ^str, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SignString(str ? str->Data() : L"",hashAlg ? hashAlg->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Rsa::SignStringENC(Platform::String ^str, Platform::String ^hashAlg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signStringENC(str ? str->Data() : L"",hashAlg ? hashAlg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Rsa::SnkToXml(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->snkToXml(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Rsa::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Rsa::VerifyBytes(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	CkByteData db2; std::vector<uint8> v2;
        if (sig != nullptr) { v2 = to_vector(sig);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyBytes(db0,hashAlg ? hashAlg->Data() : L"",db2);
    }
Boolean Rsa::VerifyBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg, Platform::String ^encodedSig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyBytesENC(db0,hashAlg ? hashAlg->Data() : L"",encodedSig ? encodedSig->Data() : L"");
    }
Boolean Rsa::VerifyHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sigBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (hashBytes != nullptr) { v0 = to_vector(hashBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	CkByteData db2; std::vector<uint8> v2;
        if (sigBytes != nullptr) { v2 = to_vector(sigBytes);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyHash(db0,hashAlg ? hashAlg->Data() : L"",db2);
    }
Boolean Rsa::VerifyHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg, Platform::String ^encodedSig)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyHashENC(encodedHash ? encodedHash->Data() : L"",hashAlg ? hashAlg->Data() : L"",encodedSig ? encodedSig->Data() : L"");
    }
Boolean Rsa::VerifyPrivateKey(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyPrivateKey(xml ? xml->Data() : L"");
    }
Boolean Rsa::VerifyString(Platform::String ^str, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (sig != nullptr) { v2 = to_vector(sig);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyString(str ? str->Data() : L"",hashAlg ? hashAlg->Data() : L"",db2);
    }
Boolean Rsa::VerifyStringENC(Platform::String ^str, Platform::String ^hashAlg, Platform::String ^sig)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyStringENC(str ? str->Data() : L"",hashAlg ? hashAlg->Data() : L"",sig ? sig->Data() : L"");
    }




