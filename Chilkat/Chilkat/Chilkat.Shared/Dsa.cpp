
// This source file is generated.

#include "pch.h"
#include "Dsa.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDsaW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Dsa::~Dsa(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Dsa::Dsa(void) 
{
    m_impl = new CkDsaW();
}

//Chilkat::Dsa::Dsa(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDsaW *)x;
//    if (!m_impl) m_impl = new CkDsaW();
//    }
//    
//Platform::IntPtr Chilkat::Dsa::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Dsa::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Dsa::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Dsa::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Dsa::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Dsa::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Dsa::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Dsa::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Dsa::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Dsa::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Dsa::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Dsa::GroupSize::get()
    {
    return m_impl ? m_impl->get_GroupSize() : 0;
    }
void Chilkat::Dsa::GroupSize::set(int newVal)
    {
        if (m_impl) m_impl->put_GroupSize(newVal);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Dsa::Hash::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_Hash(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Dsa::Hash::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_Hash(db);
    }
String ^Chilkat::Dsa::HexG::get()
    {
    return ref new String(m_impl ? m_impl->hexG() : L"");
    }
String ^Chilkat::Dsa::HexP::get()
    {
    return ref new String(m_impl ? m_impl->hexP() : L"");
    }
String ^Chilkat::Dsa::HexQ::get()
    {
    return ref new String(m_impl ? m_impl->hexQ() : L"");
    }
String ^Chilkat::Dsa::HexX::get()
    {
    return ref new String(m_impl ? m_impl->hexX() : L"");
    }
String ^Chilkat::Dsa::HexY::get()
    {
    return ref new String(m_impl ? m_impl->hexY() : L"");
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Dsa::Signature::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_Signature(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Dsa::Signature::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_Signature(db);
    }


Boolean Dsa::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Dsa::FromDer(Windows::Foundation::Collections::IVector<uint8>^derData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (derData != nullptr) { v0 = to_vector(derData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromDer(db0);
    }
Boolean Dsa::FromDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromDerFile(path ? path->Data() : L"");
    }
Boolean Dsa::FromEncryptedPem(Platform::String ^password, Platform::String ^pemData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromEncryptedPem(password ? password->Data() : L"",pemData ? pemData->Data() : L"");
    }
Boolean Dsa::FromPem(Platform::String ^pemData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromPem(pemData ? pemData->Data() : L"");
    }
Boolean Dsa::FromPublicDer(Windows::Foundation::Collections::IVector<uint8>^derData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (derData != nullptr) { v0 = to_vector(derData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromPublicDer(db0);
    }
Boolean Dsa::FromPublicDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromPublicDerFile(path ? path->Data() : L"");
    }
Boolean Dsa::FromPublicPem(Platform::String ^pemData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromPublicPem(pemData ? pemData->Data() : L"");
    }
Boolean Dsa::FromXml(Platform::String ^xmlKey)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromXml(xmlKey ? xmlKey->Data() : L"");
    }
Boolean Dsa::GenKey(int numBits)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenKey(numBits);
    }
Boolean Dsa::GenKeyFromParamsDer(Windows::Foundation::Collections::IVector<uint8>^derBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (derBytes != nullptr) { v0 = to_vector(derBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenKeyFromParamsDer(db0);
    }
Boolean Dsa::GenKeyFromParamsDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenKeyFromParamsDerFile(path ? path->Data() : L"");
    }
Boolean Dsa::GenKeyFromParamsPem(Platform::String ^pem)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenKeyFromParamsPem(pem ? pem->Data() : L"");
    }
Boolean Dsa::GenKeyFromParamsPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenKeyFromParamsPemFile(path ? path->Data() : L"");
    }
Platform::String ^Dsa::GetEncodedHash(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedHash(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Dsa::GetEncodedSignature(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedSignature(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Dsa::LoadText(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->loadText(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Dsa::SaveText(Platform::String ^strToSave, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveText(strToSave ? strToSave->Data() : L"",path ? path->Data() : L"");
    }
Boolean Dsa::SetEncodedHash(Platform::String ^encoding, Platform::String ^encodedHash)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedHash(encoding ? encoding->Data() : L"",encodedHash ? encodedHash->Data() : L"");
    }
Boolean Dsa::SetEncodedSignature(Platform::String ^encoding, Platform::String ^encodedSig)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedSignature(encoding ? encoding->Data() : L"",encodedSig ? encodedSig->Data() : L"");
    }
Boolean Dsa::SetEncodedSignatureRS(Platform::String ^encoding, Platform::String ^encodedR, Platform::String ^encodedS)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedSignatureRS(encoding ? encoding->Data() : L"",encodedR ? encodedR->Data() : L"",encodedS ? encodedS->Data() : L"");
    }
Boolean Dsa::SetKeyExplicit(int groupSizeInBytes, Platform::String ^pHex, Platform::String ^qHex, Platform::String ^gHex, Platform::String ^xHex)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetKeyExplicit(groupSizeInBytes,pHex ? pHex->Data() : L"",qHex ? qHex->Data() : L"",gHex ? gHex->Data() : L"",xHex ? xHex->Data() : L"");
    }
Boolean Dsa::SetPubKeyExplicit(int groupSizeInBytes, Platform::String ^pHex, Platform::String ^qHex, Platform::String ^gHex, Platform::String ^yHex)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetPubKeyExplicit(groupSizeInBytes,pHex ? pHex->Data() : L"",qHex ? qHex->Data() : L"",gHex ? gHex->Data() : L"",yHex ? yHex->Data() : L"");
    }
Boolean Dsa::SignHash(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SignHash();
    }
Windows::Foundation::Collections::IVector<uint8>^Dsa::ToDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ToDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Dsa::ToDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ToDerFile(path ? path->Data() : L"");
    }
Platform::String ^Dsa::ToEncryptedPem(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toEncryptedPem(password ? password->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Dsa::ToPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Dsa::ToPublicDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ToPublicDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Dsa::ToPublicDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ToPublicDerFile(path ? path->Data() : L"");
    }
Platform::String ^Dsa::ToPublicPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPublicPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Dsa::ToXml(Boolean bPublicOnly)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toXml(bPublicOnly);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Dsa::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Dsa::Verify(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Verify();
    }
Boolean Dsa::VerifyKey(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifyKey();
    }




