
// This source file is generated.

#include "pch.h"
#include "MailMan.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMailManW.h"
		
#include "include/CkEmailBundleW.h"
#include "include/CkEmailW.h"
#include "include/CkStringArrayW.h"
#include "include/CkCertW.h"
#include "include/CkPrivateKeyW.h"
#include "include/CkSshKeyW.h"
#include "include/CkXmlCertVaultW.h"
#include "include/CkSshW.h"
#include "include/CkSocketW.h"
#include "EmailBundle.h"
#include "Email.h"
#include "StringArray.h"
#include "Cert.h"
#include "PrivateKey.h"
#include "SshKey.h"
#include "XmlCertVault.h"
#include "Ssh.h"
#include "Socket.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::MailMan::~MailMan(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::MailMan::MailMan(void) 
{
    m_impl = new CkMailManW();
}

//Chilkat::MailMan::MailMan(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMailManW *)x;
//    if (!m_impl) m_impl = new CkMailManW();
//    }
//    
//Platform::IntPtr Chilkat::MailMan::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::MailMan::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::MailMan::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::MailMan::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::MailMan::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::MailMan::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::MailMan::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::MailMan::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::MailMan::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::MailMan::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
Boolean Chilkat::MailMan::AllOrNone::get()
    {
    return m_impl ? m_impl->get_AllOrNone() : false;
    }
void Chilkat::MailMan::AllOrNone::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AllOrNone(newVal);
    }
Boolean Chilkat::MailMan::AutoFix::get()
    {
    return m_impl ? m_impl->get_AutoFix() : false;
    }
void Chilkat::MailMan::AutoFix::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoFix(newVal);
    }
Boolean Chilkat::MailMan::AutoGenMessageId::get()
    {
    return m_impl ? m_impl->get_AutoGenMessageId() : false;
    }
void Chilkat::MailMan::AutoGenMessageId::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoGenMessageId(newVal);
    }
Boolean Chilkat::MailMan::AutoSmtpRset::get()
    {
    return m_impl ? m_impl->get_AutoSmtpRset() : false;
    }
void Chilkat::MailMan::AutoSmtpRset::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoSmtpRset(newVal);
    }
Boolean Chilkat::MailMan::AutoUnwrapSecurity::get()
    {
    return m_impl ? m_impl->get_AutoUnwrapSecurity() : false;
    }
void Chilkat::MailMan::AutoUnwrapSecurity::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoUnwrapSecurity(newVal);
    }
String ^Chilkat::MailMan::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::MailMan::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::ConnectFailReason::get()
    {
    return m_impl ? m_impl->get_ConnectFailReason() : 0;
    }
int Chilkat::MailMan::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::MailMan::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
String ^Chilkat::MailMan::DsnEnvid::get()
    {
    return ref new String(m_impl ? m_impl->dsnEnvid() : L"");
    }
void Chilkat::MailMan::DsnEnvid::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DsnEnvid(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::DsnNotify::get()
    {
    return ref new String(m_impl ? m_impl->dsnNotify() : L"");
    }
void Chilkat::MailMan::DsnNotify::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DsnNotify(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::DsnRet::get()
    {
    return ref new String(m_impl ? m_impl->dsnRet() : L"");
    }
void Chilkat::MailMan::DsnRet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DsnRet(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::EmbedCertChain::get()
    {
    return m_impl ? m_impl->get_EmbedCertChain() : false;
    }
void Chilkat::MailMan::EmbedCertChain::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_EmbedCertChain(newVal);
    }
String ^Chilkat::MailMan::Filter::get()
    {
    return ref new String(m_impl ? m_impl->filter() : L"");
    }
void Chilkat::MailMan::Filter::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Filter(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::MailMan::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::MailMan::HeloHostname::get()
    {
    return ref new String(m_impl ? m_impl->heloHostname() : L"");
    }
void Chilkat::MailMan::HeloHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HeloHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::MailMan::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::MailMan::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::MailMan::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::MailMan::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::MailMan::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::MailMan::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::MailMan::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::ImmediateDelete::get()
    {
    return m_impl ? m_impl->get_ImmediateDelete() : false;
    }
void Chilkat::MailMan::ImmediateDelete::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ImmediateDelete(newVal);
    }
Boolean Chilkat::MailMan::IncludeRootCert::get()
    {
    return m_impl ? m_impl->get_IncludeRootCert() : false;
    }
void Chilkat::MailMan::IncludeRootCert::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_IncludeRootCert(newVal);
    }
Boolean Chilkat::MailMan::IsPop3Connected::get()
    {
    return m_impl ? m_impl->get_IsPop3Connected() : false;
    }
Boolean Chilkat::MailMan::IsSmtpConnected::get()
    {
    return m_impl ? m_impl->get_IsSmtpConnected() : false;
    }
String ^Chilkat::MailMan::LastSendQFilename::get()
    {
    return ref new String(m_impl ? m_impl->lastSendQFilename() : L"");
    }
int Chilkat::MailMan::LastSmtpStatus::get()
    {
    return m_impl ? m_impl->get_LastSmtpStatus() : 0;
    }
String ^Chilkat::MailMan::LogMailReceivedFilename::get()
    {
    return ref new String(m_impl ? m_impl->logMailReceivedFilename() : L"");
    }
void Chilkat::MailMan::LogMailReceivedFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LogMailReceivedFilename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::LogMailSentFilename::get()
    {
    return ref new String(m_impl ? m_impl->logMailSentFilename() : L"");
    }
void Chilkat::MailMan::LogMailSentFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_LogMailSentFilename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::MailHost::get()
    {
    return ref new String(m_impl ? m_impl->mailHost() : L"");
    }
void Chilkat::MailMan::MailHost::set(String ^newVal)
    {
        if (m_impl) m_impl->put_MailHost(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::MailPort::get()
    {
    return m_impl ? m_impl->get_MailPort() : 0;
    }
void Chilkat::MailMan::MailPort::set(int newVal)
    {
        if (m_impl) m_impl->put_MailPort(newVal);
    }
int Chilkat::MailMan::MaxCount::get()
    {
    return m_impl ? m_impl->get_MaxCount() : 0;
    }
void Chilkat::MailMan::MaxCount::set(int newVal)
    {
        if (m_impl) m_impl->put_MaxCount(newVal);
    }
String ^Chilkat::MailMan::OAuth2AccessToken::get()
    {
    return ref new String(m_impl ? m_impl->oAuth2AccessToken() : L"");
    }
void Chilkat::MailMan::OAuth2AccessToken::set(String ^newVal)
    {
        if (m_impl) m_impl->put_OAuth2AccessToken(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::OpaqueSigning::get()
    {
    return m_impl ? m_impl->get_OpaqueSigning() : false;
    }
void Chilkat::MailMan::OpaqueSigning::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_OpaqueSigning(newVal);
    }
String ^Chilkat::MailMan::P7mEncryptAttachFilename::get()
    {
    return ref new String(m_impl ? m_impl->p7mEncryptAttachFilename() : L"");
    }
void Chilkat::MailMan::P7mEncryptAttachFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_P7mEncryptAttachFilename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::P7mSigAttachFilename::get()
    {
    return ref new String(m_impl ? m_impl->p7mSigAttachFilename() : L"");
    }
void Chilkat::MailMan::P7mSigAttachFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_P7mSigAttachFilename(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::P7sSigAttachFilename::get()
    {
    return ref new String(m_impl ? m_impl->p7sSigAttachFilename() : L"");
    }
void Chilkat::MailMan::P7sSigAttachFilename::set(String ^newVal)
    {
        if (m_impl) m_impl->put_P7sSigAttachFilename(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::MailMan::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
Boolean Chilkat::MailMan::Pop3SPA::get()
    {
    return m_impl ? m_impl->get_Pop3SPA() : false;
    }
void Chilkat::MailMan::Pop3SPA::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Pop3SPA(newVal);
    }
int Chilkat::MailMan::Pop3SessionId::get()
    {
    return m_impl ? m_impl->get_Pop3SessionId() : 0;
    }
String ^Chilkat::MailMan::Pop3SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->pop3SessionLog() : L"");
    }
Boolean Chilkat::MailMan::Pop3SslServerCertVerified::get()
    {
    return m_impl ? m_impl->get_Pop3SslServerCertVerified() : false;
    }
Boolean Chilkat::MailMan::Pop3Stls::get()
    {
    return m_impl ? m_impl->get_Pop3Stls() : false;
    }
void Chilkat::MailMan::Pop3Stls::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Pop3Stls(newVal);
    }
String ^Chilkat::MailMan::PopPassword::get()
    {
    return ref new String(m_impl ? m_impl->popPassword() : L"");
    }
void Chilkat::MailMan::PopPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PopPassword(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::PopPasswordBase64::get()
    {
    return ref new String(m_impl ? m_impl->popPasswordBase64() : L"");
    }
void Chilkat::MailMan::PopPasswordBase64::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PopPasswordBase64(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::PopSsl::get()
    {
    return m_impl ? m_impl->get_PopSsl() : false;
    }
void Chilkat::MailMan::PopSsl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PopSsl(newVal);
    }
String ^Chilkat::MailMan::PopUsername::get()
    {
    return ref new String(m_impl ? m_impl->popUsername() : L"");
    }
void Chilkat::MailMan::PopUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PopUsername(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::MailMan::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
int Chilkat::MailMan::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::MailMan::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
Boolean Chilkat::MailMan::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::MailMan::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
Boolean Chilkat::MailMan::ResetDateOnLoad::get()
    {
    return m_impl ? m_impl->get_ResetDateOnLoad() : false;
    }
void Chilkat::MailMan::ResetDateOnLoad::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_ResetDateOnLoad(newVal);
    }
int Chilkat::MailMan::SendBufferSize::get()
    {
    return m_impl ? m_impl->get_SendBufferSize() : 0;
    }
void Chilkat::MailMan::SendBufferSize::set(int newVal)
    {
        if (m_impl) m_impl->put_SendBufferSize(newVal);
    }
Boolean Chilkat::MailMan::SendIndividual::get()
    {
    return m_impl ? m_impl->get_SendIndividual() : false;
    }
void Chilkat::MailMan::SendIndividual::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SendIndividual(newVal);
    }
int Chilkat::MailMan::SizeLimit::get()
    {
    return m_impl ? m_impl->get_SizeLimit() : 0;
    }
void Chilkat::MailMan::SizeLimit::set(int newVal)
    {
        if (m_impl) m_impl->put_SizeLimit(newVal);
    }
String ^Chilkat::MailMan::SmtpAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->smtpAuthMethod() : L"");
    }
void Chilkat::MailMan::SmtpAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SmtpAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::SmtpFailReason::get()
    {
    return ref new String(m_impl ? m_impl->smtpFailReason() : L"");
    }
String ^Chilkat::MailMan::SmtpHost::get()
    {
    return ref new String(m_impl ? m_impl->smtpHost() : L"");
    }
void Chilkat::MailMan::SmtpHost::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SmtpHost(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::SmtpLoginDomain::get()
    {
    return ref new String(m_impl ? m_impl->smtpLoginDomain() : L"");
    }
void Chilkat::MailMan::SmtpLoginDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SmtpLoginDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::SmtpPassword::get()
    {
    return ref new String(m_impl ? m_impl->smtpPassword() : L"");
    }
void Chilkat::MailMan::SmtpPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SmtpPassword(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::SmtpPipelining::get()
    {
    return m_impl ? m_impl->get_SmtpPipelining() : false;
    }
void Chilkat::MailMan::SmtpPipelining::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SmtpPipelining(newVal);
    }
int Chilkat::MailMan::SmtpPort::get()
    {
    return m_impl ? m_impl->get_SmtpPort() : 0;
    }
void Chilkat::MailMan::SmtpPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SmtpPort(newVal);
    }
String ^Chilkat::MailMan::SmtpSessionLog::get()
    {
    return ref new String(m_impl ? m_impl->smtpSessionLog() : L"");
    }
Boolean Chilkat::MailMan::SmtpSsl::get()
    {
    return m_impl ? m_impl->get_SmtpSsl() : false;
    }
void Chilkat::MailMan::SmtpSsl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SmtpSsl(newVal);
    }
Boolean Chilkat::MailMan::SmtpSslServerCertVerified::get()
    {
    return m_impl ? m_impl->get_SmtpSslServerCertVerified() : false;
    }
String ^Chilkat::MailMan::SmtpUsername::get()
    {
    return ref new String(m_impl ? m_impl->smtpUsername() : L"");
    }
void Chilkat::MailMan::SmtpUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SmtpUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::MailMan::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::MailMan::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::MailMan::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::MailMan::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::MailMan::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::MailMan::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::MailMan::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::MailMan::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::MailMan::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::MailMan::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::MailMan::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
String ^Chilkat::MailMan::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::MailMan::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::MailMan::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::MailMan::StartTLS::get()
    {
    return m_impl ? m_impl->get_StartTLS() : false;
    }
void Chilkat::MailMan::StartTLS::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_StartTLS(newVal);
    }
String ^Chilkat::MailMan::TlsCipherSuite::get()
    {
    return ref new String(m_impl ? m_impl->tlsCipherSuite() : L"");
    }
String ^Chilkat::MailMan::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::MailMan::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::MailMan::TlsVersion::get()
    {
    return ref new String(m_impl ? m_impl->tlsVersion() : L"");
    }
Boolean Chilkat::MailMan::UseApop::get()
    {
    return m_impl ? m_impl->get_UseApop() : false;
    }
void Chilkat::MailMan::UseApop::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseApop(newVal);
    }


Boolean MailMan::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean MailMan::AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (pfxData != nullptr) { v0 = to_vector(pfxData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceData(db0,password ? password->Data() : L"");
    }
Boolean MailMan::AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AddPfxSourceFile(pfxFilePath ? pfxFilePath->Data() : L"",password ? password->Data() : L"");
    }
IAsyncOperation<int>^ MailMan::CheckMailAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->CheckMail();

});
    }
void MailMan::ClearBadEmailAddresses(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearBadEmailAddresses();
    }
void MailMan::ClearPop3SessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearPop3SessionLog();
    }
void MailMan::ClearSmtpSessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSmtpSessionLog();
    }
IAsyncOperation<Boolean>^ MailMan::CloseSmtpConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CloseSmtpConnection();

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::CopyMailAsync(void)
    {
return create_async([this]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->CopyMail();
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<Boolean>^ MailMan::DeleteBundleAsync(EmailBundle ^bundle)
    {
return create_async([this, bundle]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (bundle == nullptr) { return false; }
	CkEmailBundleW* pObj0 = bundle->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteBundle(*pObj0);

});
    }
IAsyncOperation<Boolean>^ MailMan::DeleteByMsgnumAsync(int msgnum)
    {
return create_async([this, msgnum]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteByMsgnum(msgnum);

});
    }
IAsyncOperation<Boolean>^ MailMan::DeleteByUidlAsync(Platform::String ^uidl)
    {
return create_async([this, uidl]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteByUidl(uidl ? uidl->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ MailMan::DeleteEmailAsync(Email ^email)
    {
return create_async([this, email]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteEmail(*pObj0);

});
    }
IAsyncOperation<Boolean>^ MailMan::DeleteMultipleAsync(StringArray ^uidlArray)
    {
return create_async([this, uidlArray]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (uidlArray == nullptr) { return false; }
	CkStringArrayW* pObj0 = uidlArray->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteMultiple(*pObj0);

});
    }
IAsyncOperation<Email ^>^ MailMan::FetchByMsgnumAsync(int msgnum)
    {
return create_async([this, msgnum]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchByMsgnum(msgnum);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<Email ^>^ MailMan::FetchEmailAsync(Platform::String ^uidl)
    {
return create_async([this, uidl]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchEmail(uidl ? uidl->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MailMan::FetchMimeAsync(Platform::String ^uidl)
    {
return create_async([this, uidl]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->FetchMime(uidl ? uidl->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MailMan::FetchMimeByMsgnumAsync(int msgnum)
    {
return create_async([this, msgnum]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->FetchMimeByMsgnum(msgnum,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::FetchMultipleAsync(StringArray ^uidlArray)
    {
return create_async([this, uidlArray]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (uidlArray == nullptr) { return nullptr; }
	CkStringArrayW* pObj0 = uidlArray->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchMultiple(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::FetchMultipleHeadersAsync(StringArray ^uidlArray, int numBodyLines)
    {
return create_async([this, uidlArray, numBodyLines]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (uidlArray == nullptr) { return nullptr; }
	CkStringArrayW* pObj0 = uidlArray->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->FetchMultipleHeaders(*pObj0,numBodyLines);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<StringArray ^>^ MailMan::FetchMultipleMimeAsync(StringArray ^uidlArray)
    {
return create_async([this, uidlArray]() -> StringArray ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (uidlArray == nullptr) { return nullptr; }
	CkStringArrayW* pObj0 = uidlArray->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->FetchMultipleMime(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;

});
    }
IAsyncOperation<Email ^>^ MailMan::FetchSingleHeaderAsync(int numBodyLines, int index)
    {
return create_async([this, numBodyLines, index]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchSingleHeader(numBodyLines,index);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<Email ^>^ MailMan::FetchSingleHeaderByUidlAsync(int numBodyLines, Platform::String ^uidl)
    {
return create_async([this, numBodyLines, uidl]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->FetchSingleHeaderByUidl(numBodyLines,uidl ? uidl->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::GetAllHeadersAsync(int numBodyLines)
    {
return create_async([this, numBodyLines]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->GetAllHeaders(numBodyLines);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
StringArray ^MailMan::GetBadEmailAddrs(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetBadEmailAddrs();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
IAsyncOperation<Email ^>^ MailMan::GetFullEmailAsync(Email ^email)
    {
return create_async([this, email]() -> Email ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->GetFullEmail(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::GetHeadersAsync(int numBodyLines, int fromIndex, int toIndex)
    {
return create_async([this, numBodyLines, fromIndex, toIndex]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->GetHeaders(numBodyLines,fromIndex,toIndex);
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<int>^ MailMan::GetMailboxCountAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetMailboxCount();

});
    }
IAsyncOperation<Platform::String ^>^ MailMan::GetMailboxInfoXmlAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getMailboxInfoXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<uint32>^ MailMan::GetMailboxSizeAsync(void)
    {
return create_async([this]() -> uint32
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return 0; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = unsigned long
	// cppType = unsigned long
	return m_impl->GetMailboxSize();

});
    }
Cert ^MailMan::GetPop3SslServerCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetPop3SslServerCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
StringArray ^MailMan::GetSentToEmailAddrs(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetSentToEmailAddrs();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;
    }
IAsyncOperation<int>^ MailMan::GetSizeByUidlAsync(Platform::String ^uidl)
    {
return create_async([this, uidl]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetSizeByUidl(uidl ? uidl->Data() : L"");

});
    }
Cert ^MailMan::GetSmtpSslServerCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSmtpSslServerCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
IAsyncOperation<StringArray ^>^ MailMan::GetUidlsAsync(void)
    {
return create_async([this]() -> StringArray ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->GetUidls();
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;

});
    }
IAsyncOperation<Boolean>^ MailMan::IsSmtpDsnCapableAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsSmtpDsnCapable();

});
    }
Boolean MailMan::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
Email ^MailMan::LoadEml(Platform::String ^emlFilename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->LoadEml(emlFilename ? emlFilename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
EmailBundle ^MailMan::LoadMbx(Platform::String ^mbxFileName)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->LoadMbx(mbxFileName ? mbxFileName->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;
    }
Email ^MailMan::LoadMime(Platform::String ^mimeText)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->LoadMime(mimeText ? mimeText->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^MailMan::LoadXmlEmail(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->LoadXmlEmail(filename ? filename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
Email ^MailMan::LoadXmlEmailString(Platform::String ^xmlString)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Email
	// cppType = CkEmail *
	CkEmailW *pRetObj = m_impl->LoadXmlEmailString(xmlString ? xmlString->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::Email ^pEmail = ref new Chilkat::Email();
	pEmail->m_impl = pRetObj;
	return pEmail;
    }
EmailBundle ^MailMan::LoadXmlFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->LoadXmlFile(filename ? filename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;
    }
EmailBundle ^MailMan::LoadXmlString(Platform::String ^xmlString)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->LoadXmlString(xmlString ? xmlString->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;
    }
IAsyncOperation<Boolean>^ MailMan::OpenSmtpConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->OpenSmtpConnection();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3AuthenticateAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3Authenticate();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3BeginSessionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3BeginSession();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3ConnectAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3Connect();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3EndSessionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3EndSession();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3EndSessionNoQuitAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3EndSessionNoQuit();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3NoopAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3Noop();

});
    }
IAsyncOperation<Boolean>^ MailMan::Pop3ResetAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Pop3Reset();

});
    }
IAsyncOperation<Platform::String ^>^ MailMan::Pop3SendRawCommandAsync(Platform::String ^command, Platform::String ^charset)
    {
return create_async([this, command, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->pop3SendRawCommand(command ? command->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ MailMan::QuickSendAsync(Platform::String ^fromAddr, Platform::String ^toAddr, Platform::String ^subject, Platform::String ^body, Platform::String ^smtpServer)
    {
return create_async([this, fromAddr, toAddr, subject, body, smtpServer]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->QuickSend(fromAddr ? fromAddr->Data() : L"",toAddr ? toAddr->Data() : L"",subject ? subject->Data() : L"",body ? body->Data() : L"",smtpServer ? smtpServer->Data() : L"");

});
    }
Platform::String ^MailMan::RenderToMime(Email ^email)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->renderToMime(*pObj0);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^MailMan::RenderToMimeBytes(Email ^email)
    {
	if (m_impl == nullptr) { return nullptr; }
	if (email == nullptr) { return nullptr; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->RenderToMimeBytes(*pObj0,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
IAsyncOperation<Boolean>^ MailMan::SendBundleAsync(EmailBundle ^bundle)
    {
return create_async([this, bundle]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (bundle == nullptr) { return false; }
	CkEmailBundleW* pObj0 = bundle->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendBundle(*pObj0);

});
    }
IAsyncOperation<Boolean>^ MailMan::SendEmailAsync(Email ^email)
    {
return create_async([this, email]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendEmail(*pObj0);

});
    }
IAsyncOperation<Boolean>^ MailMan::SendMimeAsync(Platform::String ^from, Platform::String ^recipients, Platform::String ^mimeText)
    {
return create_async([this, from, recipients, mimeText]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendMime(from ? from->Data() : L"",recipients ? recipients->Data() : L"",mimeText ? mimeText->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ MailMan::SendMimeBytesAsync(Platform::String ^from, Platform::String ^recipients, Windows::Foundation::Collections::IVector<uint8>^mimeData)
    {
return create_async([this, from, recipients, mimeData]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (mimeData != nullptr) { v2 = to_vector(mimeData);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendMimeBytes(from ? from->Data() : L"",recipients ? recipients->Data() : L"",db2);

});
    }
IAsyncOperation<Boolean>^ MailMan::SendMimeToListAsync(Platform::String ^from, Platform::String ^distListFile, Platform::String ^mimeText)
    {
return create_async([this, from, distListFile, mimeText]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendMimeToList(from ? from->Data() : L"",distListFile ? distListFile->Data() : L"",mimeText ? mimeText->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ MailMan::SendToDistributionListAsync(Email ^email, StringArray ^sa)
    {
return create_async([this, email, sa]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	if (sa == nullptr) { return false; }
	CkStringArrayW* pObj1 = sa->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SendToDistributionList(*pObj0,*pObj1);

});
    }
Boolean MailMan::SetDecryptCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert(*pObj0);
    }
Boolean MailMan::SetDecryptCert2(Cert ^cert, PrivateKey ^key)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	if (key == nullptr) { return false; }
	CkPrivateKeyW* pObj1 = key->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetDecryptCert2(*pObj0,*pObj1);
    }
Boolean MailMan::SetSslClientCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCert(*pObj0);
    }
Boolean MailMan::SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPem(pemDataOrFilename ? pemDataOrFilename->Data() : L"",pemPassword ? pemPassword->Data() : L"");
    }
Boolean MailMan::SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPfx(pfxFilename ? pfxFilename->Data() : L"",pfxPassword ? pfxPassword->Data() : L"");
    }
IAsyncOperation<Boolean>^ MailMan::SmtpAuthenticateAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SmtpAuthenticate();

});
    }
IAsyncOperation<Boolean>^ MailMan::SmtpConnectAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SmtpConnect();

});
    }
IAsyncOperation<Boolean>^ MailMan::SmtpNoopAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SmtpNoop();

});
    }
IAsyncOperation<Boolean>^ MailMan::SmtpResetAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SmtpReset();

});
    }
IAsyncOperation<Platform::String ^>^ MailMan::SmtpSendRawCommandAsync(Platform::String ^command, Platform::String ^charset, Boolean bEncodeBase64)
    {
return create_async([this, command, charset, bEncodeBase64]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->smtpSendRawCommand(command ? command->Data() : L"",charset ? charset->Data() : L"",bEncodeBase64);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ MailMan::SshAuthenticatePkAsync(Platform::String ^sshLogin, SshKey ^privateKey)
    {
return create_async([this, sshLogin, privateKey]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (privateKey == nullptr) { return false; }
	CkSshKeyW* pObj1 = privateKey->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePk(sshLogin ? sshLogin->Data() : L"",*pObj1);

});
    }
IAsyncOperation<Boolean>^ MailMan::SshAuthenticatePwAsync(Platform::String ^sshLogin, Platform::String ^sshPassword)
    {
return create_async([this, sshLogin, sshPassword]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshAuthenticatePw(sshLogin ? sshLogin->Data() : L"",sshPassword ? sshPassword->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ MailMan::SshCloseTunnelAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshCloseTunnel();

});
    }
IAsyncOperation<Boolean>^ MailMan::SshOpenTunnelAsync(Platform::String ^sshHostname, int sshPort)
    {
return create_async([this, sshHostname, sshPort]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SshOpenTunnel(sshHostname ? sshHostname->Data() : L"",sshPort);

});
    }
IAsyncOperation<EmailBundle ^>^ MailMan::TransferMailAsync(void)
    {
return create_async([this]() -> EmailBundle ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = EmailBundle
	// cppType = CkEmailBundle *
	CkEmailBundleW *pRetObj = m_impl->TransferMail();
	if (!pRetObj) return nullptr;
	Chilkat::EmailBundle ^pEmailBundle = ref new Chilkat::EmailBundle();
	pEmailBundle->m_impl = pRetObj;
	return pEmailBundle;

});
    }
IAsyncOperation<StringArray ^>^ MailMan::TransferMultipleMimeAsync(StringArray ^uidlArray)
    {
return create_async([this, uidlArray]() -> StringArray ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	if (uidlArray == nullptr) { return nullptr; }
	CkStringArrayW* pObj0 = uidlArray->m_impl;
	 if (!pObj0) { return nullptr; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = StringArray
	// cppType = CkStringArray *
	CkStringArrayW *pRetObj = m_impl->TransferMultipleMime(*pObj0);
	if (!pRetObj) return nullptr;
	Chilkat::StringArray ^pStringArray = ref new Chilkat::StringArray();
	pStringArray->m_impl = pRetObj;
	return pStringArray;

});
    }
Boolean MailMan::UnlockComponent(Platform::String ^code)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(code ? code->Data() : L"");
    }
Boolean MailMan::UseCertVault(XmlCertVault ^vault)
    {
	if (m_impl == nullptr) { return false; }
	if (vault == nullptr) { return false; }
	CkXmlCertVaultW* pObj0 = vault->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseCertVault(*pObj0);
    }
Boolean MailMan::UseSsh(Ssh ^ssh)
    {
	if (m_impl == nullptr) { return false; }
	if (ssh == nullptr) { return false; }
	CkSshW* pObj0 = ssh->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSsh(*pObj0);
    }
Boolean MailMan::UseSshTunnel(Socket ^tunnel)
    {
	if (m_impl == nullptr) { return false; }
	if (tunnel == nullptr) { return false; }
	CkSocketW* pObj0 = tunnel->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UseSshTunnel(*pObj0);
    }
IAsyncOperation<Boolean>^ MailMan::VerifyPopConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyPopConnection();

});
    }
IAsyncOperation<Boolean>^ MailMan::VerifyPopLoginAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyPopLogin();

});
    }
IAsyncOperation<Boolean>^ MailMan::VerifyRecipsAsync(Email ^email, StringArray ^badAddrs)
    {
return create_async([this, email, badAddrs]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (email == nullptr) { return false; }
	CkEmailW* pObj0 = email->m_impl;
	 if (!pObj0) { return false; }
	if (badAddrs == nullptr) { return false; }
	CkStringArrayW* pObj1 = badAddrs->m_impl;
	 if (!pObj1) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifyRecips(*pObj0,*pObj1);

});
    }
IAsyncOperation<Boolean>^ MailMan::VerifySmtpConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifySmtpConnection();

});
    }
IAsyncOperation<Boolean>^ MailMan::VerifySmtpLoginAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxMailManProgress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->VerifySmtpLogin();

});
    }




