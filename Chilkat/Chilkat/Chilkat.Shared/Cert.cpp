
// This source file is generated.

#include "pch.h"
#include "Cert.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkCertW.h"
		
#include "include/CkPrivateKeyW.h"
#include "include/CkPublicKeyW.h"
#include "include/CkCertChainW.h"
#include "include/CkXmlCertVaultW.h"
#include "PrivateKey.h"
#include "PublicKey.h"
#include "CertChain.h"
#include "CkDateTime.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Cert::~Cert(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Cert::Cert(void) 
{
    m_impl = new CkCertW();
}

//Chilkat::Cert::Cert(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkCertW *)x;
//    if (!m_impl) m_impl = new CkCertW();
//    }
//    
//Platform::IntPtr Chilkat::Cert::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Cert::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Cert::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Cert::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Cert::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Cert::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Cert::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Cert::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Cert::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Cert::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Cert::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Cert::AuthorityKeyId::get()
    {
    return ref new String(m_impl ? m_impl->authorityKeyId() : L"");
    }
Boolean Chilkat::Cert::AvoidWindowsPkAccess::get()
    {
    return m_impl ? m_impl->get_AvoidWindowsPkAccess() : false;
    }
void Chilkat::Cert::AvoidWindowsPkAccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AvoidWindowsPkAccess(newVal);
    }
int Chilkat::Cert::CertVersion::get()
    {
    return m_impl ? m_impl->get_CertVersion() : 0;
    }
String ^Chilkat::Cert::CspName::get()
    {
    return ref new String(m_impl ? m_impl->cspName() : L"");
    }
Boolean Chilkat::Cert::Expired::get()
    {
    return m_impl ? m_impl->get_Expired() : false;
    }
Boolean Chilkat::Cert::ForClientAuthentication::get()
    {
    return m_impl ? m_impl->get_ForClientAuthentication() : false;
    }
Boolean Chilkat::Cert::ForCodeSigning::get()
    {
    return m_impl ? m_impl->get_ForCodeSigning() : false;
    }
Boolean Chilkat::Cert::ForSecureEmail::get()
    {
    return m_impl ? m_impl->get_ForSecureEmail() : false;
    }
Boolean Chilkat::Cert::ForServerAuthentication::get()
    {
    return m_impl ? m_impl->get_ForServerAuthentication() : false;
    }
Boolean Chilkat::Cert::ForTimeStamping::get()
    {
    return m_impl ? m_impl->get_ForTimeStamping() : false;
    }
Boolean Chilkat::Cert::HasKeyContainer::get()
    {
    return m_impl ? m_impl->get_HasKeyContainer() : false;
    }
uint32 Chilkat::Cert::IntendedKeyUsage::get()
    {
    return m_impl ? m_impl->get_IntendedKeyUsage() : 0;
    }
Boolean Chilkat::Cert::IsRoot::get()
    {
    return m_impl ? m_impl->get_IsRoot() : false;
    }
String ^Chilkat::Cert::IssuerC::get()
    {
    return ref new String(m_impl ? m_impl->issuerC() : L"");
    }
String ^Chilkat::Cert::IssuerCN::get()
    {
    return ref new String(m_impl ? m_impl->issuerCN() : L"");
    }
String ^Chilkat::Cert::IssuerDN::get()
    {
    return ref new String(m_impl ? m_impl->issuerDN() : L"");
    }
String ^Chilkat::Cert::IssuerE::get()
    {
    return ref new String(m_impl ? m_impl->issuerE() : L"");
    }
String ^Chilkat::Cert::IssuerL::get()
    {
    return ref new String(m_impl ? m_impl->issuerL() : L"");
    }
String ^Chilkat::Cert::IssuerO::get()
    {
    return ref new String(m_impl ? m_impl->issuerO() : L"");
    }
String ^Chilkat::Cert::IssuerOU::get()
    {
    return ref new String(m_impl ? m_impl->issuerOU() : L"");
    }
String ^Chilkat::Cert::IssuerS::get()
    {
    return ref new String(m_impl ? m_impl->issuerS() : L"");
    }
String ^Chilkat::Cert::KeyContainerName::get()
    {
    return ref new String(m_impl ? m_impl->keyContainerName() : L"");
    }
Boolean Chilkat::Cert::MachineKeyset::get()
    {
    return m_impl ? m_impl->get_MachineKeyset() : false;
    }
String ^Chilkat::Cert::OcspUrl::get()
    {
    return ref new String(m_impl ? m_impl->ocspUrl() : L"");
    }
Boolean Chilkat::Cert::PrivateKeyExportable::get()
    {
    return m_impl ? m_impl->get_PrivateKeyExportable() : false;
    }
Boolean Chilkat::Cert::Revoked::get()
    {
    return m_impl ? m_impl->get_Revoked() : false;
    }
String ^Chilkat::Cert::Rfc822Name::get()
    {
    return ref new String(m_impl ? m_impl->rfc822Name() : L"");
    }
Boolean Chilkat::Cert::SelfSigned::get()
    {
    return m_impl ? m_impl->get_SelfSigned() : false;
    }
String ^Chilkat::Cert::SerialNumber::get()
    {
    return ref new String(m_impl ? m_impl->serialNumber() : L"");
    }
String ^Chilkat::Cert::Sha1Thumbprint::get()
    {
    return ref new String(m_impl ? m_impl->sha1Thumbprint() : L"");
    }
Boolean Chilkat::Cert::SignatureVerified::get()
    {
    return m_impl ? m_impl->get_SignatureVerified() : false;
    }
Boolean Chilkat::Cert::Silent::get()
    {
    return m_impl ? m_impl->get_Silent() : false;
    }
String ^Chilkat::Cert::SubjectC::get()
    {
    return ref new String(m_impl ? m_impl->subjectC() : L"");
    }
String ^Chilkat::Cert::SubjectCN::get()
    {
    return ref new String(m_impl ? m_impl->subjectCN() : L"");
    }
String ^Chilkat::Cert::SubjectDN::get()
    {
    return ref new String(m_impl ? m_impl->subjectDN() : L"");
    }
String ^Chilkat::Cert::SubjectE::get()
    {
    return ref new String(m_impl ? m_impl->subjectE() : L"");
    }
String ^Chilkat::Cert::SubjectKeyId::get()
    {
    return ref new String(m_impl ? m_impl->subjectKeyId() : L"");
    }
String ^Chilkat::Cert::SubjectL::get()
    {
    return ref new String(m_impl ? m_impl->subjectL() : L"");
    }
String ^Chilkat::Cert::SubjectO::get()
    {
    return ref new String(m_impl ? m_impl->subjectO() : L"");
    }
String ^Chilkat::Cert::SubjectOU::get()
    {
    return ref new String(m_impl ? m_impl->subjectOU() : L"");
    }
String ^Chilkat::Cert::SubjectS::get()
    {
    return ref new String(m_impl ? m_impl->subjectS() : L"");
    }
Boolean Chilkat::Cert::TrustedRoot::get()
    {
    return m_impl ? m_impl->get_TrustedRoot() : false;
    }
String ^Chilkat::Cert::ValidFromStr::get()
    {
    return ref new String(m_impl ? m_impl->validFromStr() : L"");
    }
String ^Chilkat::Cert::ValidToStr::get()
    {
    return ref new String(m_impl ? m_impl->validToStr() : L"");
    }


Boolean Cert::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
int Cert::CheckRevoked(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->CheckRevoked();
    }
Windows::Foundation::Collections::IVector<uint8>^Cert::ExportCertDer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ExportCertDer(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Cert::ExportCertDerFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExportCertDerFile(path ? path->Data() : L"");
    }
Platform::String ^Cert::ExportCertPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->exportCertPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Cert::ExportCertPemFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExportCertPemFile(path ? path->Data() : L"");
    }
Platform::String ^Cert::ExportCertXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->exportCertXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
PrivateKey ^Cert::ExportPrivateKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PrivateKey
	// cppType = CkPrivateKey *
	CkPrivateKeyW *pRetObj = m_impl->ExportPrivateKey();
	if (!pRetObj) return nullptr;
	Chilkat::PrivateKey ^pPrivateKey = ref new Chilkat::PrivateKey();
	pPrivateKey->m_impl = pRetObj;
	return pPrivateKey;
    }
PublicKey ^Cert::ExportPublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = PublicKey
	// cppType = CkPublicKey *
	CkPublicKeyW *pRetObj = m_impl->ExportPublicKey();
	if (!pRetObj) return nullptr;
	Chilkat::PublicKey ^pPublicKey = ref new Chilkat::PublicKey();
	pPublicKey->m_impl = pRetObj;
	return pPublicKey;
    }
Windows::Foundation::Collections::IVector<uint8>^Cert::ExportToPfxData(Platform::String ^password, Boolean includeCertChain)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->ExportToPfxData(password ? password->Data() : L"",includeCertChain,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Cert::ExportToPfxFile(Platform::String ^pfxFilename, Platform::String ^password, Boolean bIncludeChain)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ExportToPfxFile(pfxFilename ? pfxFilename->Data() : L"",password ? password->Data() : L"",bIncludeChain);
    }
Cert ^Cert::FindIssuer(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->FindIssuer();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
CertChain ^Cert::GetCertChain(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->GetCertChain();
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
Platform::String ^Cert::GetEncoded(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEncoded();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cert::GetExtensionAsXml(Platform::String ^oid)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getExtensionAsXml(oid ? oid->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cert::GetPrivateKeyPem(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPrivateKeyPem();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Cert::GetSpkiFingerprint(Platform::String ^hashAlg, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSpkiFingerprint(hashAlg ? hashAlg->Data() : L"",encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Chilkat::CkDateTime ^Cert::GetValidFromDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetValidFromDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Chilkat::CkDateTime ^Cert::GetValidToDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetValidToDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Boolean Cert::HasPrivateKey(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasPrivateKey();
    }
Boolean Cert::LoadByCommonName(Platform::String ^cn)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadByCommonName(cn ? cn->Data() : L"");
    }
Boolean Cert::LoadByEmailAddress(Platform::String ^emailAddress)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadByEmailAddress(emailAddress ? emailAddress->Data() : L"");
    }
Boolean Cert::LoadByIssuerAndSerialNumber(Platform::String ^issuerCN, Platform::String ^serialNum)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadByIssuerAndSerialNumber(issuerCN ? issuerCN->Data() : L"",serialNum ? serialNum->Data() : L"");
    }
Boolean Cert::LoadFromBase64(Platform::String ^encodedCert)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFromBase64(encodedCert ? encodedCert->Data() : L"");
    }
Boolean Cert::LoadFromBinary(Windows::Foundation::Collections::IVector<uint8>^data)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (data != nullptr) { v0 = to_vector(data);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFromBinary(db0);
    }
Boolean Cert::LoadFromFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadFromFile(path ? path->Data() : L"");
    }
Boolean Cert::LoadPem(Platform::String ^strPem)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPem(strPem ? strPem->Data() : L"");
    }
Boolean Cert::LoadPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
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
Boolean Cert::LoadPfxFile(Platform::String ^pfxPath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadPfxFile(pfxPath ? pfxPath->Data() : L"",password ? password->Data() : L"");
    }
Boolean Cert::PemFileToDerFile(Platform::String ^fromPath, Platform::String ^toPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->PemFileToDerFile(fromPath ? fromPath->Data() : L"",toPath ? toPath->Data() : L"");
    }
Boolean Cert::SaveToFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveToFile(path ? path->Data() : L"");
    }
Boolean Cert::SetFromEncoded(Platform::String ^encodedCert)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromEncoded(encodedCert ? encodedCert->Data() : L"");
    }
Boolean Cert::SetPrivateKey(PrivateKey ^privKey)
    {
	if (m_impl == nullptr) { return false; }
	if (privKey == nullptr) { return false; }
	CkPrivateKeyW* pObj0 = privKey->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetPrivateKey(*pObj0);
    }
Boolean Cert::SetPrivateKeyPem(Platform::String ^privKeyPem)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetPrivateKeyPem(privKeyPem ? privKeyPem->Data() : L"");
    }
Boolean Cert::UseCertVault(XmlCertVault ^vault)
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
Boolean Cert::VerifySignature(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->VerifySignature();
    }




