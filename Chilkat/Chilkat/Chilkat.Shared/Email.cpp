
// This source file is generated.

#include "pch.h"
#include "Email.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkEmailW.h"
		
#include "include/CkCertW.h"
#include "include/CkStringArrayW.h"
#include "include/CkCertChainW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkXmlCertVaultW.h"
#include "Cert.h"
#include "StringArray.h"
#include "CkDateTime.h"
#include "CertChain.h"
#include "PrivateKey.h"
#include "XmlCertVault.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Email::~Email(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Email::Email(void) 
{
    m_impl = new CkEmailW();
}

//Chilkat::Email::Email(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkEmailW *)x;
//    if (!m_impl) m_impl = new CkEmailW();
//    }
//    
//Platform::IntPtr Chilkat::Email::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Email::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Email::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Email::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Email::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Email::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Email::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Email::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Email::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Email::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Email::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Email::Body::get()
    {
    return ref new String(m_impl ? m_impl->body() : L"");
    }
void Chilkat::Email::Body::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Body(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::BounceAddress::get()
    {
    return ref new String(m_impl ? m_impl->bounceAddress() : L"");
    }
void Chilkat::Email::BounceAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_BounceAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::Email::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Email::Decrypted::get()
    {
    return m_impl ? m_impl->get_Decrypted() : false;
    }
String ^Chilkat::Email::EmailDateStr::get()
    {
    return ref new String(m_impl ? m_impl->emailDateStr() : L"");
    }
void Chilkat::Email::EmailDateStr::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EmailDateStr(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::EncryptedBy::get()
    {
    return ref new String(m_impl ? m_impl->encryptedBy() : L"");
    }
String ^Chilkat::Email::FileDistList::get()
    {
    return ref new String(m_impl ? m_impl->fileDistList() : L"");
    }
void Chilkat::Email::FileDistList::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FileDistList(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::From::get()
    {
    return ref new String(m_impl ? m_impl->ck_from() : L"");
    }
void Chilkat::Email::From::set(String ^newVal)
    {
        if (m_impl) m_impl->put_From(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::FromAddress::get()
    {
    return ref new String(m_impl ? m_impl->fromAddress() : L"");
    }
void Chilkat::Email::FromAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FromAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::FromName::get()
    {
    return ref new String(m_impl ? m_impl->fromName() : L"");
    }
void Chilkat::Email::FromName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_FromName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::Header::get()
    {
    return ref new String(m_impl ? m_impl->header() : L"");
    }
String ^Chilkat::Email::Language::get()
    {
    return ref new String(m_impl ? m_impl->language() : L"");
    }
String ^Chilkat::Email::LocalDateStr::get()
    {
    return ref new String(m_impl ? m_impl->localDateStr() : L"");
    }
void Chilkat::Email::LocalDateStr::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LocalDateStr(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::Mailer::get()
    {
    return ref new String(m_impl ? m_impl->mailer() : L"");
    }
void Chilkat::Email::Mailer::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Mailer(newVal ? newVal->Data() : L"");
    }
int Chilkat::Email::NumAlternatives::get()
    {
    return m_impl ? m_impl->get_NumAlternatives() : 0;
    }
int Chilkat::Email::NumAttachedMessages::get()
    {
    return m_impl ? m_impl->get_NumAttachedMessages() : 0;
    }
int Chilkat::Email::NumAttachments::get()
    {
    return m_impl ? m_impl->get_NumAttachments() : 0;
    }
int Chilkat::Email::NumBcc::get()
    {
    return m_impl ? m_impl->get_NumBcc() : 0;
    }
int Chilkat::Email::NumCC::get()
    {
    return m_impl ? m_impl->get_NumCC() : 0;
    }
int Chilkat::Email::NumDaysOld::get()
    {
    return m_impl ? m_impl->get_NumDaysOld() : 0;
    }
int Chilkat::Email::NumHeaderFields::get()
    {
    return m_impl ? m_impl->get_NumHeaderFields() : 0;
    }
int Chilkat::Email::NumRelatedItems::get()
    {
    return m_impl ? m_impl->get_NumRelatedItems() : 0;
    }
int Chilkat::Email::NumReplacePatterns::get()
    {
    return m_impl ? m_impl->get_NumReplacePatterns() : 0;
    }
int Chilkat::Email::NumReports::get()
    {
    return m_impl ? m_impl->get_NumReports() : 0;
    }
int Chilkat::Email::NumTo::get()
    {
    return m_impl ? m_impl->get_NumTo() : 0;
    }
Boolean Chilkat::Email::OverwriteExisting::get()
    {
    return m_impl ? m_impl->get_OverwriteExisting() : false;
    }
void Chilkat::Email::OverwriteExisting::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_OverwriteExisting(newVal);
    }
String ^Chilkat::Email::Pkcs7CryptAlg::get()
    {
    return ref new String(m_impl ? m_impl->pkcs7CryptAlg() : L"");
    }
void Chilkat::Email::Pkcs7CryptAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Pkcs7CryptAlg(newVal ? newVal->Data() : L"");
    }
int Chilkat::Email::Pkcs7KeyLength::get()
    {
    return m_impl ? m_impl->get_Pkcs7KeyLength() : 0;
    }
void Chilkat::Email::Pkcs7KeyLength::set(int newVal)
    {
        if (m_impl) m_impl->put_Pkcs7KeyLength(newVal);
    }
String ^Chilkat::Email::PreferredCharset::get()
    {
    return ref new String(m_impl ? m_impl->preferredCharset() : L"");
    }
void Chilkat::Email::PreferredCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PreferredCharset(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Email::PrependHeaders::get()
    {
    return m_impl ? m_impl->get_PrependHeaders() : false;
    }
void Chilkat::Email::PrependHeaders::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PrependHeaders(newVal);
    }
Boolean Chilkat::Email::ReceivedEncrypted::get()
    {
    return m_impl ? m_impl->get_ReceivedEncrypted() : false;
    }
Boolean Chilkat::Email::ReceivedSigned::get()
    {
    return m_impl ? m_impl->get_ReceivedSigned() : false;
    }
String ^Chilkat::Email::ReplyTo::get()
    {
    return ref new String(m_impl ? m_impl->replyTo() : L"");
    }
void Chilkat::Email::ReplyTo::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ReplyTo(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Email::ReturnReceipt::get()
    {
    return m_impl ? m_impl->get_ReturnReceipt() : false;
    }
void Chilkat::Email::ReturnReceipt::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ReturnReceipt(newVal);
    }
Boolean Chilkat::Email::SendEncrypted::get()
    {
    return m_impl ? m_impl->get_SendEncrypted() : false;
    }
void Chilkat::Email::SendEncrypted::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SendEncrypted(newVal);
    }
Boolean Chilkat::Email::SendSigned::get()
    {
    return m_impl ? m_impl->get_SendSigned() : false;
    }
void Chilkat::Email::SendSigned::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SendSigned(newVal);
    }
String ^Chilkat::Email::Sender::get()
    {
    return ref new String(m_impl ? m_impl->sender() : L"");
    }
void Chilkat::Email::Sender::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Sender(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Email::SignaturesValid::get()
    {
    return m_impl ? m_impl->get_SignaturesValid() : false;
    }
String ^Chilkat::Email::SignedBy::get()
    {
    return ref new String(m_impl ? m_impl->signedBy() : L"");
    }
String ^Chilkat::Email::SigningHashAlg::get()
    {
    return ref new String(m_impl ? m_impl->signingHashAlg() : L"");
    }
void Chilkat::Email::SigningHashAlg::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SigningHashAlg(newVal ? newVal->Data() : L"");
    }
int Chilkat::Email::Size::get()
    {
    return m_impl ? m_impl->get_Size() : 0;
    }
String ^Chilkat::Email::Subject::get()
    {
    return ref new String(m_impl ? m_impl->subject() : L"");
    }
void Chilkat::Email::Subject::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Subject(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Email::Uidl::get()
    {
    return ref new String(m_impl ? m_impl->uidl() : L"");
    }
Boolean Chilkat::Email::UnpackUseRelPaths::get()
    {
    return m_impl ? m_impl->get_UnpackUseRelPaths() : false;
    }
void Chilkat::Email::UnpackUseRelPaths::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UnpackUseRelPaths(newVal);
    }


Boolean Email::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
void Email::AddAttachmentHeader(int index, Platform::String ^fieldName, Platform::String ^fieldValue)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddAttachmentHeader(index,fieldName ? fieldName->Data() : L"",fieldValue ? fieldValue->Data() : L"");
    }
Boolean Email::AddBcc(Platform::String ^friendlyName, Platform::String ^emailAddress)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddBcc(friendlyName ? friendlyName->Data() : L"",emailAddress ? emailAddress->Data() : L"");
    }
Boolean Email::AddCC(Platform::String ^friendlyName, Platform::String ^emailAddress)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddCC(friendlyName ? friendlyName->Data() : L"",emailAddress ? emailAddress->Data() : L"");
    }
Boolean Email::AddDataAttachment(Platform::String ^filePath, Windows::Foundation::Collections::IVector<uint8>^content)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (content != nullptr) { v1 = to_vector(content);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDataAttachment(filePath ? filePath->Data() : L"",db1);
    }
Boolean Email::AddDataAttachment2(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^content, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (content != nullptr) { v1 = to_vector(content);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddDataAttachment2(path ? path->Data() : L"",db1,contentType ? contentType->Data() : L"");
    }
Boolean Email::AddEncryptCert(Cert ^cert)
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
Platform::String ^Email::AddFileAttachment(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->addFileAttachment(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Email::AddFileAttachment2(Platform::String ^path, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddFileAttachment2(path ? path->Data() : L"",contentType ? contentType->Data() : L"");
    }
void Email::AddHeaderField(Platform::String ^fieldName, Platform::String ^fieldValue)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddHeaderField(fieldName ? fieldName->Data() : L"",fieldValue ? fieldValue->Data() : L"");
    }
void Email::AddHeaderField2(Platform::String ^fieldName, Platform::String ^fieldValue)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddHeaderField2(fieldName ? fieldName->Data() : L"",fieldValue ? fieldValue->Data() : L"");
    }
Boolean Email::AddHtmlAlternativeBody(Platform::String ^body)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddHtmlAlternativeBody(body ? body->Data() : L"");
    }
Boolean Email::AddMultipleBcc(Platform::String ^commaSeparatedAddresses)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddMultipleBcc(commaSeparatedAddresses ? commaSeparatedAddresses->Data() : L"");
    }
Boolean Email::AddMultipleCC(Platform::String ^commaSeparatedAddresses)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddMultipleCC(commaSeparatedAddresses ? commaSeparatedAddresses->Data() : L"");
    }
Boolean Email::AddMultipleTo(Platform::String ^commaSeparatedAddresses)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddMultipleTo(commaSeparatedAddresses ? commaSeparatedAddresses->Data() : L"");
    }
Boolean Email::AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
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
Boolean Email::AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
Boolean Email::AddPlainTextAlternativeBody(Platform::String ^body)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddPlainTextAlternativeBody(body ? body->Data() : L"");
    }
Platform::String ^Email::AddRelatedData(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->addRelatedData(path ? path->Data() : L"",db1);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Email::AddRelatedData2(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^fileNameInHtml)
    {
	if (m_impl == nullptr) { return ; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddRelatedData2(db0,fileNameInHtml ? fileNameInHtml->Data() : L"");
    }
Platform::String ^Email::AddRelatedFile(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->addRelatedFile(path ? path->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Email::AddRelatedFile2(Platform::String ^filenameOnDisk, Platform::String ^filenameInHtml)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddRelatedFile2(filenameOnDisk ? filenameOnDisk->Data() : L"",filenameInHtml ? filenameInHtml->Data() : L"");
    }
void Email::AddRelatedHeader(int index, Platform::String ^fieldName, Platform::String ^fieldValue)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddRelatedHeader(index,fieldName ? fieldName->Data() : L"",fieldValue ? fieldValue->Data() : L"");
    }
Platform::String ^Email::AddRelatedString(Platform::String ^nameInHtml, Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->addRelatedString(nameInHtml ? nameInHtml->Data() : L"",str ? str->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Email::AddRelatedString2(Platform::String ^content, Platform::String ^charset, Platform::String ^fileNameInHtml)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddRelatedString2(content ? content->Data() : L"",charset ? charset->Data() : L"",fileNameInHtml ? fileNameInHtml->Data() : L"");
    }
Boolean Email::AddStringAttachment(Platform::String ^path, Platform::String ^content)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringAttachment(path ? path->Data() : L"",content ? content->Data() : L"");
    }
Boolean Email::AddStringAttachment2(Platform::String ^path, Platform::String ^content, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringAttachment2(path ? path->Data() : L"",content ? content->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean Email::AddTo(Platform::String ^friendlyName, Platform::String ^emailAddress)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddTo(friendlyName ? friendlyName->Data() : L"",emailAddress ? emailAddress->Data() : L"");
    }
Boolean Email::AddiCalendarAlternativeBody(Platform::String ^body, Platform::String ^methodName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddiCalendarAlternativeBody(body ? body->Data() : L"",methodName ? methodName->Data() : L"");
    }
Boolean Email::AesDecrypt(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AesDecrypt(password ? password->Data() : L"");
    }
Boolean Email::AesEncrypt(Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AesEncrypt(password ? password->Data() : L"");
    }
void Email::AppendToBody(Platform::String ^str)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AppendToBody(str ? str->Data() : L"");
    }
Boolean Email::AspUnpack(Platform::String ^prefix, Platform::String ^saveDir, Platform::String ^urlPath, Boolean cleanFiles)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AspUnpack(prefix ? prefix->Data() : L"",saveDir ? saveDir->Data() : L"",urlPath ? urlPath->Data() : L"",cleanFiles);
    }
Windows::Foundation::Collections::IVector<uint8>^Email::AspUnpack2(Platform::String ^prefix, Platform::String ^saveDir, Platform::String ^urlPath, Boolean cleanFiles)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->AspUnpack2(prefix ? prefix->Data() : L"",saveDir ? saveDir->Data() : L"",urlPath ? urlPath->Data() : L"",cleanFiles,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Email::AttachMessage(Windows::Foundation::Collections::IVector<uint8>^mimeBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeBytes != nullptr) { v0 = to_vector(mimeBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AttachMessage(db0);
    }
Platform::String ^Email::BEncodeBytes(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->bEncodeBytes(db0,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::BEncodeString(Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->bEncodeString(str ? str->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Email::ClearBcc(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ClearBcc();
    }
void Email::ClearCC(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ClearCC();
    }
void Email::ClearEncryptCerts(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ClearEncryptCerts();
    }
void Email::ClearTo(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->ClearTo();
    }
Email ^Email::Clone(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->Clone();
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Platform::String ^Email::ComputeGlobalKey(Platform::String ^encoding, Boolean bFold)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->computeGlobalKey(encoding ? encoding->Data() : L"",bFold);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Email ^Email::CreateDsn(Platform::String ^explanation, Platform::String ^xmlDeliveryStatus, Boolean bHeaderOnly)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->CreateDsn(explanation ? explanation->Data() : L"",xmlDeliveryStatus ? xmlDeliveryStatus->Data() : L"",bHeaderOnly);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^Email::CreateForward(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->CreateForward();
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^Email::CreateMdn(Platform::String ^explanation, Platform::String ^xmlMdnFields, Boolean bHeaderOnly)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->CreateMdn(explanation ? explanation->Data() : L"",xmlMdnFields ? xmlMdnFields->Data() : L"",bHeaderOnly);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^Email::CreateReply(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->CreateReply();
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Platform::String ^Email::CreateTempMht(Platform::String ^inFilename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->createTempMht(inFilename ? inFilename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Email::DropAttachments(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DropAttachments();
    }
void Email::DropRelatedItem(int index)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DropRelatedItem(index);
    }
void Email::DropRelatedItems(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->DropRelatedItems();
    }
Boolean Email::DropSingleAttachment(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->DropSingleAttachment(index);
    }
Cert ^Email::FindIssuer(Cert ^cert)
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
Platform::String ^Email::GenerateFilename(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->generateFilename();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAltHeaderField(int index, Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAltHeaderField(index,fieldName ? fieldName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAlternativeBody(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAlternativeBody(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAlternativeBodyByContentType(Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAlternativeBodyByContentType(contentType ? contentType->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAlternativeContentType(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAlternativeContentType(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Email ^Email::GetAttachedMessage(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->GetAttachedMessage(index);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Platform::String ^Email::GetAttachedMessageAttr(int index, Platform::String ^fieldName, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachedMessageAttr(index,fieldName ? fieldName->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachedMessageFilename(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachedMessageFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachmentAttr(int index, Platform::String ^fieldName, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentAttr(index,fieldName ? fieldName->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachmentContentID(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentContentID(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachmentContentType(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentContentType(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetAttachmentData(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetAttachmentData(index,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Email::GetAttachmentFilename(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachmentHeader(int attachIndex, Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentHeader(attachIndex,fieldName ? fieldName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Email::GetAttachmentSize(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetAttachmentSize(index);
    }
Platform::String ^Email::GetAttachmentString(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentString(index,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetAttachmentStringCrLf(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getAttachmentStringCrLf(index,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetBcc(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBcc(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetBccAddr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBccAddr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetBccName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getBccName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetCC(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCC(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetCcAddr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCcAddr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetCcName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCcName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetDeliveryStatusInfo(Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getDeliveryStatusInfo(fieldName ? fieldName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
StringArray ^Email::GetDsnFinalRecipients(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetDsnFinalRecipients();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Chilkat::CkDateTime ^Email::GetDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Cert ^Email::GetEncryptCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetEncryptCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Cert ^Email::GetEncryptedByCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetEncryptedByCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetFileContent(Platform::String ^path)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetFileContent(path ? path->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Email::GetHeaderField(Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderField(fieldName ? fieldName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetHeaderFieldName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderFieldName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetHeaderFieldValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderFieldValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetHtmlBody(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHtmlBody();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Email::GetImapUid(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetImapUid();
    }
StringArray ^Email::GetLinkedDomains(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetLinkedDomains();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetMbHeaderField(Platform::String ^fieldName, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetMbHeaderField(fieldName ? fieldName->Data() : L"",charset ? charset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetMbHtmlBody(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetMbHtmlBody(charset ? charset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetMbPlainTextBody(Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetMbPlainTextBody(charset ? charset->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Email::GetMime(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMime();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetMimeBinary(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetMimeBinary(outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetNthBinaryPartOfType(int index, Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = int
	bool success = m_impl->GetNthBinaryPartOfType(index,contentType ? contentType->Data() : L"",inlineOnly,excludeAttachments,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Email::GetNthTextPartOfType(int index, Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = int
	const wchar_t *retStr = m_impl->getNthTextPartOfType(index,contentType ? contentType->Data() : L"",inlineOnly,excludeAttachments);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Email::GetNumPartsOfType(Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetNumPartsOfType(contentType ? contentType->Data() : L"",inlineOnly,excludeAttachments);
    }
Platform::String ^Email::GetPlainTextBody(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPlainTextBody();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedAttr(int index, Platform::String ^fieldName, Platform::String ^attrName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedAttr(index,fieldName ? fieldName->Data() : L"",attrName ? attrName->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedContentID(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedContentID(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedContentLocation(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedContentLocation(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedContentType(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedContentType(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Email::GetRelatedData(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetRelatedData(index,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Email::GetRelatedFilename(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedString(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedString(index,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetRelatedStringCrLf(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRelatedStringCrLf(index,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetReplacePattern(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReplacePattern(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetReplaceString(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReplaceString(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetReplaceString2(Platform::String ^pattern)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReplaceString2(pattern ? pattern->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetReport(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getReport(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Cert ^Email::GetSignedByCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSignedByCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
CertChain ^Email::GetSignedByCertChain(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CertChain
	// cppType = CkCertChain *
	CkCertChainW *pRetObj = m_impl->GetSignedByCertChain();
	if (!pRetObj) return nullptr;
	Chilkat::CertChain ^pCertChain = ref new Chilkat::CertChain();
	pCertChain->m_impl = pRetObj;
	return pCertChain;
    }
Cert ^Email::GetSigningCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSigningCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
Platform::String ^Email::GetTo(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTo(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetToAddr(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getToAddr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetToName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getToName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::GetXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Email::HasHeaderMatching(Platform::String ^fieldName, Platform::String ^valuePattern, Boolean caseInsensitive)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasHeaderMatching(fieldName ? fieldName->Data() : L"",valuePattern ? valuePattern->Data() : L"",caseInsensitive);
    }
Boolean Email::HasHtmlBody(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasHtmlBody();
    }
Boolean Email::HasPlainTextBody(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasPlainTextBody();
    }
Boolean Email::IsMultipartReport(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMultipartReport();
    }
Boolean Email::LoadEml(Platform::String ^mimePath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadEml(mimePath ? mimePath->Data() : L"");
    }
Boolean Email::LoadXml(Platform::String ^xmlPath)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXml(xmlPath ? xmlPath->Data() : L"");
    }
Boolean Email::LoadXmlString(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadXmlString(xmlStr ? xmlStr->Data() : L"");
    }
Platform::String ^Email::QEncodeBytes(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (inData != nullptr) { v0 = to_vector(inData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->qEncodeBytes(db0,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Email::QEncodeString(Platform::String ^str, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->qEncodeString(str ? str->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
void Email::RemoveAttachedMessage(int idx)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveAttachedMessage(idx);
    }
void Email::RemoveAttachedMessages(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveAttachedMessages();
    }
void Email::RemoveAttachmentPaths(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveAttachmentPaths();
    }
void Email::RemoveHeaderField(Platform::String ^fieldName)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveHeaderField(fieldName ? fieldName->Data() : L"");
    }
void Email::RemoveHtmlAlternative(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveHtmlAlternative();
    }
void Email::RemovePlainTextAlternative(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemovePlainTextAlternative();
    }
Boolean Email::SaveAllAttachments(Platform::String ^directory)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveAllAttachments(directory ? directory->Data() : L"");
    }
Boolean Email::SaveAttachedFile(int index, Platform::String ^directory)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveAttachedFile(index,directory ? directory->Data() : L"");
    }
Boolean Email::SaveEml(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveEml(path ? path->Data() : L"");
    }
Boolean Email::SaveRelatedItem(int index, Platform::String ^directory)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveRelatedItem(index,directory ? directory->Data() : L"");
    }
Boolean Email::SaveXml(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveXml(path ? path->Data() : L"");
    }
Boolean Email::SetAttachmentCharset(int index, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetAttachmentCharset(index,charset ? charset->Data() : L"");
    }
Boolean Email::SetAttachmentDisposition(int index, Platform::String ^disposition)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetAttachmentDisposition(index,disposition ? disposition->Data() : L"");
    }
Boolean Email::SetAttachmentFilename(int index, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetAttachmentFilename(index,path ? path->Data() : L"");
    }
Boolean Email::SetBinaryBody(Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Platform::String ^disposition, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (byteData != nullptr) { v0 = to_vector(byteData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetBinaryBody(db0,contentType ? contentType->Data() : L"",disposition ? disposition->Data() : L"",filename ? filename->Data() : L"");
    }
Boolean Email::SetDt(Chilkat::CkDateTime ^dt)
    {
	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDateTimeW* pObj0 = dt->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetDt(*pObj0);
    }
void Email::SetEdifactBody(Platform::String ^message, Platform::String ^name, Platform::String ^filename, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetEdifactBody(message ? message->Data() : L"",name ? name->Data() : L"",filename ? filename->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean Email::SetEncryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetEncryptCert(*pObj0);
    }
Boolean Email::SetFromMimeBytes(Windows::Foundation::Collections::IVector<uint8>^mimeBytes)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeBytes != nullptr) { v0 = to_vector(mimeBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromMimeBytes(db0);
    }
Boolean Email::SetFromMimeBytes2(Windows::Foundation::Collections::IVector<uint8>^mimeBytes, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (mimeBytes != nullptr) { v0 = to_vector(mimeBytes);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromMimeBytes2(db0,charset ? charset->Data() : L"");
    }
Boolean Email::SetFromMimeText(Platform::String ^mimeText)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromMimeText(mimeText ? mimeText->Data() : L"");
    }
Boolean Email::SetFromXmlText(Platform::String ^xmlStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFromXmlText(xmlStr ? xmlStr->Data() : L"");
    }
void Email::SetHtmlBody(Platform::String ^html)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetHtmlBody(html ? html->Data() : L"");
    }
Boolean Email::SetMbHtmlBody(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetMbHtmlBody(charset ? charset->Data() : L"",db1);
    }
Boolean Email::SetMbPlainTextBody(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (inData != nullptr) { v1 = to_vector(inData);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetMbPlainTextBody(charset ? charset->Data() : L"",db1);
    }
Boolean Email::SetRelatedFilename(int index, Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetRelatedFilename(index,path ? path->Data() : L"");
    }
Boolean Email::SetReplacePattern(Platform::String ^pattern, Platform::String ^replaceString)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetReplacePattern(pattern ? pattern->Data() : L"",replaceString ? replaceString->Data() : L"");
    }
Boolean Email::SetSigningCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetSigningCert(*pObj0);
    }
Boolean Email::SetSigningCert2(Cert ^cert, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetSigningCert2(*pObj0,*pObj1);
    }
void Email::SetTextBody(Platform::String ^bodyText, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetTextBody(bodyText ? bodyText->Data() : L"",contentType ? contentType->Data() : L"");
    }
Boolean Email::UidlEquals(Email ^e)
    {
	if (m_impl == nullptr) { return false; }
	if (e == nullptr) { return false; }
	CkEmailW* pObj0 = e->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UidlEquals(*pObj0);
    }
void Email::UnSpamify(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UnSpamify();
    }
Boolean Email::UnpackHtml(Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubdir)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnpackHtml(unpackDir ? unpackDir->Data() : L"",htmlFilename ? htmlFilename->Data() : L"",partsSubdir ? partsSubdir->Data() : L"");
    }
Boolean Email::UnzipAttachments(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnzipAttachments();
    }
Boolean Email::UseCertVault(XmlCertVault ^vault)
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
Boolean Email::ZipAttachments(Platform::String ^zipFilename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ZipAttachments(zipFilename ? zipFilename->Data() : L"");
    }




