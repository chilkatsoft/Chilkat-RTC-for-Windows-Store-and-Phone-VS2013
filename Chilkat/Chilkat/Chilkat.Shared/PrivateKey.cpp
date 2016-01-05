
// This source file is generated.

#include "pch.h"
#include "PrivateKey.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPrivateKeyW.h"
		
#include "include/CkPublicKeyW.h"
#include "PublicKey.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::PrivateKey::~PrivateKey(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::PrivateKey::PrivateKey(void) 
{
    m_impl = new CkPrivateKeyW();
}

//Chilkat::PrivateKey::PrivateKey(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPrivateKeyW *)x;
//    if (!m_impl) m_impl = new CkPrivateKeyW();
//    }
//    
//Platform::IntPtr Chilkat::PrivateKey::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::PrivateKey::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::PrivateKey::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::PrivateKey::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::PrivateKey::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::PrivateKey::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::PrivateKey::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::PrivateKey::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::PrivateKey::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::PrivateKey::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::PrivateKey::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::PrivateKey::BitLength::get()
    {
    return m_impl ? m_impl->get_BitLength() : 0;
    }
String ^Chilkat::PrivateKey::KeyType::get()
    {
    return ref new String(m_impl ? m_impl->keyType() : L"");
    }
String ^Chilkat::PrivateKey::Pkcs8EncryptAlg::get()
    {
    return ref new String(m_impl ? m_impl->pkcs8EncryptAlg() : L"");
    }
void Chilkat::PrivateKey::Pkcs8EncryptAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Pkcs8EncryptAlg(newVal ? newVal->Data() : L"");
    }


Boolean PrivateKey::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Platform::String ^PrivateKey::GetPkcs1ENC(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPkcs1ENC(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^PrivateKey::GetPkcs8(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetPkcs8(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PrivateKey::GetPkcs8ENC(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPkcs8ENC(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^PrivateKey::GetPkcs8Encrypted(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetPkcs8Encrypted(password ? password->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PrivateKey::GetPkcs8EncryptedENC(Platform::String ^encoding, Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPkcs8EncryptedENC(encoding ? encoding->Data() : L"",password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PrivateKey::GetPkcs8EncryptedPem(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPkcs8EncryptedPem(password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PrivateKey::GetPkcs8Pem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPkcs8Pem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
PublicKey ^PrivateKey::GetPublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PublicKey
	// cppType = CkPublicKey *
	CkPublicKeyW *pRetObj = m_impl->GetPublicKey();
	if (!pRetObj) return nullptr;
	Chilkat::PublicKey ^pPublicKey = ref new Chilkat::PublicKey();
	pPublicKey->m_impl = pRetObj;
	return pPublicKey;
    }
Windows::Foundation::Collections::IVector<uint8>^PrivateKey::GetRsaDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetRsaDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^PrivateKey::GetRsaPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRsaPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^PrivateKey::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean PrivateKey::LoadEncryptedPem(Platform::String ^pemStr, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEncryptedPem(pemStr ? pemStr->Data() : L"",password ? password->Data() : L"");
    }
Boolean PrivateKey::LoadEncryptedPemFile(Platform::String ^path, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEncryptedPemFile(path ? path->Data() : L"",password ? password->Data() : L"");
    }
Boolean PrivateKey::LoadPem(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPem(str ? str->Data() : L"");
    }
Boolean PrivateKey::LoadPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPemFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::LoadPkcs8(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPkcs8(db0);
    }
Boolean PrivateKey::LoadPkcs8Encrypted(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPkcs8Encrypted(db0,password ? password->Data() : L"");
    }
Boolean PrivateKey::LoadPkcs8EncryptedFile(Platform::String ^path, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPkcs8EncryptedFile(path ? path->Data() : L"",password ? password->Data() : L"");
    }
Boolean PrivateKey::LoadPkcs8File(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPkcs8File(path ? path->Data() : L"");
    }
Boolean PrivateKey::LoadRsaDer(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadRsaDer(db0);
    }
Boolean PrivateKey::LoadRsaDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadRsaDerFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::LoadXml(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xml ? xml->Data() : L"");
    }
Boolean PrivateKey::LoadXmlFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::SavePkcs8EncryptedFile(Platform::String ^password, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SavePkcs8EncryptedFile(password ? password->Data() : L"",path ? path->Data() : L"");
    }
Boolean PrivateKey::SavePkcs8EncryptedPemFile(Platform::String ^password, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SavePkcs8EncryptedPemFile(password ? password->Data() : L"",path ? path->Data() : L"");
    }
Boolean PrivateKey::SavePkcs8File(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SavePkcs8File(path ? path->Data() : L"");
    }
Boolean PrivateKey::SavePkcs8PemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SavePkcs8PemFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::SaveRsaDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveRsaDerFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::SaveRsaPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveRsaPemFile(path ? path->Data() : L"");
    }
Boolean PrivateKey::SaveXmlFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXmlFile(path ? path->Data() : L"");
    }




