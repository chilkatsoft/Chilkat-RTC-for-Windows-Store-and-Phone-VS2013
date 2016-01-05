
// This source file is generated.

#include "pch.h"
#include "XmlCertVault.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkXmlCertVaultW.h"
		
#include "include/CkCertW.h"
#include "include/CkCertChainW.h"
#include "include/CkPfxW.h"
#include "Cert.h"
#include "CertChain.h"
#include "Pfx.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::XmlCertVault::~XmlCertVault(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::XmlCertVault::XmlCertVault(void) 
{
    m_impl = new CkXmlCertVaultW();
}

//Chilkat::XmlCertVault::XmlCertVault(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkXmlCertVaultW *)x;
//    if (!m_impl) m_impl = new CkXmlCertVaultW();
//    }
//    
//Platform::IntPtr Chilkat::XmlCertVault::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::XmlCertVault::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::XmlCertVault::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::XmlCertVault::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::XmlCertVault::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::XmlCertVault::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::XmlCertVault::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::XmlCertVault::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::XmlCertVault::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::XmlCertVault::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::XmlCertVault::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::XmlCertVault::MasterPassword::get()
    {
    return ref new String(m_impl ? m_impl->masterPassword() : L"");
    }
void Chilkat::XmlCertVault::MasterPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MasterPassword(newVal ? newVal->Data() : L"");
    }


Boolean XmlCertVault::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean XmlCertVault::AddCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCert(*pObj0);
    }
Boolean XmlCertVault::AddCertBinary(Windows::Foundation::Collections::IVector<uint8>^certBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (certBytes != nullptr) { v0 = to_vector(certBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCertBinary(db0);
    }
Boolean XmlCertVault::AddCertChain(CertChain ^certChain)
    {
	if (m_impl == nullptr) { return false; }
	if (certChain == nullptr) { return false; }
	CkCertChainW* pObj0 = certChain->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCertChain(*pObj0);
    }
Boolean XmlCertVault::AddCertEncoded(Platform::String ^encodedBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCertEncoded(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean XmlCertVault::AddCertFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCertFile(path ? path->Data() : L"");
    }
Boolean XmlCertVault::AddCertString(Platform::String ^certData)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCertString(certData ? certData->Data() : L"");
    }
Boolean XmlCertVault::AddPemFile(Platform::String ^path, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPemFile(path ? path->Data() : L"",password ? password->Data() : L"");
    }
Boolean XmlCertVault::AddPfx(Pfx ^pfx)
    {
	if (m_impl == nullptr) { return false; }
	if (pfx == nullptr) { return false; }
	CkPfxW* pObj0 = pfx->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfx(*pObj0);
    }
Boolean XmlCertVault::AddPfxBinary(Windows::Foundation::Collections::IVector<uint8>^pfxBytes, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxBytes != nullptr) { v0 = to_vector(pfxBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxBinary(db0,password ? password->Data() : L"");
    }
Boolean XmlCertVault::AddPfxEncoded(Platform::String ^encodedBytes, Platform::String ^encoding, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxEncoded(encodedBytes ? encodedBytes->Data() : L"",encoding ? encoding->Data() : L"",password ? password->Data() : L"");
    }
Boolean XmlCertVault::AddPfxFile(Platform::String ^path, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxFile(path ? path->Data() : L"",password ? password->Data() : L"");
    }
Platform::String ^XmlCertVault::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean XmlCertVault::LoadXml(Platform::String ^xml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xml ? xml->Data() : L"");
    }
Boolean XmlCertVault::LoadXmlFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlFile(path ? path->Data() : L"");
    }
Boolean XmlCertVault::SaveXml(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXml(path ? path->Data() : L"");
    }




