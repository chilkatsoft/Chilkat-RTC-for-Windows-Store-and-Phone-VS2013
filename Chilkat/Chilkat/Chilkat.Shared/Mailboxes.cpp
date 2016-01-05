
// This source file is generated.

#include "pch.h"
#include "Mailboxes.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkMailboxesW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Mailboxes::~Mailboxes(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Mailboxes::Mailboxes(void) 
{
    m_impl = new CkMailboxesW();
}

//Chilkat::Mailboxes::Mailboxes(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkMailboxesW *)x;
//    if (!m_impl) m_impl = new CkMailboxesW();
//    }
//    
//Platform::IntPtr Chilkat::Mailboxes::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Mailboxes::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Mailboxes::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Mailboxes::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Mailboxes::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Mailboxes::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Mailboxes::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Mailboxes::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Mailboxes::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Mailboxes::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Mailboxes::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::Mailboxes::Count::get()
    {
    return m_impl ? m_impl->get_Count() : 0;
    }


Boolean Mailboxes::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Platform::String ^Mailboxes::GetFlags(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFlags(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Mailboxes::GetMailboxIndex(Platform::String ^mbxName)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetMailboxIndex(mbxName ? mbxName->Data() : L"");
    }
Platform::String ^Mailboxes::GetName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Mailboxes::GetNthFlag(int index, int flagIndex)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getNthFlag(index,flagIndex);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
int Mailboxes::GetNumFlags(int index)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->GetNumFlags(index);
    }
Boolean Mailboxes::HasFlag(int index, Platform::String ^flagName)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasFlag(index,flagName ? flagName->Data() : L"");
    }
Boolean Mailboxes::HasInferiors(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->HasInferiors(index);
    }
Boolean Mailboxes::IsMarked(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsMarked(index);
    }
Boolean Mailboxes::IsSelectable(int index)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->IsSelectable(index);
    }




