
// This source file is generated.

#include "pch.h"
#include "Dkim.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDkimW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Dkim::~Dkim(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Dkim::Dkim(void) 
{
    m_impl = new CkDkimW();
}

//Chilkat::Dkim::Dkim(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDkimW *)x;
//    if (!m_impl) m_impl = new CkDkimW();
//    }
//    
//Platform::IntPtr Chilkat::Dkim::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Dkim::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Dkim::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Dkim::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Dkim::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Dkim::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Dkim::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Dkim::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Dkim::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Dkim::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Dkim::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Dkim::DkimAlg::get()
    {
    return ref new String(m_impl ? m_impl->dkimAlg() : L"");
    }
void Chilkat::Dkim::DkimAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DkimAlg(newVal ? newVal->Data() : L"");
    }
int Chilkat::Dkim::DkimBodyLengthCount::get()
    {
    return m_impl ? m_impl->get_DkimBodyLengthCount() : 0;
    }
void Chilkat::Dkim::DkimBodyLengthCount::set(int newVal)
    {
        if (m_impl) m_impl->put_DkimBodyLengthCount(newVal);
    }
String ^Chilkat::Dkim::DkimCanon::get()
    {
    return ref new String(m_impl ? m_impl->dkimCanon() : L"");
    }
void Chilkat::Dkim::DkimCanon::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DkimCanon(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DkimDomain::get()
    {
    return ref new String(m_impl ? m_impl->dkimDomain() : L"");
    }
void Chilkat::Dkim::DkimDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DkimDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DkimHeaders::get()
    {
    return ref new String(m_impl ? m_impl->dkimHeaders() : L"");
    }
void Chilkat::Dkim::DkimHeaders::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DkimHeaders(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DkimSelector::get()
    {
    return ref new String(m_impl ? m_impl->dkimSelector() : L"");
    }
void Chilkat::Dkim::DkimSelector::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DkimSelector(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DomainKeyAlg::get()
    {
    return ref new String(m_impl ? m_impl->domainKeyAlg() : L"");
    }
void Chilkat::Dkim::DomainKeyAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DomainKeyAlg(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DomainKeyCanon::get()
    {
    return ref new String(m_impl ? m_impl->domainKeyCanon() : L"");
    }
void Chilkat::Dkim::DomainKeyCanon::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DomainKeyCanon(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DomainKeyDomain::get()
    {
    return ref new String(m_impl ? m_impl->domainKeyDomain() : L"");
    }
void Chilkat::Dkim::DomainKeyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DomainKeyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DomainKeyHeaders::get()
    {
    return ref new String(m_impl ? m_impl->domainKeyHeaders() : L"");
    }
void Chilkat::Dkim::DomainKeyHeaders::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DomainKeyHeaders(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Dkim::DomainKeySelector::get()
    {
    return ref new String(m_impl ? m_impl->domainKeySelector() : L"");
    }
void Chilkat::Dkim::DomainKeySelector::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DomainKeySelector(newVal ? newVal->Data() : L"");
    }
int Chilkat::Dkim::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Dkim::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }


Boolean Dkim::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Windows::Foundation::Collections::IVector<uint8>^Dkim::AddDkimSignature(Windows::Foundation::Collections::IVector<uint8>^mimeIn)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeIn != nullptr) { v0 = to_vector(mimeIn);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->AddDkimSignature(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Dkim::AddDomainKeySignature(Windows::Foundation::Collections::IVector<uint8>^mimeIn)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeIn != nullptr) { v0 = to_vector(mimeIn);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->AddDomainKeySignature(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Dkim::LoadDkimPk(Platform::String ^privateKey, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDkimPk(privateKey ? privateKey->Data() : L"",optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadDkimPkBytes(Windows::Foundation::Collections::IVector<uint8>^privateKeyDer, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (privateKeyDer != nullptr) { v0 = to_vector(privateKeyDer);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDkimPkBytes(db0,optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadDkimPkFile(Platform::String ^privateKeyFilepath, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDkimPkFile(privateKeyFilepath ? privateKeyFilepath->Data() : L"",optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadDomainKeyPk(Platform::String ^privateKey, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDomainKeyPk(privateKey ? privateKey->Data() : L"",optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadDomainKeyPkBytes(Windows::Foundation::Collections::IVector<uint8>^privateKeyDer, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (privateKeyDer != nullptr) { v0 = to_vector(privateKeyDer);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDomainKeyPkBytes(db0,optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadDomainKeyPkFile(Platform::String ^privateKeyFilepath, Platform::String ^optionalPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadDomainKeyPkFile(privateKeyFilepath ? privateKeyFilepath->Data() : L"",optionalPassword ? optionalPassword->Data() : L"");
    }
Boolean Dkim::LoadPublicKey(Platform::String ^selector, Platform::String ^domain, Platform::String ^publicKey)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadPublicKey(selector ? selector->Data() : L"",domain ? domain->Data() : L"",publicKey ? publicKey->Data() : L"");
    }
Boolean Dkim::LoadPublicKeyFile(Platform::String ^selector, Platform::String ^domain, Platform::String ^publicKeyFilepath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoadPublicKeyFile(selector ? selector->Data() : L"",domain ? domain->Data() : L"",publicKeyFilepath ? publicKeyFilepath->Data() : L"");
    }
int Dkim::NumDkimSignatures(Windows::Foundation::Collections::IVector<uint8>^mimeData)
    {
	if (m_impl == nullptr) { return -1; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeData != nullptr) { v0 = to_vector(mimeData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->NumDkimSignatures(db0);
    }
int Dkim::NumDomainKeySignatures(Windows::Foundation::Collections::IVector<uint8>^mimeData)
    {
	if (m_impl == nullptr) { return -1; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeData != nullptr) { v0 = to_vector(mimeData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->NumDomainKeySignatures(db0);
    }
IAsyncOperation<Boolean>^ Dkim::PrefetchPublicKeyAsync(Platform::String ^selector, Platform::String ^domain)
    {
return create_async([this, selector, domain]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PrefetchPublicKey(selector ? selector->Data() : L"",domain ? domain->Data() : L"");

});
    }
Boolean Dkim::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ Dkim::VerifyDkimSignatureAsync(int sigIdx, Windows::Foundation::Collections::IVector<uint8>^mimeData)
    {
return create_async([this, sigIdx, mimeData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (mimeData != nullptr) { v1 = to_vector(mimeData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyDkimSignature(sigIdx,db1);

});
    }
IAsyncOperation<Boolean>^ Dkim::VerifyDomainKeySignatureAsync(int sigIdx, Windows::Foundation::Collections::IVector<uint8>^mimeData)
    {
return create_async([this, sigIdx, mimeData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (mimeData != nullptr) { v1 = to_vector(mimeData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxDkimProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyDomainKeySignature(sigIdx,db1);

});
    }




