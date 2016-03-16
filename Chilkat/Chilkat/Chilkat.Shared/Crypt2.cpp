
// This source file is generated.

#include "pch.h"
#include "Crypt2.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCrypt2W.h"
		
#include "include/CkCertW.h"
#include "include/CkStreamW.h"
#include "include/CkCertChainW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkXmlCertVaultW.h"
#include "Cert.h"
#include "Stream.h"
#include "CertChain.h"
#include "PrivateKey.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Crypt2::~Crypt2(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Crypt2::Crypt2(void) 
{
    m_impl = new CkCrypt2W();
}

//Chilkat::Crypt2::Crypt2(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCrypt2W *)x;
//    if (!m_impl) m_impl = new CkCrypt2W();
//    }
//    
//Platform::IntPtr Chilkat::Crypt2::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Crypt2::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Crypt2::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Crypt2::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Crypt2::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Crypt2::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Crypt2::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Crypt2::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Crypt2::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Crypt2::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Crypt2::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Crypt2::BlockSize::get()
    {
    return m_impl ? m_impl->get_BlockSize() : 0;
    }
Boolean Chilkat::Crypt2::CadesEnabled::get()
    {
    return m_impl ? m_impl->get_CadesEnabled() : false;
    }
void Chilkat::Crypt2::CadesEnabled::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_CadesEnabled(newVal);
    }
String ^Chilkat::Crypt2::CadesSigPolicyHash::get()
    {
    return ref new String(m_impl ? m_impl->cadesSigPolicyHash() : L"");
    }
void Chilkat::Crypt2::CadesSigPolicyHash::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CadesSigPolicyHash(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::CadesSigPolicyId::get()
    {
    return ref new String(m_impl ? m_impl->cadesSigPolicyId() : L"");
    }
void Chilkat::Crypt2::CadesSigPolicyId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CadesSigPolicyId(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::CadesSigPolicyUri::get()
    {
    return ref new String(m_impl ? m_impl->cadesSigPolicyUri() : L"");
    }
void Chilkat::Crypt2::CadesSigPolicyUri::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CadesSigPolicyUri(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::Crypt2::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::CipherMode::get()
    {
    return ref new String(m_impl ? m_impl->cipherMode() : L"");
    }
void Chilkat::Crypt2::CipherMode::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CipherMode(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::CompressionAlgorithm::get()
    {
    return ref new String(m_impl ? m_impl->compressionAlgorithm() : L"");
    }
void Chilkat::Crypt2::CompressionAlgorithm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CompressionAlgorithm(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::CryptAlgorithm::get()
    {
    return ref new String(m_impl ? m_impl->cryptAlgorithm() : L"");
    }
void Chilkat::Crypt2::CryptAlgorithm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CryptAlgorithm(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::EncodingMode::get()
    {
    return ref new String(m_impl ? m_impl->encodingMode() : L"");
    }
void Chilkat::Crypt2::EncodingMode::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EncodingMode(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Crypt2::FirstChunk::get()
    {
    return m_impl ? m_impl->get_FirstChunk() : false;
    }
void Chilkat::Crypt2::FirstChunk::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_FirstChunk(newVal);
    }
String ^Chilkat::Crypt2::HashAlgorithm::get()
    {
    return ref new String(m_impl ? m_impl->hashAlgorithm() : L"");
    }
void Chilkat::Crypt2::HashAlgorithm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HashAlgorithm(newVal ? newVal->Data() : L"");
    }
int Chilkat::Crypt2::HavalRounds::get()
    {
    return m_impl ? m_impl->get_HavalRounds() : 0;
    }
void Chilkat::Crypt2::HavalRounds::set(int newVal)
    {
        if (m_impl) m_impl->put_HavalRounds(newVal);
    }
int Chilkat::Crypt2::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Crypt2::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Crypt2::IV::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_IV(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Crypt2::IV::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_IV(db);
    }
Boolean Chilkat::Crypt2::IncludeCertChain::get()
    {
    return m_impl ? m_impl->get_IncludeCertChain() : false;
    }
void Chilkat::Crypt2::IncludeCertChain::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IncludeCertChain(newVal);
    }
int Chilkat::Crypt2::InitialCount::get()
    {
    return m_impl ? m_impl->get_InitialCount() : 0;
    }
void Chilkat::Crypt2::InitialCount::set(int newVal)
    {
        if (m_impl) m_impl->put_InitialCount(newVal);
    }
int Chilkat::Crypt2::IterationCount::get()
    {
    return m_impl ? m_impl->get_IterationCount() : 0;
    }
void Chilkat::Crypt2::IterationCount::set(int newVal)
    {
        if (m_impl) m_impl->put_IterationCount(newVal);
    }
int Chilkat::Crypt2::KeyLength::get()
    {
    return m_impl ? m_impl->get_KeyLength() : 0;
    }
void Chilkat::Crypt2::KeyLength::set(int newVal)
    {
        if (m_impl) m_impl->put_KeyLength(newVal);
    }
Boolean Chilkat::Crypt2::LastChunk::get()
    {
    return m_impl ? m_impl->get_LastChunk() : false;
    }
void Chilkat::Crypt2::LastChunk::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastChunk(newVal);
    }
String ^Chilkat::Crypt2::MacAlgorithm::get()
    {
    return ref new String(m_impl ? m_impl->macAlgorithm() : L"");
    }
void Chilkat::Crypt2::MacAlgorithm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MacAlgorithm(newVal ? newVal->Data() : L"");
    }
int Chilkat::Crypt2::NumSignerCerts::get()
    {
    return m_impl ? m_impl->get_NumSignerCerts() : 0;
    }
int Chilkat::Crypt2::PaddingScheme::get()
    {
    return m_impl ? m_impl->get_PaddingScheme() : 0;
    }
void Chilkat::Crypt2::PaddingScheme::set(int newVal)
    {
        if (m_impl) m_impl->put_PaddingScheme(newVal);
    }
String ^Chilkat::Crypt2::PbesAlgorithm::get()
    {
    return ref new String(m_impl ? m_impl->pbesAlgorithm() : L"");
    }
void Chilkat::Crypt2::PbesAlgorithm::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PbesAlgorithm(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::PbesPassword::get()
    {
    return ref new String(m_impl ? m_impl->pbesPassword() : L"");
    }
void Chilkat::Crypt2::PbesPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PbesPassword(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::Pkcs7CryptAlg::get()
    {
    return ref new String(m_impl ? m_impl->pkcs7CryptAlg() : L"");
    }
void Chilkat::Crypt2::Pkcs7CryptAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Pkcs7CryptAlg(newVal ? newVal->Data() : L"");
    }
int Chilkat::Crypt2::Rc2EffectiveKeyLength::get()
    {
    return m_impl ? m_impl->get_Rc2EffectiveKeyLength() : 0;
    }
void Chilkat::Crypt2::Rc2EffectiveKeyLength::set(int newVal)
    {
        if (m_impl) m_impl->put_Rc2EffectiveKeyLength(newVal);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Crypt2::Salt::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_Salt(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Crypt2::Salt::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_Salt(db);
    }
Windows::Foundation::Collections::IVector<uint8> ^Chilkat::Crypt2::SecretKey::get()
    {
    CkByteData db;
    if (m_impl) m_impl->get_SecretKey(db);
    const uint8 *pOut = db.getData();
    std::vector<uint8> vec(pOut, pOut+(size_t)db.getSize());
    return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
void Chilkat::Crypt2::SecretKey::set(Windows::Foundation::Collections::IVector<uint8> ^inData)
    {
        CkByteData db; std::vector<uint8> v;
        if (inData != nullptr) { v = to_vector(inData);
            db.borrowData(&v[0], (unsigned long)v.size()); }
        if (m_impl) m_impl->put_SecretKey(db);
    }
String ^Chilkat::Crypt2::UuFilename::get()
    {
    return ref new String(m_impl ? m_impl->uuFilename() : L"");
    }
void Chilkat::Crypt2::UuFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UuFilename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Crypt2::UuMode::get()
    {
    return ref new String(m_impl ? m_impl->uuMode() : L"");
    }
void Chilkat::Crypt2::UuMode::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UuMode(newVal ? newVal->Data() : L"");
    }


Boolean Crypt2::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Crypt2::AddEncryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return ; }
	if (cert == nullptr) { return ; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->AddEncryptCert(*pObj0);
    }
Boolean Crypt2::AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceData(db0,password ? password->Data() : L"");
    }
Boolean Crypt2::AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::ByteSwap4321(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ByteSwap4321(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::BytesToString(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->bytesToString(db0,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Crypt2::CkDecryptFileAsync(Platform::String ^srcFile, Platform::String ^destFile)
    {
return create_async([this, srcFile, destFile]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CkDecryptFile(srcFile ? srcFile->Data() : L"",destFile ? destFile->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Crypt2::CkEncryptFileAsync(Platform::String ^srcFile, Platform::String ^destFile)
    {
return create_async([this, srcFile, destFile]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CkEncryptFile(srcFile ? srcFile->Data() : L"",destFile ? destFile->Data() : L"");

});
    }
void Crypt2::ClearEncryptCerts(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearEncryptCerts();
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::CompressBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->CompressBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::CompressBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->compressBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::CompressString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->CompressString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::CompressStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->compressStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
uint32 Crypt2::CrcBytes(Platform::String ^crcAlg, Windows::Foundation::Collections::IVector<uint8>^byteData)
    {
	if (m_impl == nullptr) { return 0; }
	CkByteData db1; std::vector<uint8> v1;
        if (byteData != nullptr) { v1 = to_vector(byteData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = unsigned long
	// cppType = unsigned long
	return m_impl->CrcBytes(crcAlg ? crcAlg->Data() : L"",db1);
    }
IAsyncOperation<uint32>^ Crypt2::CrcFileAsync(Platform::String ^crcAlg, Platform::String ^path)
    {
return create_async([this, crcAlg, path]() -> uint32
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = unsigned long
	// cppType = unsigned long
	return m_impl->CrcFile(crcAlg ? crcAlg->Data() : L"",path ? path->Data() : L"");

});
    }
Boolean Crypt2::CreateDetachedSignature(Platform::String ^filename, Platform::String ^sigFile)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateDetachedSignature(filename ? filename->Data() : L"",sigFile ? sigFile->Data() : L"");
    }
Boolean Crypt2::CreateP7M(Platform::String ^inFilename, Platform::String ^p7mPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateP7M(inFilename ? inFilename->Data() : L"",p7mPath ? p7mPath->Data() : L"");
    }
Boolean Crypt2::CreateP7S(Platform::String ^inFilename, Platform::String ^p7sFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateP7S(inFilename ? inFilename->Data() : L"",p7sFilename ? p7sFilename->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::Decode(Platform::String ^str, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->Decode(str ? str->Data() : L"",encoding ? encoding->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::DecodeString(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decodeString(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::DecryptBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DecryptBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::DecryptBytesENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->DecryptBytesENC(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::DecryptEncoded(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decryptEncoded(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Crypt2::DecryptStreamAsync(Stream ^strm)
    {
return create_async([this, strm]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (strm == nullptr) { return false; }
	CkStreamW* pObj0 = strm->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DecryptStream(*pObj0);

});
    }
Platform::String ^Crypt2::DecryptString(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decryptString(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::DecryptStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->decryptStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::Encode(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encode(db0,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::EncodeString(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encodeString(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::EncryptBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->EncryptBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::EncryptBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encryptBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::EncryptEncoded(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encryptEncoded(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Boolean>^ Crypt2::EncryptStreamAsync(Stream ^strm)
    {
return create_async([this, strm]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (strm == nullptr) { return false; }
	CkStreamW* pObj0 = strm->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->EncryptStream(*pObj0);

});
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::EncryptString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->EncryptString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::EncryptStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->encryptStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GenEncodedSecretKey(Platform::String ^password, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genEncodedSecretKey(password ? password->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GenRandomBytesENC(int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genRandomBytesENC(numBytes);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::GenerateSecretKey(Platform::String ^password)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GenerateSecretKey(password ? password->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::GenerateUuid(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->generateUuid();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Crypt2::GetDecryptCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetDecryptCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Crypt2::GetEncodedAad(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedAad(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GetEncodedAuthTag(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedAuthTag(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GetEncodedIV(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedIV(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GetEncodedKey(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedKey(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::GetEncodedSalt(Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncodedSalt(encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Crypt2::GetLastCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetLastCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Crypt2::GetSignatureSigningTimeStr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSignatureSigningTimeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Crypt2::GetSignerCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSignerCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
CertChain ^Crypt2::GetSignerCertChain(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->GetSignerCertChain(index);
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
Boolean Crypt2::HasSignatureSigningTime(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HasSignatureSigningTime(index);
    }
Boolean Crypt2::HashBeginBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HashBeginBytes(db0);
    }
Boolean Crypt2::HashBeginString(Platform::String ^strData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HashBeginString(strData ? strData->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::HashBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HashBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::HashBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hashBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Crypt2::HashFileAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HashFile(filename ? filename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Crypt2::HashFileENCAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hashFileENC(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::HashFinal(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HashFinal(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::HashFinalENC(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hashFinalENC();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Crypt2::HashMoreBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HashMoreBytes(db0);
    }
Boolean Crypt2::HashMoreString(Platform::String ^strData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->HashMoreString(strData ? strData->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::HashString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HashString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::HashStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hashStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::HmacBytes(Windows::Foundation::Collections::IVector<uint8>^inBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inBytes != nullptr) { v0 = to_vector(inBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HmacBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::HmacBytesENC(Windows::Foundation::Collections::IVector<uint8>^inBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inBytes != nullptr) { v0 = to_vector(inBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hmacBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::HmacString(Platform::String ^inText)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->HmacString(inText ? inText->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::HmacStringENC(Platform::String ^inText)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->hmacStringENC(inText ? inText->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::InflateBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->InflateBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::InflateBytesENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->InflateBytesENC(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::InflateString(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->inflateString(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::InflateStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->inflateStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Crypt2::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::MacBytes(Windows::Foundation::Collections::IVector<uint8>^inBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inBytes != nullptr) { v0 = to_vector(inBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->MacBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::MacBytesENC(Windows::Foundation::Collections::IVector<uint8>^inBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inBytes != nullptr) { v0 = to_vector(inBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->macBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::MacString(Platform::String ^inText)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->MacString(inText ? inText->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::MacStringENC(Platform::String ^inText)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->macStringENC(inText ? inText->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::MySqlAesDecrypt(Platform::String ^strEncrypted, Platform::String ^strKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->mySqlAesDecrypt(strEncrypted ? strEncrypted->Data() : L"",strKey ? strKey->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::MySqlAesEncrypt(Platform::String ^strData, Platform::String ^strKey)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->mySqlAesEncrypt(strData ? strData->Data() : L"",strKey ? strKey->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::OpaqueSignBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpaqueSignBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::OpaqueSignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->opaqueSignBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::OpaqueSignString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpaqueSignString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::OpaqueSignStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->opaqueSignStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::OpaqueVerifyBytes(Windows::Foundation::Collections::IVector<uint8>^p7s)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (p7s != nullptr) { v0 = to_vector(p7s);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpaqueVerifyBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::OpaqueVerifyBytesENC(Platform::String ^p7s)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->OpaqueVerifyBytesENC(p7s ? p7s->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::OpaqueVerifyString(Windows::Foundation::Collections::IVector<uint8>^p7s)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (p7s != nullptr) { v0 = to_vector(p7s);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->opaqueVerifyString(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::OpaqueVerifyStringENC(Platform::String ^p7s)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->opaqueVerifyStringENC(p7s ? p7s->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::Pbkdf1(Platform::String ^password, Platform::String ^charset, Platform::String ^hashAlg, Platform::String ^salt, int iterationCount, int outputKeyBitLen, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->pbkdf1(password ? password->Data() : L"",charset ? charset->Data() : L"",hashAlg ? hashAlg->Data() : L"",salt ? salt->Data() : L"",iterationCount,outputKeyBitLen,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::Pbkdf2(Platform::String ^password, Platform::String ^charset, Platform::String ^hashAlg, Platform::String ^salt, int iterationCount, int outputKeyBitLen, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->pbkdf2(password ? password->Data() : L"",charset ? charset->Data() : L"",hashAlg ? hashAlg->Data() : L"",salt ? salt->Data() : L"",iterationCount,outputKeyBitLen,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Crypt2::Pkcs7ExtractDigest(int signerIndex, Platform::String ^pkcs7)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->pkcs7ExtractDigest(signerIndex,pkcs7 ? pkcs7->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Crypt2::RandomizeIV(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RandomizeIV();
    }
void Crypt2::RandomizeKey(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->RandomizeKey();
    }
Platform::String ^Crypt2::ReEncode(Platform::String ^data, Platform::String ^fromEncoding, Platform::String ^toEncoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->reEncode(data ? data->Data() : L"",fromEncoding ? fromEncoding->Data() : L"",toEncoding ? toEncoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::ReadFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ReadFile(filename ? filename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Crypt2::SetDecryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert(*pObj0);
    }
Boolean Crypt2::SetDecryptCert2(Cert ^cert, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert2(*pObj0,*pObj1);
    }
Boolean Crypt2::SetEncodedAad(Platform::String ^aadStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedAad(aadStr ? aadStr->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Crypt2::SetEncodedAuthTag(Platform::String ^authTagStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetEncodedAuthTag(authTagStr ? authTagStr->Data() : L"",encoding ? encoding->Data() : L"");
    }
void Crypt2::SetEncodedIV(Platform::String ^ivStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetEncodedIV(ivStr ? ivStr->Data() : L"",encoding ? encoding->Data() : L"");
    }
void Crypt2::SetEncodedKey(Platform::String ^keyStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetEncodedKey(keyStr ? keyStr->Data() : L"",encoding ? encoding->Data() : L"");
    }
void Crypt2::SetEncodedSalt(Platform::String ^saltStr, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetEncodedSalt(saltStr ? saltStr->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Crypt2::SetEncryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetEncryptCert(*pObj0);
    }
void Crypt2::SetHmacKeyBytes(Windows::Foundation::Collections::IVector<uint8>^keyBytes)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (keyBytes != nullptr) { v0 = to_vector(keyBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetHmacKeyBytes(db0);
    }
void Crypt2::SetHmacKeyEncoded(Platform::String ^key, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetHmacKeyEncoded(key ? key->Data() : L"",encoding ? encoding->Data() : L"");
    }
void Crypt2::SetHmacKeyString(Platform::String ^key)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetHmacKeyString(key ? key->Data() : L"");
    }
Boolean Crypt2::SetMacKeyBytes(Windows::Foundation::Collections::IVector<uint8>^keyBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (keyBytes != nullptr) { v0 = to_vector(keyBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMacKeyBytes(db0);
    }
Boolean Crypt2::SetMacKeyEncoded(Platform::String ^key, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMacKeyEncoded(key ? key->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Crypt2::SetMacKeyString(Platform::String ^key)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMacKeyString(key ? key->Data() : L"");
    }
void Crypt2::SetSecretKeyViaPassword(Platform::String ^password)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetSecretKeyViaPassword(password ? password->Data() : L"");
    }
Boolean Crypt2::SetSigningCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSigningCert(*pObj0);
    }
Boolean Crypt2::SetSigningCert2(Cert ^cert, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSigningCert2(*pObj0,*pObj1);
    }
Boolean Crypt2::SetVerifyCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetVerifyCert(*pObj0);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::SignBytes(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SignBytes(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::SignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signBytesENC(db0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::SignString(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SignString(str ? str->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::SignStringENC(Platform::String ^str)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->signStringENC(str ? str->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Crypt2::StringToBytes(Platform::String ^inStr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->StringToBytes(inStr ? inStr->Data() : L"",charset ? charset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Crypt2::TrimEndingWith(Platform::String ^inStr, Platform::String ^ending)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->trimEndingWith(inStr ? inStr->Data() : L"",ending ? ending->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Crypt2::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Crypt2::UseCertVault(XmlCertVault ^vault)
    {
	if (m_impl == nullptr) { return false; }
	if (vault == nullptr) { return false; }
	CkXmlCertVaultW* pObj0 = vault->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseCertVault(*pObj0);
    }
Boolean Crypt2::VerifyBytes(Windows::Foundation::Collections::IVector<uint8>^data, Windows::Foundation::Collections::IVector<uint8>^sig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	CkByteData db1; std::vector<uint8> v1;
        if (sig != nullptr) { v1 = to_vector(sig);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyBytes(db0,db1);
    }
Boolean Crypt2::VerifyBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^encodedSig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyBytesENC(db0,encodedSig ? encodedSig->Data() : L"");
    }
Boolean Crypt2::VerifyDetachedSignature(Platform::String ^filename, Platform::String ^sigFile)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyDetachedSignature(filename ? filename->Data() : L"",sigFile ? sigFile->Data() : L"");
    }
Boolean Crypt2::VerifyP7M(Platform::String ^p7mPath, Platform::String ^destPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyP7M(p7mPath ? p7mPath->Data() : L"",destPath ? destPath->Data() : L"");
    }
Boolean Crypt2::VerifyP7S(Platform::String ^inFilename, Platform::String ^p7sFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyP7S(inFilename ? inFilename->Data() : L"",p7sFilename ? p7sFilename->Data() : L"");
    }
Boolean Crypt2::VerifyString(Platform::String ^str, Windows::Foundation::Collections::IVector<uint8>^sig)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (sig != nullptr) { v1 = to_vector(sig);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyString(str ? str->Data() : L"",db1);
    }
Boolean Crypt2::VerifyStringENC(Platform::String ^str, Platform::String ^encodedSig)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyStringENC(str ? str->Data() : L"",encodedSig ? encodedSig->Data() : L"");
    }
Boolean Crypt2::WriteFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (fileData != nullptr) { v1 = to_vector(fileData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxCrypt2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->WriteFile(filename ? filename->Data() : L"",db1);
    }




