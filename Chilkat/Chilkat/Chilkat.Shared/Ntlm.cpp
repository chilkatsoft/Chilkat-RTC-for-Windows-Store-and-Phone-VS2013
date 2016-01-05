
// This source file is generated.

#include "pch.h"
#include "Ntlm.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkNtlmW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Ntlm::~Ntlm(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Ntlm::Ntlm(void) 
{
    m_impl = new CkNtlmW();
}

//Chilkat::Ntlm::Ntlm(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkNtlmW *)x;
//    if (!m_impl) m_impl = new CkNtlmW();
//    }
//    
//Platform::IntPtr Chilkat::Ntlm::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Ntlm::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Ntlm::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Ntlm::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Ntlm::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Ntlm::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Ntlm::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Ntlm::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Ntlm::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Ntlm::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Ntlm::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Ntlm::ClientChallenge::get()
    {
    return ref new String(m_impl ? m_impl->clientChallenge() : L"");
    }
void Chilkat::Ntlm::ClientChallenge::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ClientChallenge(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::DnsComputerName::get()
    {
    return ref new String(m_impl ? m_impl->dnsComputerName() : L"");
    }
void Chilkat::Ntlm::DnsComputerName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DnsComputerName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::DnsDomainName::get()
    {
    return ref new String(m_impl ? m_impl->dnsDomainName() : L"");
    }
void Chilkat::Ntlm::DnsDomainName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DnsDomainName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::Domain::get()
    {
    return ref new String(m_impl ? m_impl->domain() : L"");
    }
void Chilkat::Ntlm::Domain::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Domain(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::EncodingMode::get()
    {
    return ref new String(m_impl ? m_impl->encodingMode() : L"");
    }
void Chilkat::Ntlm::EncodingMode::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EncodingMode(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::Flags::get()
    {
    return ref new String(m_impl ? m_impl->flags() : L"");
    }
void Chilkat::Ntlm::Flags::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Flags(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::NetBiosComputerName::get()
    {
    return ref new String(m_impl ? m_impl->netBiosComputerName() : L"");
    }
void Chilkat::Ntlm::NetBiosComputerName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_NetBiosComputerName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::NetBiosDomainName::get()
    {
    return ref new String(m_impl ? m_impl->netBiosDomainName() : L"");
    }
void Chilkat::Ntlm::NetBiosDomainName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_NetBiosDomainName(newVal ? newVal->Data() : L"");
    }
int Chilkat::Ntlm::NtlmVersion::get()
    {
    return m_impl ? m_impl->get_NtlmVersion() : 0;
    }
void Chilkat::Ntlm::NtlmVersion::set(int newVal)
    {
        if (m_impl) m_impl->put_NtlmVersion(newVal);
    }
int Chilkat::Ntlm::OemCodePage::get()
    {
    return m_impl ? m_impl->get_OemCodePage() : 0;
    }
void Chilkat::Ntlm::OemCodePage::set(int newVal)
    {
        if (m_impl) m_impl->put_OemCodePage(newVal);
    }
String ^Chilkat::Ntlm::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
void Chilkat::Ntlm::Password::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Password(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::ServerChallenge::get()
    {
    return ref new String(m_impl ? m_impl->serverChallenge() : L"");
    }
void Chilkat::Ntlm::ServerChallenge::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ServerChallenge(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::TargetName::get()
    {
    return ref new String(m_impl ? m_impl->targetName() : L"");
    }
void Chilkat::Ntlm::TargetName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_TargetName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::UserName::get()
    {
    return ref new String(m_impl ? m_impl->userName() : L"");
    }
void Chilkat::Ntlm::UserName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_UserName(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::Ntlm::Workstation::get()
    {
    return ref new String(m_impl ? m_impl->workstation() : L"");
    }
void Chilkat::Ntlm::Workstation::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Workstation(newVal ? newVal->Data() : L"");
    }


Boolean Ntlm::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Ntlm::CompareType3(Platform::String ^msg1, Platform::String ^msg2)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->CompareType3(msg1 ? msg1->Data() : L"",msg2 ? msg2->Data() : L"");
    }
Platform::String ^Ntlm::GenType1(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genType1();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ntlm::GenType2(Platform::String ^type1Msg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genType2(type1Msg ? type1Msg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ntlm::GenType3(Platform::String ^type2Msg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genType3(type2Msg ? type2Msg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Ntlm::LoadType3(Platform::String ^type3Msg)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadType3(type3Msg ? type3Msg->Data() : L"");
    }
Platform::String ^Ntlm::ParseType1(Platform::String ^type1Msg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->parseType1(type1Msg ? type1Msg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ntlm::ParseType2(Platform::String ^type2Msg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->parseType2(type2Msg ? type2Msg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Ntlm::ParseType3(Platform::String ^type3Msg)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->parseType3(type3Msg ? type3Msg->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean Ntlm::SetFlag(Platform::String ^flagLetter, Boolean onOrOff)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SetFlag(flagLetter ? flagLetter->Data() : L"",onOrOff);
    }
Boolean Ntlm::UnlockComponent(Platform::String ^unlockCode)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->UnlockComponent(unlockCode ? unlockCode->Data() : L"");
    }




