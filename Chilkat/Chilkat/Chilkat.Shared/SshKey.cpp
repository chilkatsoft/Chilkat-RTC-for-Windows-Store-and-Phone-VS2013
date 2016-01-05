
// This source file is generated.

#include "pch.h"
#include "SshKey.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSshKeyW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SshKey::~SshKey(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SshKey::SshKey(void) 
{
    m_impl = new CkSshKeyW();
}

//Chilkat::SshKey::SshKey(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSshKeyW *)x;
//    if (!m_impl) m_impl = new CkSshKeyW();
//    }
//    
//Platform::IntPtr Chilkat::SshKey::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SshKey::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SshKey::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SshKey::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SshKey::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SshKey::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SshKey::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SshKey::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SshKey::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SshKey::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SshKey::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::SshKey::Comment::get()
    {
    return ref new String(m_impl ? m_impl->comment() : L"");
    }
void Chilkat::SshKey::Comment::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Comment(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SshKey::IsDsaKey::get()
    {
    return m_impl ? m_impl->get_IsDsaKey() : false;
    }
Boolean Chilkat::SshKey::IsPrivateKey::get()
    {
    return m_impl ? m_impl->get_IsPrivateKey() : false;
    }
Boolean Chilkat::SshKey::IsRsaKey::get()
    {
    return m_impl ? m_impl->get_IsRsaKey() : false;
    }
String ^Chilkat::SshKey::Password::get()
    {
    return ref new String(m_impl ? m_impl->password() : L"");
    }
void Chilkat::SshKey::Password::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Password(newVal ? newVal->Data() : L"");
    }


Boolean SshKey::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean SshKey::FromOpenSshPrivateKey(Platform::String ^keyStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromOpenSshPrivateKey(keyStr ? keyStr->Data() : L"");
    }
Boolean SshKey::FromOpenSshPublicKey(Platform::String ^keyStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromOpenSshPublicKey(keyStr ? keyStr->Data() : L"");
    }
Boolean SshKey::FromPuttyPrivateKey(Platform::String ^keyStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromPuttyPrivateKey(keyStr ? keyStr->Data() : L"");
    }
Boolean SshKey::FromRfc4716PublicKey(Platform::String ^keyStr)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromRfc4716PublicKey(keyStr ? keyStr->Data() : L"");
    }
Boolean SshKey::FromXml(Platform::String ^xmlKey)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->FromXml(xmlKey ? xmlKey->Data() : L"");
    }
Platform::String ^SshKey::GenFingerprint(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genFingerprint();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean SshKey::GenerateDsaKey(int numBits)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenerateDsaKey(numBits);
    }
Boolean SshKey::GenerateRsaKey(int numBits, int exponent)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->GenerateRsaKey(numBits,exponent);
    }
Platform::String ^SshKey::LoadText(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->loadText(filename ? filename->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean SshKey::SaveText(Platform::String ^strToSave, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveText(strToSave ? strToSave->Data() : L"",filename ? filename->Data() : L"");
    }
Platform::String ^SshKey::ToOpenSshPrivateKey(Boolean bEncrypt)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toOpenSshPrivateKey(bEncrypt);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^SshKey::ToOpenSshPublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toOpenSshPublicKey();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^SshKey::ToPuttyPrivateKey(Boolean bEncrypt)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toPuttyPrivateKey(bEncrypt);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^SshKey::ToRfc4716PublicKey(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toRfc4716PublicKey();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^SshKey::ToXml(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->toXml();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




