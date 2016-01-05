
// This source file is generated.

#include "pch.h"
#include "Ftp2.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkFtp2W.h"
		
#include "include/CkCertW.h"
#include "CkDateTime.h"
#include "Cert.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Ftp2::~Ftp2(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Ftp2::Ftp2(void) 
{
    m_impl = new CkFtp2W();
}

//Chilkat::Ftp2::Ftp2(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkFtp2W *)x;
//    if (!m_impl) m_impl = new CkFtp2W();
//    }
//    
//Platform::IntPtr Chilkat::Ftp2::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Ftp2::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Ftp2::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Ftp2::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Ftp2::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Ftp2::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Ftp2::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ftp2::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Ftp2::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Ftp2::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Ftp2::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Ftp2::Account::get()
    {
    return ref new String(m_impl ? m_impl->account() : L"");
    }
void Chilkat::Ftp2::Account::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Account(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::ActivePortRangeEnd::get()
    {
    return m_impl ? m_impl->get_ActivePortRangeEnd() : 0;
    }
void Chilkat::Ftp2::ActivePortRangeEnd::set(int newVal)
    {
        if (m_impl) m_impl->put_ActivePortRangeEnd(newVal);
    }
int Chilkat::Ftp2::ActivePortRangeStart::get()
    {
    return m_impl ? m_impl->get_ActivePortRangeStart() : 0;
    }
void Chilkat::Ftp2::ActivePortRangeStart::set(int newVal)
    {
        if (m_impl) m_impl->put_ActivePortRangeStart(newVal);
    }
uint32 Chilkat::Ftp2::AllocateSize::get()
    {
    return m_impl ? m_impl->get_AllocateSize() : 0;
    }
void Chilkat::Ftp2::AllocateSize::set(uint32 newVal)
    {
        if (m_impl) m_impl->put_AllocateSize(newVal);
    }
Boolean Chilkat::Ftp2::AllowMlsd::get()
    {
    return m_impl ? m_impl->get_AllowMlsd() : false;
    }
void Chilkat::Ftp2::AllowMlsd::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AllowMlsd(newVal);
    }
Boolean Chilkat::Ftp2::AuthSsl::get()
    {
    return m_impl ? m_impl->get_AuthSsl() : false;
    }
void Chilkat::Ftp2::AuthSsl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AuthSsl(newVal);
    }
Boolean Chilkat::Ftp2::AuthTls::get()
    {
    return m_impl ? m_impl->get_AuthTls() : false;
    }
void Chilkat::Ftp2::AuthTls::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AuthTls(newVal);
    }
Boolean Chilkat::Ftp2::AutoFeat::get()
    {
    return m_impl ? m_impl->get_AutoFeat() : false;
    }
void Chilkat::Ftp2::AutoFeat::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoFeat(newVal);
    }
Boolean Chilkat::Ftp2::AutoFix::get()
    {
    return m_impl ? m_impl->get_AutoFix() : false;
    }
void Chilkat::Ftp2::AutoFix::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoFix(newVal);
    }
Boolean Chilkat::Ftp2::AutoGetSizeForProgress::get()
    {
    return m_impl ? m_impl->get_AutoGetSizeForProgress() : false;
    }
void Chilkat::Ftp2::AutoGetSizeForProgress::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoGetSizeForProgress(newVal);
    }
Boolean Chilkat::Ftp2::AutoOptsUtf8::get()
    {
    return m_impl ? m_impl->get_AutoOptsUtf8() : false;
    }
void Chilkat::Ftp2::AutoOptsUtf8::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoOptsUtf8(newVal);
    }
Boolean Chilkat::Ftp2::AutoSetUseEpsv::get()
    {
    return m_impl ? m_impl->get_AutoSetUseEpsv() : false;
    }
void Chilkat::Ftp2::AutoSetUseEpsv::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoSetUseEpsv(newVal);
    }
Boolean Chilkat::Ftp2::AutoSyst::get()
    {
    return m_impl ? m_impl->get_AutoSyst() : false;
    }
void Chilkat::Ftp2::AutoSyst::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoSyst(newVal);
    }
Boolean Chilkat::Ftp2::AutoXcrc::get()
    {
    return m_impl ? m_impl->get_AutoXcrc() : false;
    }
void Chilkat::Ftp2::AutoXcrc::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_AutoXcrc(newVal);
    }
int Chilkat::Ftp2::BandwidthThrottleDown::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleDown() : 0;
    }
void Chilkat::Ftp2::BandwidthThrottleDown::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleDown(newVal);
    }
int Chilkat::Ftp2::BandwidthThrottleUp::get()
    {
    return m_impl ? m_impl->get_BandwidthThrottleUp() : 0;
    }
void Chilkat::Ftp2::BandwidthThrottleUp::set(int newVal)
    {
        if (m_impl) m_impl->put_BandwidthThrottleUp(newVal);
    }
String ^Chilkat::Ftp2::ClientIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->clientIpAddress() : L"");
    }
void Chilkat::Ftp2::ClientIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientIpAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::CommandCharset::get()
    {
    return ref new String(m_impl ? m_impl->commandCharset() : L"");
    }
void Chilkat::Ftp2::CommandCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_CommandCharset(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::ConnectFailReason::get()
    {
    return m_impl ? m_impl->get_ConnectFailReason() : 0;
    }
int Chilkat::Ftp2::ConnectTimeout::get()
    {
    return m_impl ? m_impl->get_ConnectTimeout() : 0;
    }
void Chilkat::Ftp2::ConnectTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ConnectTimeout(newVal);
    }
Boolean Chilkat::Ftp2::ConnectVerified::get()
    {
    return m_impl ? m_impl->get_ConnectVerified() : false;
    }
int Chilkat::Ftp2::CrlfMode::get()
    {
    return m_impl ? m_impl->get_CrlfMode() : 0;
    }
void Chilkat::Ftp2::CrlfMode::set(int newVal)
    {
        if (m_impl) m_impl->put_CrlfMode(newVal);
    }
String ^Chilkat::Ftp2::DataProtection::get()
    {
    return ref new String(m_impl ? m_impl->dataProtection() : L"");
    }
void Chilkat::Ftp2::DataProtection::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DataProtection(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::DirListingCharset::get()
    {
    return ref new String(m_impl ? m_impl->dirListingCharset() : L"");
    }
void Chilkat::Ftp2::DirListingCharset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DirListingCharset(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::DownloadTransferRate::get()
    {
    return m_impl ? m_impl->get_DownloadTransferRate() : 0;
    }
String ^Chilkat::Ftp2::ForcePortIpAddress::get()
    {
    return ref new String(m_impl ? m_impl->forcePortIpAddress() : L"");
    }
void Chilkat::Ftp2::ForcePortIpAddress::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ForcePortIpAddress(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::Greeting::get()
    {
    return ref new String(m_impl ? m_impl->greeting() : L"");
    }
Boolean Chilkat::Ftp2::HasModeZ::get()
    {
    return m_impl ? m_impl->get_HasModeZ() : false;
    }
int Chilkat::Ftp2::HeartbeatMs::get()
    {
    return m_impl ? m_impl->get_HeartbeatMs() : 0;
    }
void Chilkat::Ftp2::HeartbeatMs::set(int newVal)
    {
        if (m_impl) m_impl->put_HeartbeatMs(newVal);
    }
String ^Chilkat::Ftp2::Hostname::get()
    {
    return ref new String(m_impl ? m_impl->hostname() : L"");
    }
void Chilkat::Ftp2::Hostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Hostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::HttpProxyAuthMethod::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyAuthMethod() : L"");
    }
void Chilkat::Ftp2::HttpProxyAuthMethod::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyAuthMethod(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::HttpProxyDomain::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyDomain() : L"");
    }
void Chilkat::Ftp2::HttpProxyDomain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyDomain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::HttpProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyHostname() : L"");
    }
void Chilkat::Ftp2::HttpProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::HttpProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyPassword() : L"");
    }
void Chilkat::Ftp2::HttpProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::HttpProxyPort::get()
    {
    return m_impl ? m_impl->get_HttpProxyPort() : 0;
    }
void Chilkat::Ftp2::HttpProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_HttpProxyPort(newVal);
    }
String ^Chilkat::Ftp2::HttpProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->httpProxyUsername() : L"");
    }
void Chilkat::Ftp2::HttpProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpProxyUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::IdleTimeoutMs::get()
    {
    return m_impl ? m_impl->get_IdleTimeoutMs() : 0;
    }
void Chilkat::Ftp2::IdleTimeoutMs::set(int newVal)
    {
        if (m_impl) m_impl->put_IdleTimeoutMs(newVal);
    }
Boolean Chilkat::Ftp2::KeepSessionLog::get()
    {
    return m_impl ? m_impl->get_KeepSessionLog() : false;
    }
void Chilkat::Ftp2::KeepSessionLog::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_KeepSessionLog(newVal);
    }
String ^Chilkat::Ftp2::LastReply::get()
    {
    return ref new String(m_impl ? m_impl->lastReply() : L"");
    }
String ^Chilkat::Ftp2::ListPattern::get()
    {
    return ref new String(m_impl ? m_impl->listPattern() : L"");
    }
void Chilkat::Ftp2::ListPattern::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ListPattern(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ftp2::LoginVerified::get()
    {
    return m_impl ? m_impl->get_LoginVerified() : false;
    }
Boolean Chilkat::Ftp2::PartialTransfer::get()
    {
    return m_impl ? m_impl->get_PartialTransfer() : false;
    }
Boolean Chilkat::Ftp2::Passive::get()
    {
    return m_impl ? m_impl->get_Passive() : false;
    }
void Chilkat::Ftp2::Passive::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Passive(newVal);
    }
Boolean Chilkat::Ftp2::PassiveUseHostAddr::get()
    {
    return m_impl ? m_impl->get_PassiveUseHostAddr() : false;
    }
void Chilkat::Ftp2::PassiveUseHostAddr::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PassiveUseHostAddr(newVal);
    }
String ^Chilkat::Ftp2::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
void Chilkat::Ftp2::Password::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Password(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::PercentDoneScale::get()
    {
    return m_impl ? m_impl->get_PercentDoneScale() : 0;
    }
void Chilkat::Ftp2::PercentDoneScale::set(int newVal)
    {
        if (m_impl) m_impl->put_PercentDoneScale(newVal);
    }
int Chilkat::Ftp2::Port::get()
    {
    return m_impl ? m_impl->get_Port() : 0;
    }
void Chilkat::Ftp2::Port::set(int newVal)
    {
        if (m_impl) m_impl->put_Port(newVal);
    }
Boolean Chilkat::Ftp2::PreferIpv6::get()
    {
    return m_impl ? m_impl->get_PreferIpv6() : false;
    }
void Chilkat::Ftp2::PreferIpv6::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferIpv6(newVal);
    }
Boolean Chilkat::Ftp2::PreferNlst::get()
    {
    return m_impl ? m_impl->get_PreferNlst() : false;
    }
void Chilkat::Ftp2::PreferNlst::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_PreferNlst(newVal);
    }
int Chilkat::Ftp2::ProgressMonSize::get()
    {
    return m_impl ? m_impl->get_ProgressMonSize() : 0;
    }
void Chilkat::Ftp2::ProgressMonSize::set(int newVal)
    {
        if (m_impl) m_impl->put_ProgressMonSize(newVal);
    }
int64 Chilkat::Ftp2::ProgressMonSize64::get()
    {
    return m_impl ? m_impl->get_ProgressMonSize64() : 0;
    }
void Chilkat::Ftp2::ProgressMonSize64::set(int64 newVal)
    {
        if (m_impl) m_impl->put_ProgressMonSize64(newVal);
    }
String ^Chilkat::Ftp2::ProxyHostname::get()
    {
    return ref new String(m_impl ? m_impl->proxyHostname() : L"");
    }
void Chilkat::Ftp2::ProxyHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyHostname(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::ProxyMethod::get()
    {
    return m_impl ? m_impl->get_ProxyMethod() : 0;
    }
void Chilkat::Ftp2::ProxyMethod::set(int newVal)
    {
        if (m_impl) m_impl->put_ProxyMethod(newVal);
    }
String ^Chilkat::Ftp2::ProxyPassword::get()
    {
    return ref new String(m_impl ? m_impl->proxyPassword() : L"");
    }
void Chilkat::Ftp2::ProxyPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::ProxyPort::get()
    {
    return m_impl ? m_impl->get_ProxyPort() : 0;
    }
void Chilkat::Ftp2::ProxyPort::set(int newVal)
    {
        if (m_impl) m_impl->put_ProxyPort(newVal);
    }
String ^Chilkat::Ftp2::ProxyUsername::get()
    {
    return ref new String(m_impl ? m_impl->proxyUsername() : L"");
    }
void Chilkat::Ftp2::ProxyUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ProxyUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::ReadTimeout::get()
    {
    return m_impl ? m_impl->get_ReadTimeout() : 0;
    }
void Chilkat::Ftp2::ReadTimeout::set(int newVal)
    {
        if (m_impl) m_impl->put_ReadTimeout(newVal);
    }
Boolean Chilkat::Ftp2::RequireSslCertVerify::get()
    {
    return m_impl ? m_impl->get_RequireSslCertVerify() : false;
    }
void Chilkat::Ftp2::RequireSslCertVerify::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RequireSslCertVerify(newVal);
    }
Boolean Chilkat::Ftp2::RestartNext::get()
    {
    return m_impl ? m_impl->get_RestartNext() : false;
    }
void Chilkat::Ftp2::RestartNext::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_RestartNext(newVal);
    }
int Chilkat::Ftp2::SendBufferSize::get()
    {
    return m_impl ? m_impl->get_SendBufferSize() : 0;
    }
void Chilkat::Ftp2::SendBufferSize::set(int newVal)
    {
        if (m_impl) m_impl->put_SendBufferSize(newVal);
    }
String ^Chilkat::Ftp2::SessionLog::get()
    {
    return ref new String(m_impl ? m_impl->sessionLog() : L"");
    }
Boolean Chilkat::Ftp2::SkipFinalReply::get()
    {
    return m_impl ? m_impl->get_SkipFinalReply() : false;
    }
void Chilkat::Ftp2::SkipFinalReply::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SkipFinalReply(newVal);
    }
int Chilkat::Ftp2::SoRcvBuf::get()
    {
    return m_impl ? m_impl->get_SoRcvBuf() : 0;
    }
void Chilkat::Ftp2::SoRcvBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoRcvBuf(newVal);
    }
int Chilkat::Ftp2::SoSndBuf::get()
    {
    return m_impl ? m_impl->get_SoSndBuf() : 0;
    }
void Chilkat::Ftp2::SoSndBuf::set(int newVal)
    {
        if (m_impl) m_impl->put_SoSndBuf(newVal);
    }
String ^Chilkat::Ftp2::SocksHostname::get()
    {
    return ref new String(m_impl ? m_impl->socksHostname() : L"");
    }
void Chilkat::Ftp2::SocksHostname::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksHostname(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::SocksPassword::get()
    {
    return ref new String(m_impl ? m_impl->socksPassword() : L"");
    }
void Chilkat::Ftp2::SocksPassword::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksPassword(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::SocksPort::get()
    {
    return m_impl ? m_impl->get_SocksPort() : 0;
    }
void Chilkat::Ftp2::SocksPort::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksPort(newVal);
    }
String ^Chilkat::Ftp2::SocksUsername::get()
    {
    return ref new String(m_impl ? m_impl->socksUsername() : L"");
    }
void Chilkat::Ftp2::SocksUsername::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SocksUsername(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ftp2::SocksVersion::get()
    {
    return m_impl ? m_impl->get_SocksVersion() : 0;
    }
void Chilkat::Ftp2::SocksVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_SocksVersion(newVal);
    }
Boolean Chilkat::Ftp2::Ssl::get()
    {
    return m_impl ? m_impl->get_Ssl() : false;
    }
void Chilkat::Ftp2::Ssl::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Ssl(newVal);
    }
String ^Chilkat::Ftp2::SslAllowedCiphers::get()
    {
    return ref new String(m_impl ? m_impl->sslAllowedCiphers() : L"");
    }
void Chilkat::Ftp2::SslAllowedCiphers::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslAllowedCiphers(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::SslProtocol::get()
    {
    return ref new String(m_impl ? m_impl->sslProtocol() : L"");
    }
void Chilkat::Ftp2::SslProtocol::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SslProtocol(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ftp2::SslServerCertVerified::get()
    {
    return m_impl ? m_impl->get_SslServerCertVerified() : false;
    }
String ^Chilkat::Ftp2::SyncMustMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustMatch() : L"");
    }
void Chilkat::Ftp2::SyncMustMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::SyncMustNotMatch::get()
    {
    return ref new String(m_impl ? m_impl->syncMustNotMatch() : L"");
    }
void Chilkat::Ftp2::SyncMustNotMatch::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncMustNotMatch(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::SyncPreview::get()
    {
    return ref new String(m_impl ? m_impl->syncPreview() : L"");
    }
String ^Chilkat::Ftp2::SyncedFiles::get()
    {
    return ref new String(m_impl ? m_impl->syncedFiles() : L"");
    }
void Chilkat::Ftp2::SyncedFiles::set(String ^newVal)
    {
        if (m_impl) m_impl->put_SyncedFiles(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::TlsCipherSuite::get()
    {
    return ref new String(m_impl ? m_impl->tlsCipherSuite() : L"");
    }
String ^Chilkat::Ftp2::TlsVersion::get()
    {
    return ref new String(m_impl ? m_impl->tlsVersion() : L"");
    }
int Chilkat::Ftp2::UploadTransferRate::get()
    {
    return m_impl ? m_impl->get_UploadTransferRate() : 0;
    }
Boolean Chilkat::Ftp2::UseEpsv::get()
    {
    return m_impl ? m_impl->get_UseEpsv() : false;
    }
void Chilkat::Ftp2::UseEpsv::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_UseEpsv(newVal);
    }
String ^Chilkat::Ftp2::Username::get()
    {
    return ref new String(m_impl ? m_impl->username() : L"");
    }
void Chilkat::Ftp2::Username::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Username(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ftp2::TlsPinSet::get()
    {
    return ref new String(m_impl ? m_impl->tlsPinSet() : L"");
    }
void Chilkat::Ftp2::TlsPinSet::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TlsPinSet(newVal ? newVal->Data() : L"");
    }


Boolean Ftp2::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
IAsyncOperation<Boolean>^ Ftp2::AppendFileAsync(Platform::String ^localFilename, Platform::String ^remoteFilename)
    {
return create_async([this, localFilename, remoteFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendFile(localFilename ? localFilename->Data() : L"",remoteFilename ? remoteFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::AppendFileFromBinaryDataAsync(Platform::String ^remoteFilename, Windows::Foundation::Collections::IVector<uint8>^content)
    {
return create_async([this, remoteFilename, content]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (content != nullptr) { v1 = to_vector(content);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendFileFromBinaryData(remoteFilename ? remoteFilename->Data() : L"",db1);

});
    }
IAsyncOperation<Boolean>^ Ftp2::AppendFileFromTextDataAsync(Platform::String ^remoteFilename, Platform::String ^textData, Platform::String ^charset)
    {
return create_async([this, remoteFilename, textData, charset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->AppendFileFromTextData(remoteFilename ? remoteFilename->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::ChangeRemoteDirAsync(Platform::String ^relativeDirPath)
    {
return create_async([this, relativeDirPath]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ChangeRemoteDir(relativeDirPath ? relativeDirPath->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::CheckConnectionAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CheckConnection();

});
    }
IAsyncOperation<Boolean>^ Ftp2::ClearControlChannelAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ClearControlChannel();

});
    }
void Ftp2::ClearDirCache(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearDirCache();
    }
void Ftp2::ClearSessionLog(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->ClearSessionLog();
    }
IAsyncOperation<Boolean>^ Ftp2::ConnectAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Connect();

});
    }
IAsyncOperation<Boolean>^ Ftp2::ConnectOnlyAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConnectOnly();

});
    }
IAsyncOperation<Boolean>^ Ftp2::ConvertToTlsAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->ConvertToTls();

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::CreatePlanAsync(Platform::String ^localDir)
    {
return create_async([this, localDir]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->createPlan(localDir ? localDir->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::CreateRemoteDirAsync(Platform::String ^dir)
    {
return create_async([this, dir]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->CreateRemoteDir(dir ? dir->Data() : L"");

});
    }
IAsyncOperation<int>^ Ftp2::DeleteMatchingAsync(Platform::String ^remotePattern)
    {
return create_async([this, remotePattern]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->DeleteMatching(remotePattern ? remotePattern->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::DeleteRemoteFileAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteRemoteFile(filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::DeleteTreeAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DeleteTree();

});
    }
int Ftp2::DetermineProxyMethod(void)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->DetermineProxyMethod();
    }
Platform::String ^Ftp2::DetermineSettings(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->determineSettings();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
IAsyncOperation<Platform::String ^>^ Ftp2::DirTreeXmlAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->dirTreeXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::DisconnectAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Disconnect();

});
    }
IAsyncOperation<Boolean>^ Ftp2::DownloadTreeAsync(Platform::String ^localRoot)
    {
return create_async([this, localRoot]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->DownloadTree(localRoot ? localRoot->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::FeatAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->feat();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetCreateDtAsync(int index)
    {
return create_async([this, index]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetCreateDt(index);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetCreateDtByNameAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetCreateDtByName(filename ? filename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetCreateTimeByNameStrAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCreateTimeByNameStr(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetCreateTimeStrAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCreateTimeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetCurrentRemoteDirAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getCurrentRemoteDir();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<int>^ Ftp2::GetDirCountAsync(void)
    {
return create_async([this]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetDirCount();

});
    }
IAsyncOperation<Boolean>^ Ftp2::GetFileAsync(Platform::String ^remoteFilename, Platform::String ^localFilename)
    {
return create_async([this, remoteFilename, localFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetFile(remoteFilename ? remoteFilename->Data() : L"",localFilename ? localFilename->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetFilenameAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetGroupAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getGroup(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::GetIsDirectoryAsync(int index)
    {
return create_async([this, index]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetIsDirectory(index);

});
    }
IAsyncOperation<Boolean>^ Ftp2::GetIsSymbolicLinkAsync(int index)
    {
return create_async([this, index]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->GetIsSymbolicLink(index);

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetLastAccessDtAsync(int index)
    {
return create_async([this, index]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastAccessDt(index);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetLastAccessDtByNameAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastAccessDtByName(filename ? filename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetLastAccessTimeByNameStrAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getLastAccessTimeByNameStr(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetLastAccessTimeStrAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getLastAccessTimeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetLastModDtAsync(int index)
    {
return create_async([this, index]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastModDt(index);
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Chilkat::CkDateTime ^>^ Ftp2::GetLastModDtByNameAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> CkDateTime ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastModDtByName(filename ? filename->Data() : L"");
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetLastModifiedTimeByNameStrAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getLastModifiedTimeByNameStr(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetLastModifiedTimeStrAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getLastModifiedTimeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetOwnerAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getOwner(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetPermTypeAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPermType(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetPermissionsAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getPermissions(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ Ftp2::GetRemoteFileBinaryDataAsync(Platform::String ^remoteFilename)
    {
return create_async([this, remoteFilename]() -> Windows::Foundation::Collections::IVector<uint8>^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetRemoteFileBinaryData(remoteFilename ? remoteFilename->Data() : L"",outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetRemoteFileTextCAsync(Platform::String ^remoteFilename, Platform::String ^charset)
    {
return create_async([this, remoteFilename, charset]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRemoteFileTextC(remoteFilename ? remoteFilename->Data() : L"",charset ? charset->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetRemoteFileTextDataAsync(Platform::String ^remoteFilename)
    {
return create_async([this, remoteFilename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getRemoteFileTextData(remoteFilename ? remoteFilename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<int>^ Ftp2::GetSizeAsync(int index)
    {
return create_async([this, index]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetSize(index);

});
    }
IAsyncOperation<int64>^ Ftp2::GetSize64Async(int index)
    {
return create_async([this, index]() -> int64
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int64
	// cppType = __int64
	return m_impl->GetSize64(index);

});
    }
IAsyncOperation<int>^ Ftp2::GetSizeByNameAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->GetSizeByName(filename ? filename->Data() : L"");

});
    }
IAsyncOperation<int64>^ Ftp2::GetSizeByName64Async(Platform::String ^filename)
    {
return create_async([this, filename]() -> int64
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int64
	// cppType = __int64
	return m_impl->GetSizeByName64(filename ? filename->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetSizeStrAsync(int index)
    {
return create_async([this, index]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSizeStr(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetSizeStrByNameAsync(Platform::String ^filename)
    {
return create_async([this, filename]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getSizeStrByName(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Cert ^Ftp2::GetSslServerCert(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = Cert
	// cppType = CkCert *
	CkCertW *pRetObj = m_impl->GetSslServerCert();
	if (!pRetObj) return nullptr;
	Chilkat::Cert ^pCert = ref new Chilkat::Cert();
	pCert->m_impl = pRetObj;
	return pCert;
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetTextDirListingAsync(Platform::String ^pattern)
    {
return create_async([this, pattern]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getTextDirListing(pattern ? pattern->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::GetXmlDirListingAsync(Platform::String ^pattern)
    {
return create_async([this, pattern]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getXmlDirListing(pattern ? pattern->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Ftp2::IsUnlocked(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->IsUnlocked();
    }
IAsyncOperation<Boolean>^ Ftp2::LoginAfterConnectOnlyAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->LoginAfterConnectOnly();

});
    }
IAsyncOperation<int>^ Ftp2::MGetFilesAsync(Platform::String ^remotePattern, Platform::String ^localDir)
    {
return create_async([this, remotePattern, localDir]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->MGetFiles(remotePattern ? remotePattern->Data() : L"",localDir ? localDir->Data() : L"");

});
    }
IAsyncOperation<int>^ Ftp2::MPutFilesAsync(Platform::String ^pattern)
    {
return create_async([this, pattern]() -> int
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = int
	// cppType = int
	return m_impl->MPutFiles(pattern ? pattern->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::NlstXmlAsync(Platform::String ^pattern)
    {
return create_async([this, pattern]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->nlstXml(pattern ? pattern->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::NoopAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Noop();

});
    }
IAsyncOperation<Boolean>^ Ftp2::PutFileAsync(Platform::String ^localFilename, Platform::String ^remoteFilename)
    {
return create_async([this, localFilename, remoteFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PutFile(localFilename ? localFilename->Data() : L"",remoteFilename ? remoteFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::PutFileFromBinaryDataAsync(Platform::String ^remoteFilename, Windows::Foundation::Collections::IVector<uint8>^content)
    {
return create_async([this, remoteFilename, content]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	CkByteData db1; std::vector<uint8> v1;
        if (content != nullptr) { v1 = to_vector(content);
            db1.borrowData(&v1[0], (unsigned long)v1.size()); }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PutFileFromBinaryData(remoteFilename ? remoteFilename->Data() : L"",db1);

});
    }
IAsyncOperation<Boolean>^ Ftp2::PutFileFromTextDataAsync(Platform::String ^remoteFilename, Platform::String ^textData, Platform::String ^charset)
    {
return create_async([this, remoteFilename, textData, charset]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PutFileFromTextData(remoteFilename ? remoteFilename->Data() : L"",textData ? textData->Data() : L"",charset ? charset->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::PutPlanAsync(Platform::String ^plan, Platform::String ^alreadyDoneFilename)
    {
return create_async([this, plan, alreadyDoneFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PutPlan(plan ? plan->Data() : L"",alreadyDoneFilename ? alreadyDoneFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::PutTreeAsync(Platform::String ^localDir)
    {
return create_async([this, localDir]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->PutTree(localDir ? localDir->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::QuoteAsync(Platform::String ^cmd)
    {
return create_async([this, cmd]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Quote(cmd ? cmd->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::RemoveRemoteDirAsync(Platform::String ^dir)
    {
return create_async([this, dir]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RemoveRemoteDir(dir ? dir->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::RenameRemoteFileAsync(Platform::String ^existingFilename, Platform::String ^newFilename)
    {
return create_async([this, existingFilename, newFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->RenameRemoteFile(existingFilename ? existingFilename->Data() : L"",newFilename ? newFilename->Data() : L"");

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::SendCommandAsync(Platform::String ^cmd)
    {
return create_async([this, cmd]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->sendCommand(cmd ? cmd->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::SetModeZAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetModeZ();

});
    }
void Ftp2::SetOldestDateStr(Platform::String ^oldestDateTimeStr)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetOldestDateStr(oldestDateTimeStr ? oldestDateTimeStr->Data() : L"");
    }
IAsyncOperation<Boolean>^ Ftp2::SetRemoteFileDateTimeStrAsync(Platform::String ^dateTimeStr, Platform::String ^remoteFilename)
    {
return create_async([this, dateTimeStr, remoteFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetRemoteFileDateTimeStr(dateTimeStr ? dateTimeStr->Data() : L"",remoteFilename ? remoteFilename->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::SetRemoteFileDtAsync(Chilkat::CkDateTime ^dt, Platform::String ^remoteFilename)
    {
return create_async([this, dt, remoteFilename]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	if (dt == nullptr) { return false; }
	CkDateTimeW* pObj0 = dt->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetRemoteFileDt(*pObj0,remoteFilename ? remoteFilename->Data() : L"");

});
    }
void Ftp2::SetSslCertRequirement(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SetSslCertRequirement(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean Ftp2::SetSslClientCert(Cert ^cert)
    {
	if (m_impl == nullptr) { return false; }
	if (cert == nullptr) { return false; }
	CkCertW* pObj0 = cert->m_impl;
	 if (!pObj0) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCert(*pObj0);
    }
Boolean Ftp2::SetSslClientCertPem(Platform::String ^pemDataOrFilename, Platform::String ^pemPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPem(pemDataOrFilename ? pemDataOrFilename->Data() : L"",pemPassword ? pemPassword->Data() : L"");
    }
Boolean Ftp2::SetSslClientCertPfx(Platform::String ^pfxFilename, Platform::String ^pfxPassword)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetSslClientCertPfx(pfxFilename ? pfxFilename->Data() : L"",pfxPassword ? pfxPassword->Data() : L"");
    }
IAsyncOperation<Boolean>^ Ftp2::SetTypeAsciiAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetTypeAscii();

});
    }
IAsyncOperation<Boolean>^ Ftp2::SetTypeBinaryAsync(void)
    {
return create_async([this]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SetTypeBinary();

});
    }
IAsyncOperation<Boolean>^ Ftp2::SiteAsync(Platform::String ^siteCommand)
    {
return create_async([this, siteCommand]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->Site(siteCommand ? siteCommand->Data() : L"");

});
    }
void Ftp2::SleepMs(int millisec)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = void
	// cppType = void
	m_impl->SleepMs(millisec);
    }
IAsyncOperation<Platform::String ^>^ Ftp2::StatAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->ck_stat();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
IAsyncOperation<Boolean>^ Ftp2::SyncDeleteRemoteAsync(Platform::String ^localRoot)
    {
return create_async([this, localRoot]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncDeleteRemote(localRoot ? localRoot->Data() : L"");

});
    }
IAsyncOperation<Boolean>^ Ftp2::SyncLocalDirAsync(Platform::String ^localRoot, int mode)
    {
return create_async([this, localRoot, mode]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncLocalDir(localRoot ? localRoot->Data() : L"",mode);

});
    }
IAsyncOperation<Boolean>^ Ftp2::SyncLocalTreeAsync(Platform::String ^localRoot, int mode)
    {
return create_async([this, localRoot, mode]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncLocalTree(localRoot ? localRoot->Data() : L"",mode);

});
    }
IAsyncOperation<Boolean>^ Ftp2::SyncRemoteTreeAsync(Platform::String ^localRoot, int mode)
    {
return create_async([this, localRoot, mode]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncRemoteTree(localRoot ? localRoot->Data() : L"",mode);

});
    }
IAsyncOperation<Boolean>^ Ftp2::SyncRemoteTree2Async(Platform::String ^localRoot, int mode, Boolean bDescend, Boolean bPreviewOnly)
    {
return create_async([this, localRoot, mode, bDescend, bPreviewOnly]() -> Boolean
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->SyncRemoteTree2(localRoot ? localRoot->Data() : L"",mode,bDescend,bPreviewOnly);

});
    }
IAsyncOperation<Platform::String ^>^ Ftp2::SystAsync(void)
    {
return create_async([this]() -> Platform::String ^
{
// This runs in a thread pool thread...

	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->syst();
	if (!retStr) return nullptr;
	return ref new String(retStr);

});
    }
Boolean Ftp2::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	CxFtp2Progress cxProgress(m_impl);
	cxProgress.m_sender = this;
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }




