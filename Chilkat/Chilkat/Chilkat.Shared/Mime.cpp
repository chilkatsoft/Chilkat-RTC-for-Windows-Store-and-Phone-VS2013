
// This source file is generated.

#include "pch.h"
#include "Mime.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMimeW.h"
		
#include "include/CkCertW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkStringArrayW.h"
#include "include/CkCertChainW.h"
#include "include/CkXmlCertVaultW.h"
#include "Cert.h"
#include "PrivateKey.h"
#include "StringArray.h"
#include "CertChain.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Mime::~Mime(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Mime::Mime(void) 
{
    m_impl = new CkMimeW();
}

//Chilkat::Mime::Mime(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMimeW *)x;
//    if (!m_impl) m_impl = new CkMimeW();
//    }
//    
//Platform::IntPtr Chilkat::Mime::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Mime::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Mime::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Mime::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Mime::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Mime::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Mime::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Mime::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Mime::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Mime::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Mime::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Mime::Boundary::get()
    {
    return ref new String(m_impl ? m_impl->boundary() : L"");
    }
void Chilkat::Mime::Boundary::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Boundary(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::Mime::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::ContentType::get()
    {
    return ref new String(m_impl ? m_impl->contentType() : L"");
    }
void Chilkat::Mime::ContentType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ContentType(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::CurrentDateTime::get()
    {
    return ref new String(m_impl ? m_impl->currentDateTime() : L"");
    }
String ^Chilkat::Mime::Disposition::get()
    {
    return ref new String(m_impl ? m_impl->disposition() : L"");
    }
void Chilkat::Mime::Disposition::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Disposition(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::Encoding::get()
    {
    return ref new String(m_impl ? m_impl->encoding() : L"");
    }
void Chilkat::Mime::Encoding::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Encoding(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::Filename::get()
    {
    return ref new String(m_impl ? m_impl->filename() : L"");
    }
void Chilkat::Mime::Filename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Filename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::Micalg::get()
    {
    return ref new String(m_impl ? m_impl->micalg() : L"");
    }
void Chilkat::Mime::Micalg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Micalg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::Name::get()
    {
    return ref new String(m_impl ? m_impl->name() : L"");
    }
void Chilkat::Mime::Name::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Name(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mime::NumEncryptCerts::get()
    {
    return m_impl ? m_impl->get_NumEncryptCerts() : 0;
    }
int Chilkat::Mime::NumHeaderFields::get()
    {
    return m_impl ? m_impl->get_NumHeaderFields() : 0;
    }
int Chilkat::Mime::NumParts::get()
    {
    return m_impl ? m_impl->get_NumParts() : 0;
    }
int Chilkat::Mime::NumSignerCerts::get()
    {
    return m_impl ? m_impl->get_NumSignerCerts() : 0;
    }
String ^Chilkat::Mime::Pkcs7CryptAlg::get()
    {
    return ref new String(m_impl ? m_impl->pkcs7CryptAlg() : L"");
    }
void Chilkat::Mime::Pkcs7CryptAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Pkcs7CryptAlg(newVal ? newVal->Data() : L"");
    }
int Chilkat::Mime::Pkcs7KeyLength::get()
    {
    return m_impl ? m_impl->get_Pkcs7KeyLength() : 0;
    }
void Chilkat::Mime::Pkcs7KeyLength::set(int newVal)
    {
        if (m_impl) m_impl->put_Pkcs7KeyLength(newVal);
    }
String ^Chilkat::Mime::Protocol::get()
    {
    return ref new String(m_impl ? m_impl->protocol() : L"");
    }
void Chilkat::Mime::Protocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Protocol(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Mime::SigningHashAlg::get()
    {
    return ref new String(m_impl ? m_impl->signingHashAlg() : L"");
    }
void Chilkat::Mime::SigningHashAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigningHashAlg(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Mime::UnwrapExtras::get()
    {
    return m_impl ? m_impl->get_UnwrapExtras() : false;
    }
void Chilkat::Mime::UnwrapExtras::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UnwrapExtras(newVal);
    }
Boolean Chilkat::Mime::UseMmDescription::get()
    {
    return m_impl ? m_impl->get_UseMmDescription() : false;
    }
void Chilkat::Mime::UseMmDescription::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseMmDescription(newVal);
    }
Boolean Chilkat::Mime::UseXPkcs7::get()
    {
    return m_impl ? m_impl->get_UseXPkcs7() : false;
    }
void Chilkat::Mime::UseXPkcs7::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseXPkcs7(newVal);
    }


Boolean Mime::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Mime::AddContentLength(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddContentLength();
    }
Boolean Mime::AddDecryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDecryptCert(*pObj0);
    }
Boolean Mime::AddDetachedSignature(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDetachedSignature(*pObj0);
    }
Boolean Mime::AddDetachedSignature2(Cert ^cert, Boolean transferHeaderFields)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDetachedSignature2(*pObj0,transferHeaderFields);
    }
Boolean Mime::AddDetachedSignaturePk(Cert ^cert, PrivateKey ^privateKey)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (privateKey == nullptr) { return false; }
	const CkPrivateKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDetachedSignaturePk(*pObj0,*pObj1);
    }
Boolean Mime::AddDetachedSignaturePk2(Cert ^cert, PrivateKey ^privateKey, Boolean transferHeaderFields)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (privateKey == nullptr) { return false; }
	const CkPrivateKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDetachedSignaturePk2(*pObj0,*pObj1,transferHeaderFields);
    }
Boolean Mime::AddEncryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddEncryptCert(*pObj0);
    }
Boolean Mime::AddHeaderField(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddHeaderField(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Mime::AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceData(db0,password ? password->Data() : L"");
    }
Boolean Mime::AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
Boolean Mime::AppendPart(Mime ^mime)
    {
	if (m_impl == nullptr) { return false; }
	if (mime == nullptr) { return false; }
	const CkMimeW* pObj0 = mime->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendPart(*pObj0);
    }
Boolean Mime::AppendPartFromFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AppendPartFromFile(filename ? filename->Data() : L"");
    }
Platform::String ^Mime::AsnBodyToXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->asnBodyToXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Mime::ClearEncryptCerts(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ClearEncryptCerts();
    }
Boolean Mime::ContainsEncryptedParts(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ContainsEncryptedParts();
    }
Boolean Mime::ContainsSignedParts(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ContainsSignedParts();
    }
void Mime::Convert8Bit(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->Convert8Bit();
    }
Boolean Mime::ConvertToMultipartAlt(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToMultipartAlt();
    }
Boolean Mime::ConvertToMultipartMixed(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToMultipartMixed();
    }
Boolean Mime::ConvertToSigned(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToSigned(*pObj0);
    }
Boolean Mime::ConvertToSignedPk(Cert ^cert, PrivateKey ^privateKey)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (privateKey == nullptr) { return false; }
	const CkPrivateKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToSignedPk(*pObj0,*pObj1);
    }
Boolean Mime::Decrypt(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Decrypt();
    }
Boolean Mime::Decrypt2(Cert ^cert, PrivateKey ^privateKey)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (privateKey == nullptr) { return false; }
	const CkPrivateKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Decrypt2(*pObj0,*pObj1);
    }
Boolean Mime::DecryptUsingCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DecryptUsingCert(*pObj0);
    }
Boolean Mime::DecryptUsingPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DecryptUsingPfxData(db0,password ? password->Data() : L"");
    }
Boolean Mime::DecryptUsingPfxFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DecryptUsingPfxFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
Boolean Mime::Encrypt(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Encrypt(*pObj0);
    }
Boolean Mime::EncryptN(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->EncryptN();
    }
StringArray ^Mime::ExtractPartsToFiles(Platform::String ^dirPath)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->ExtractPartsToFiles(dirPath ? dirPath->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Cert ^Mime::FindIssuer(Cert ^cert)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (cert == nullptr) { return nullptr; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindIssuer(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Windows::Foundation::Collections::IVector<uint8>^Mime::GetBodyBinary(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetBodyBinary(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Mime::GetBodyDecoded(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBodyDecoded();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetBodyEncoded(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBodyEncoded();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Mime::GetEncryptCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetEncryptCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Mime::GetEntireBody(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEntireBody();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetEntireHead(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEntireHead();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetHeaderField(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderField(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetHeaderFieldAttribute(Platform::String ^name, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderFieldAttribute(name ? name->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetHeaderFieldName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderFieldName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetHeaderFieldValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderFieldValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mime::GetMime(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMime();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Mime::GetMimeBytes(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetMimeBytes(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Mime ^Mime::GetPart(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Mime
	// cppType = CkMime *
	CkMimeW *pRetObj = m_impl->GetPart(index);
	if (!pRetObj) return nullptr;
	Chilkat::Mime ^pMime = ref new Chilkat::Mime();
	pMime->m_impl = pRetObj;
	return pMime;
    }
Platform::String ^Mime::GetSignatureSigningTimeStr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSignatureSigningTimeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Mime::GetSignerCert(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSignerCert(index);
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
CertChain ^Mime::GetSignerCertChain(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->GetSignerCertChain(index);
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
Platform::String ^Mime::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Mime::HasSignatureSigningTime(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasSignatureSigningTime(index);
    }
Boolean Mime::IsApplicationData(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsApplicationData();
    }
Boolean Mime::IsAttachment(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsAttachment();
    }
Boolean Mime::IsAudio(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsAudio();
    }
Boolean Mime::IsEncrypted(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsEncrypted();
    }
Boolean Mime::IsHtml(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsHtml();
    }
Boolean Mime::IsImage(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsImage();
    }
Boolean Mime::IsMultipart(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMultipart();
    }
Boolean Mime::IsMultipartAlternative(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMultipartAlternative();
    }
Boolean Mime::IsMultipartMixed(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMultipartMixed();
    }
Boolean Mime::IsMultipartRelated(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMultipartRelated();
    }
Boolean Mime::IsPlainText(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsPlainText();
    }
Boolean Mime::IsSigned(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsSigned();
    }
Boolean Mime::IsText(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsText();
    }
Boolean Mime::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Boolean Mime::IsVideo(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsVideo();
    }
Boolean Mime::IsXml(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsXml();
    }
Boolean Mime::LoadMime(Platform::String ^mimeMsg)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadMime(mimeMsg ? mimeMsg->Data() : L"");
    }
Boolean Mime::LoadMimeBytes(Windows::Foundation::Collections::IVector<uint8>^binData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (binData != nullptr) { v0 = to_vector(binData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadMimeBytes(db0);
    }
Boolean Mime::LoadMimeFile(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadMimeFile(fileName ? fileName->Data() : L"");
    }
Boolean Mime::LoadXml(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xml ? xml->Data() : L"");
    }
Boolean Mime::LoadXmlFile(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlFile(fileName ? fileName->Data() : L"");
    }
Boolean Mime::NewMessageRfc822(Mime ^mimeObject)
    {
	if (m_impl == nullptr) { return false; }
	if (mimeObject == nullptr) { return false; }
	const CkMimeW* pObj0 = mimeObject->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->NewMessageRfc822(*pObj0);
    }
Boolean Mime::NewMultipartAlternative(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->NewMultipartAlternative();
    }
Boolean Mime::NewMultipartMixed(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->NewMultipartMixed();
    }
Boolean Mime::NewMultipartRelated(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->NewMultipartRelated();
    }
void Mime::RemoveHeaderField(Platform::String ^name, Boolean bAllOccurances)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveHeaderField(name ? name->Data() : L"",bAllOccurances);
    }
Boolean Mime::RemovePart(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemovePart(index);
    }
Boolean Mime::SaveBody(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveBody(filename ? filename->Data() : L"");
    }
Boolean Mime::SaveMime(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveMime(filename ? filename->Data() : L"");
    }
Boolean Mime::SaveXml(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXml(filename ? filename->Data() : L"");
    }
void Mime::SetBody(Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetBody(str ? str->Data() : L"");
    }
Boolean Mime::SetBodyFromBinary(Windows::Foundation::Collections::IVector<uint8>^binData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (binData != nullptr) { v0 = to_vector(binData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromBinary(db0);
    }
Boolean Mime::SetBodyFromEncoded(Platform::String ^encoding, Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromEncoded(encoding ? encoding->Data() : L"",str ? str->Data() : L"");
    }
Boolean Mime::SetBodyFromFile(Platform::String ^fileName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromFile(fileName ? fileName->Data() : L"");
    }
Boolean Mime::SetBodyFromHtml(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromHtml(str ? str->Data() : L"");
    }
Boolean Mime::SetBodyFromPlainText(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromPlainText(str ? str->Data() : L"");
    }
Boolean Mime::SetBodyFromXml(Platform::String ^str)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBodyFromXml(str ? str->Data() : L"");
    }
Boolean Mime::SetHeaderField(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetHeaderField(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Mime::SetVerifyCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	const CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetVerifyCert(*pObj0);
    }
Boolean Mime::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
Boolean Mime::UnwrapSecurity(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnwrapSecurity();
    }
void Mime::UrlEncodeBody(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UrlEncodeBody(charset ? charset->Data() : L"");
    }
Boolean Mime::UseCertVault(XmlCertVault ^vault)
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
Boolean Mime::Verify(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->Verify();
    }




