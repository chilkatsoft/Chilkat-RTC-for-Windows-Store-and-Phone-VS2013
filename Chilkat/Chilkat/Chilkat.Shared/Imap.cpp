
// This source file is generated.

#include "pch.h"
#include "Imap.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkImapW.h"
		
#include "include/CkEmailW.h"
#include "include/CkMessageSetW.h"
#include "include/CkEmailBundleW.h"
#include "include/CkStringArrayW.h"
#include "include/CkCertW.h"
#include "include/CkMailboxesW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkSshKeyW.h"
#include "include/CkXmlCertVaultW.h"
#include "include/CkSshW.h"
#include "include/CkSocketW.h"
#include "Email.h"
#include "MessageSet.h"
#include "EmailBundle.h"
#include "StringArray.h"
#include "Cert.h"
#include "Mailboxes.h"
#include "PrivateKey.h"
#include "SshKey.h"
#include "XmlCertVault.h"
#include "Ssh.h"
#include "Socket.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Imap::~Imap(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Imap::Imap(void) 
{
    m_impl = new CkImapW();
}

//Chilkat::Imap::Imap(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkImapW *)x;
//    if (!m_impl) m_impl = new CkImapW();
//    }
//    
//Platform::IntPtr Chilkat::Imap::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Imap::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Imap::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Imap::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Imap::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Imap::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Imap::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Imap::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Imap::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Imap::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Imap::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::Imap::AppendSeen::get()
    {
    return m_impl ? m_impl->get_AppendSeen() : false;
    }
void Chilkat::Imap::AppendSeen::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AppendSeen(newVal);
    }
int Chilkat::Imap::AppendUid::get()
    {
    return m_impl ? m_impl->get_AppendUid() : 0;
    }
String ^Chilkat::Imap::AuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->authMethod() : L"");
    }
void Chilkat::Imap::AuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::AuthzId::get()
    {
    return ref new String(m_impl ? m_impl->authzId() : L"");
    }
void Chilkat::Imap::AuthzId::set(String ^newVal)
    {
        if (m_impl) m_impl->put_AuthzId(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Imap::AutoDownloadAttachments::get()
    {
    return m_impl ? m_impl->get_AutoDownloadAttachments() : false;
    }
void Chilkat::Imap::AutoDownloadAttachments::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoDownloadAttachments(newVal);
    }
Boolean Chilkat::Imap::AutoFix::get()
    {
    return m_impl ? m_impl->get_AutoFix() : false;
    }
void Chilkat::Imap::AutoFix::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoFix(newVal);
    }
String ^Chilkat::Imap::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Imap::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::Imap::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::Imap::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
String ^Chilkat::Imap::ConnectedToHost::get()
    {
    return ref new String(m_impl ? m_impl->connectedToHost() : L"");
    }
String ^Chilkat::Imap::Domain::get()
    {
    return ref new String(m_impl ? m_impl->domain() : L"");
    }
void Chilkat::Imap::Domain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Domain(newVal ? newVal->Data() : L"");
    }
int Chilkat::Imap::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Imap::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Imap::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::Imap::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::Imap::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::Imap::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::Imap::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Imap::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::Imap::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::Imap::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::Imap::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Imap::KeepSessionLog::get()
    {
    return m_impl ? m_impl->get_KeepSessionLog() : false;
    }
void Chilkat::Imap::KeepSessionLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepSessionLog(newVal);
    }
String ^Chilkat::Imap::LastAppendedMime::get()
    {
    return ref new String(m_impl ? m_impl->lastAppendedMime() : L"");
    }
String ^Chilkat::Imap::LastCommand::get()
    {
    return ref new String(m_impl ? m_impl->lastCommand() : L"");
    }
String ^Chilkat::Imap::LastIntermediateResponse::get()
    {
    return ref new String(m_impl ? m_impl->lastIntermediateResponse() : L"");
    }
String ^Chilkat::Imap::LastResponse::get()
    {
    return ref new String(m_impl ? m_impl->lastResponse() : L"");
    }
String ^Chilkat::Imap::LastResponseCode::get()
    {
    return ref new String(m_impl ? m_impl->lastResponseCode() : L"");
    }
String ^Chilkat::Imap::LoggedInUser::get()
    {
    return ref new String(m_impl ? m_impl->loggedInUser() : L"");
    }
int Chilkat::Imap::NumMessages::get()
    {
    return m_impl ? m_impl->get_NumMessages() : 0;
    }
Boolean Chilkat::Imap::PeekMode::get()
    {
    return m_impl ? m_impl->get_PeekMode() : false;
    }
void Chilkat::Imap::PeekMode::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PeekMode(newVal);
    }
int Chilkat::Imap::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Imap::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
int Chilkat::Imap::Port::get()
    {
    return m_impl ? m_impl->get_Port() : 0;
    }
void Chilkat::Imap::Port::set(int newVal)
    {
        if (m_impl) m_impl->put_Port(newVal);
    }
Boolean Chilkat::Imap::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Imap::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
int Chilkat::Imap::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::Imap::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
Boolean Chilkat::Imap::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::Imap::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
String ^Chilkat::Imap::SearchCharset::get()
    {
    return ref new String(m_impl ? m_impl->searchCharset() : L"");
    }
void Chilkat::Imap::SearchCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SearchCharset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::SelectedMailbox::get()
    {
    return ref new String(m_impl ? m_impl->selectedMailbox() : L"");
    }
int Chilkat::Imap::SendBufferSize::get()
    {
    return m_impl ? m_impl->get_SendBufferSize() : 0;
    }
void Chilkat::Imap::SendBufferSize::set(int newVal)
    {
        if (m_impl) m_impl->put_SendBufferSize(newVal);
    }
String ^Chilkat::Imap::SeparatorChar::get()
    {
    return ref new String(m_impl ? m_impl->separatorChar() : L"");
    }
void Chilkat::Imap::SeparatorChar::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SeparatorChar(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->sessionLog() : L"");
    }
int Chilkat::Imap::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::Imap::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::Imap::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::Imap::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::Imap::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Imap::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Imap::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Imap::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Imap::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Imap::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Imap::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Imap::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Imap::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::Imap::Ssl::get()
    {
    return m_impl ? m_impl->get_Ssl() : false;
    }
void Chilkat::Imap::Ssl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Ssl(newVal);
    }
String ^Chilkat::Imap::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::Imap::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::Imap::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Imap::SslServerCertVerified::get()
    {
    return m_impl ? m_impl->get_SslServerCertVerified() : false;
    }
Boolean Chilkat::Imap::StartTls::get()
    {
    return m_impl ? m_impl->get_StartTls() : false;
    }
void Chilkat::Imap::StartTls::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StartTls(newVal);
    }
String ^Chilkat::Imap::TlsCipherSuite::get()
    {
    return ref new String(m_impl ? m_impl->tlsCipherSuite() : L"");
    }
String ^Chilkat::Imap::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::Imap::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Imap::TlsVersion::get()
    {
    return ref new String(m_impl ? m_impl->tlsVersion() : L"");
    }
int Chilkat::Imap::UidNext::get()
    {
    return m_impl ? m_impl->get_UidNext() : 0;
    }
int Chilkat::Imap::UidValidity::get()
    {
    return m_impl ? m_impl->get_UidValidity() : 0;
    }


Boolean Imap::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Imap::AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceData(db0,password ? password->Data() : L"");
    }
Boolean Imap::AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
IAsyncOperation<Boolean>^ Imap::AppendMailAsync(Platform::String ^mailbox, Email ^email)
    {
return create_async([this, mailbox, email]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj1 = email->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendMail(mailbox ? mailbox->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ Imap::AppendMimeAsync(Platform::String ^mailbox, Platform::String ^mimeText)
    {
return create_async([this, mailbox, mimeText]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendMime(mailbox ? mailbox->Data() : L"",mimeText ? mimeText->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::AppendMimeWithDateStrAsync(Platform::String ^mailbox, Platform::String ^mimeText, Platform::String ^internalDateStr)
    {
return create_async([this, mailbox, mimeText, internalDateStr]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendMimeWithDateStr(mailbox ? mailbox->Data() : L"",mimeText ? mimeText->Data() : L"",internalDateStr ? internalDateStr->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::AppendMimeWithFlagsAsync(Platform::String ^mailbox, Platform::String ^mimeText, Boolean seen, Boolean flagged, Boolean answered, Boolean draft)
    {
return create_async([this, mailbox, mimeText, seen, flagged, answered, draft]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendMimeWithFlags(mailbox ? mailbox->Data() : L"",mimeText ? mimeText->Data() : L"",seen,flagged,answered,draft);

});
    }
IAsyncOperation<Platform::String ^>^ Imap::CapabilityAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->capability();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Imap::CheckConnection(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CheckConnection();
    }
IAsyncOperation<MessageSet ^>^ Imap::CheckForNewEmailAsync(void)
    {
return create_async([this]() -> MessageSet ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = MessageSet
	// cppType = CkMessageSet *
	CkMessageSetW *pRetObj = m_impl->CheckForNewEmail();
	if (!pRetObj) return nullptr;
	Chilkat::MessageSet ^pMessageSet = ref new Chilkat::MessageSet();
	pMessageSet->m_impl = pRetObj;
	return pMessageSet;

});
    }
void Imap::ClearSessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSessionLog();
    }
IAsyncOperation<Boolean>^ Imap::CloseMailboxAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CloseMailbox(mailbox ? mailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::ConnectAsync(Platform::String ^hostname)
    {
return create_async([this, hostname]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect(hostname ? hostname->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::CopyAsync(int msgId, Boolean bUid, Platform::String ^copyToMailbox)
    {
return create_async([this, msgId, bUid, copyToMailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Copy(msgId,bUid,copyToMailbox ? copyToMailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::CopyMultipleAsync(MessageSet ^messageSet, Platform::String ^copyToMailbox)
    {
return create_async([this, messageSet, copyToMailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (messageSet == nullptr) { return false; }
	CkMessageSetW* pObj0 = messageSet->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CopyMultiple(*pObj0,copyToMailbox ? copyToMailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::CopySequenceAsync(int startSeqNum, int count, Platform::String ^copyToMailbox)
    {
return create_async([this, startSeqNum, count, copyToMailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CopySequence(startSeqNum,count,copyToMailbox ? copyToMailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::CreateMailboxAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateMailbox(mailbox ? mailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::DeleteMailboxAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteMailbox(mailbox ? mailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::DisconnectAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Disconnect();

});
    }
IAsyncOperation<Boolean>^ Imap::ExamineMailboxAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExamineMailbox(mailbox ? mailbox->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::ExpungeAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Expunge();

});
    }
IAsyncOperation<Boolean>^ Imap::ExpungeAndCloseAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ExpungeAndClose();

});
    }
IAsyncOperation<Boolean>^ Imap::FetchAttachmentAsync(Email ^email, int attachIndex, Platform::String ^saveToPath)
    {
return create_async([this, email, attachIndex, saveToPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->FetchAttachment(*pObj0,attachIndex,saveToPath ? saveToPath->Data() : L"");

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Imap::FetchAttachmentBytesAsync(Email ^email, int attachIndex)
    {
return create_async([this, email, attachIndex]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->FetchAttachmentBytes(*pObj0,attachIndex,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Imap::FetchAttachmentStringAsync(Email ^email, int attachIndex, Platform::String ^charset)
    {
return create_async([this, email, attachIndex, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchAttachmentString(*pObj0,attachIndex,charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<EmailBundle ^>^ Imap::FetchBundleAsync(MessageSet ^messageSet)
    {
return create_async([this, messageSet]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (messageSet == nullptr) { return nullptr; }
	CkMessageSetW* pObj0 = messageSet->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchBundle(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<StringArray ^>^ Imap::FetchBundleAsMimeAsync(MessageSet ^messageSet)
    {
return create_async([this, messageSet]() -> StringArray ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (messageSet == nullptr) { return nullptr; }
	CkMessageSetW* pObj0 = messageSet->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->FetchBundleAsMime(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;

});
    }
IAsyncOperation<EmailBundle ^>^ Imap::FetchChunkAsync(int startSeqNum, int count, MessageSet ^failedSet, MessageSet ^fetchedSet)
    {
return create_async([this, startSeqNum, count, failedSet, fetchedSet]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (failedSet == nullptr) { return nullptr; }
	CkMessageSetW* pObj2 = failedSet->m_impl;
	 if (!pObj2) { return nullptr; }
	if (fetchedSet == nullptr) { return nullptr; }
	CkMessageSetW* pObj3 = fetchedSet->m_impl;
	 if (!pObj3) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchChunk(startSeqNum,count,*pObj2,*pObj3);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<Platform::String ^>^ Imap::FetchFlagsAsync(int msgId, Boolean bUid)
    {
return create_async([this, msgId, bUid]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchFlags(msgId,bUid);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<EmailBundle ^>^ Imap::FetchHeadersAsync(MessageSet ^messageSet)
    {
return create_async([this, messageSet]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (messageSet == nullptr) { return nullptr; }
	CkMessageSetW* pObj0 = messageSet->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchHeaders(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<EmailBundle ^>^ Imap::FetchSequenceAsync(int startSeqNum, int numMessages)
    {
return create_async([this, startSeqNum, numMessages]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchSequence(startSeqNum,numMessages);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<StringArray ^>^ Imap::FetchSequenceAsMimeAsync(int startSeqNum, int numMessages)
    {
return create_async([this, startSeqNum, numMessages]() -> StringArray ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->FetchSequenceAsMime(startSeqNum,numMessages);
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;

});
    }
IAsyncOperation<EmailBundle ^>^ Imap::FetchSequenceHeadersAsync(int startSeqNum, int numMessages)
    {
return create_async([this, startSeqNum, numMessages]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchSequenceHeaders(startSeqNum,numMessages);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<Email ^>^ Imap::FetchSingleAsync(int msgId, Boolean bUid)
    {
return create_async([this, msgId, bUid]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchSingle(msgId,bUid);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<Platform::String ^>^ Imap::FetchSingleAsMimeAsync(int msgId, Boolean bUid)
    {
return create_async([this, msgId, bUid]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchSingleAsMime(msgId,bUid);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Email ^>^ Imap::FetchSingleHeaderAsync(int msgId, Boolean bUid)
    {
return create_async([this, msgId, bUid]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchSingleHeader(msgId,bUid);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<Platform::String ^>^ Imap::FetchSingleHeaderAsMimeAsync(int msgId, Boolean bUID)
    {
return create_async([this, msgId, bUID]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->fetchSingleHeaderAsMime(msgId,bUID);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<MessageSet ^>^ Imap::GetAllUidsAsync(void)
    {
return create_async([this]() -> MessageSet ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = MessageSet
	// cppType = CkMessageSet *
	CkMessageSetW *pRetObj = m_impl->GetAllUids();
	if (!pRetObj) return nullptr;
	Chilkat::MessageSet ^pMessageSet = ref new Chilkat::MessageSet();
	pMessageSet->m_impl = pRetObj;
	return pMessageSet;

});
    }
Platform::String ^Imap::GetMailAttachFilename(Email ^email, int attachIndex)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMailAttachFilename(*pObj0,attachIndex);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Imap::GetMailAttachSize(Email ^email, int attachIndex)
    {
	if (m_impl == nullptr) { return -1; }
	if (email == nullptr) { return -1; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetMailAttachSize(*pObj0,attachIndex);
    }
int Imap::GetMailFlag(Email ^email, Platform::String ^flagName)
    {
	if (m_impl == nullptr) { return -1; }
	if (email == nullptr) { return -1; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetMailFlag(*pObj0,flagName ? flagName->Data() : L"");
    }
int Imap::GetMailNumAttach(Email ^email)
    {
	if (m_impl == nullptr) { return -1; }
	if (email == nullptr) { return -1; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetMailNumAttach(*pObj0);
    }
int Imap::GetMailSize(Email ^email)
    {
	if (m_impl == nullptr) { return -1; }
	if (email == nullptr) { return -1; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return -1; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetMailSize(*pObj0);
    }
IAsyncOperation<Platform::String ^>^ Imap::GetMailboxStatusAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMailboxStatus(mailbox ? mailbox->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Cert ^Imap::GetSslServerCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSslServerCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
IAsyncOperation<Platform::String ^>^ Imap::IdleCheckAsync(int timeoutMs)
    {
return create_async([this, timeoutMs]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->idleCheck(timeoutMs);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Imap::IdleDoneAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IdleDone();

});
    }
IAsyncOperation<Boolean>^ Imap::IdleStartAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IdleStart();

});
    }
Boolean Imap::IsConnected(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsConnected();
    }
Boolean Imap::IsLoggedIn(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsLoggedIn();
    }
Boolean Imap::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
IAsyncOperation<Mailboxes ^>^ Imap::ListMailboxesAsync(Platform::String ^reference, Platform::String ^wildcardedMailbox)
    {
return create_async([this, reference, wildcardedMailbox]() -> Mailboxes ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Mailboxes
	// cppType = CkMailboxes *
	CkMailboxesW *pRetObj = m_impl->ListMailboxes(reference ? reference->Data() : L"",wildcardedMailbox ? wildcardedMailbox->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Mailboxes ^pMailboxes = ref new Chilkat::Mailboxes();
	pMailboxes->m_impl = pRetObj;
	return pMailboxes;

});
    }
IAsyncOperation<Mailboxes ^>^ Imap::ListSubscribedAsync(Platform::String ^reference, Platform::String ^wildcardedMailbox)
    {
return create_async([this, reference, wildcardedMailbox]() -> Mailboxes ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Mailboxes
	// cppType = CkMailboxes *
	CkMailboxesW *pRetObj = m_impl->ListSubscribed(reference ? reference->Data() : L"",wildcardedMailbox ? wildcardedMailbox->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Mailboxes ^pMailboxes = ref new Chilkat::Mailboxes();
	pMailboxes->m_impl = pRetObj;
	return pMailboxes;

});
    }
IAsyncOperation<Boolean>^ Imap::LoginAsync(Platform::String ^login, Platform::String ^password)
    {
return create_async([this, login, password]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Login(login ? login->Data() : L"",password ? password->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::LogoutAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Logout();

});
    }
IAsyncOperation<Boolean>^ Imap::NoopAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Noop();

});
    }
IAsyncOperation<Boolean>^ Imap::RefetchMailFlagsAsync(Email ^email)
    {
return create_async([this, email]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RefetchMailFlags(*pObj0);

});
    }
IAsyncOperation<Boolean>^ Imap::RenameMailboxAsync(Platform::String ^fromMailbox, Platform::String ^toMailbox)
    {
return create_async([this, fromMailbox, toMailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RenameMailbox(fromMailbox ? fromMailbox->Data() : L"",toMailbox ? toMailbox->Data() : L"");

});
    }
IAsyncOperation<MessageSet ^>^ Imap::SearchAsync(Platform::String ^criteria, Boolean bUid)
    {
return create_async([this, criteria, bUid]() -> MessageSet ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = MessageSet
	// cppType = CkMessageSet *
	CkMessageSetW *pRetObj = m_impl->Search(criteria ? criteria->Data() : L"",bUid);
	if (!pRetObj) return nullptr;
	Chilkat::MessageSet ^pMessageSet = ref new Chilkat::MessageSet();
	pMessageSet->m_impl = pRetObj;
	return pMessageSet;

});
    }
IAsyncOperation<Boolean>^ Imap::SelectMailboxAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SelectMailbox(mailbox ? mailbox->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Imap::SendRawCommandAsync(Platform::String ^cmd)
    {
return create_async([this, cmd]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->sendRawCommand(cmd ? cmd->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Imap::SendRawCommandBAsync(Platform::String ^cmd)
    {
return create_async([this, cmd]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SendRawCommandB(cmd ? cmd->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Imap::SendRawCommandCAsync(Windows::Foundation::Collections::IVector<uint8>^cmd)
    {
return create_async([this, cmd]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	CkByteData db0; std::vector<uint8> v0;
        if (cmd != nullptr) { v0 = to_vector(cmd);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CkByteData outDb;
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->SendRawCommandC(db0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
Boolean Imap::SetDecryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert(*pObj0);
    }
Boolean Imap::SetDecryptCert2(Cert ^cert, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert2(*pObj0,*pObj1);
    }
IAsyncOperation<Boolean>^ Imap::SetFlagAsync(int msgId, Boolean bUid, Platform::String ^flagName, int value)
    {
return create_async([this, msgId, bUid, flagName, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetFlag(msgId,bUid,flagName ? flagName->Data() : L"",value);

});
    }
IAsyncOperation<Boolean>^ Imap::SetFlagsAsync(MessageSet ^messageSet, Platform::String ^flagName, int value)
    {
return create_async([this, messageSet, flagName, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (messageSet == nullptr) { return false; }
	CkMessageSetW* pObj0 = messageSet->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetFlags(*pObj0,flagName ? flagName->Data() : L"",value);

});
    }
IAsyncOperation<Boolean>^ Imap::SetMailFlagAsync(Email ^email, Platform::String ^flagName, int value)
    {
return create_async([this, email, flagName, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetMailFlag(*pObj0,flagName ? flagName->Data() : L"",value);

});
    }
Boolean Imap::SetSslClientCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCert(*pObj0);
    }
Boolean Imap::SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPem(pemDataOrFilename ? pemDataOrFilename->Data() : L"",pemPassword ? pemPassword->Data() : L"");
    }
Boolean Imap::SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPfx(pfxFilename ? pfxFilename->Data() : L"",pfxPassword ? pfxPassword->Data() : L"");
    }
IAsyncOperation<Boolean>^ Imap::SshAuthenticatePkAsync(Platform::String ^sshLogin, SshKey ^privateKey)
    {
return create_async([this, sshLogin, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePk(sshLogin ? sshLogin->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ Imap::SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword)
    {
return create_async([this, sshLogin, sshPassword]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePw(sshLogin ? sshLogin->Data() : L"",sshPassword ? sshPassword->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Imap::SshCloseTunnelAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshCloseTunnel();

});
    }
IAsyncOperation<Boolean>^ Imap::SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort)
    {
return create_async([this, sshHostname, sshPort]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshOpenTunnel(sshHostname ? sshHostname->Data() : L"",sshPort);

});
    }
IAsyncOperation<Boolean>^ Imap::StoreFlagsAsync(int msgId, Boolean bUid, Platform::String ^flagNames, int value)
    {
return create_async([this, msgId, bUid, flagNames, value]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->StoreFlags(msgId,bUid,flagNames ? flagNames->Data() : L"",value);

});
    }
IAsyncOperation<Boolean>^ Imap::SubscribeAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Subscribe(mailbox ? mailbox->Data() : L"");

});
    }
Boolean Imap::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }
IAsyncOperation<Boolean>^ Imap::UnsubscribeAsync(Platform::String ^mailbox)
    {
return create_async([this, mailbox]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Unsubscribe(mailbox ? mailbox->Data() : L"");

});
    }
Boolean Imap::UseCertVault(XmlCertVault ^vault)
    {
	if (m_impl == nullptr) { return false; }
	if (vault == nullptr) { return false; }
	CkXmlCertVaultW* pObj0 = vault->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseCertVault(*pObj0);
    }
Boolean Imap::UseSsh(Ssh ^ssh)
    {
	if (m_impl == nullptr) { return false; }
	if (ssh == nullptr) { return false; }
	CkSshW* pObj0 = ssh->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSsh(*pObj0);
    }
Boolean Imap::UseSshTunnel(Socket ^tunnel)
    {
	if (m_impl == nullptr) { return false; }
	if (tunnel == nullptr) { return false; }
	CkSocketW* pObj0 = tunnel->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxImapProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSshTunnel(*pObj0);
    }




