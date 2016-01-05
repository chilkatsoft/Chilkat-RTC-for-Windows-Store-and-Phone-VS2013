
// This source file is generated.

#include "pch.h"
#include "SFtpFile.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSFtpFileW.h"
		
#include "CkDateTime.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SFtpFile::~SFtpFile(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SFtpFile::SFtpFile(void) 
{
    m_impl = new CkSFtpFileW();
}

//Chilkat::SFtpFile::SFtpFile(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSFtpFileW *)x;
//    if (!m_impl) m_impl = new CkSFtpFileW();
//    }
//    
//Platform::IntPtr Chilkat::SFtpFile::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SFtpFile::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SFtpFile::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SFtpFile::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SFtpFile::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SFtpFile::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SFtpFile::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SFtpFile::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SFtpFile::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SFtpFile::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SFtpFile::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::SFtpFile::CreateTimeStr::get()
    {
    return ref new String(m_impl ? m_impl->createTimeStr() : L"");
    }
String ^Chilkat::SFtpFile::FileType::get()
    {
    return ref new String(m_impl ? m_impl->fileType() : L"");
    }
String ^Chilkat::SFtpFile::Filename::get()
    {
    return ref new String(m_impl ? m_impl->filename() : L"");
    }
int Chilkat::SFtpFile::Gid::get()
    {
    return m_impl ? m_impl->get_Gid() : 0;
    }
String ^Chilkat::SFtpFile::Group::get()
    {
    return ref new String(m_impl ? m_impl->group() : L"");
    }
Boolean Chilkat::SFtpFile::IsAppendOnly::get()
    {
    return m_impl ? m_impl->get_IsAppendOnly() : false;
    }
Boolean Chilkat::SFtpFile::IsArchive::get()
    {
    return m_impl ? m_impl->get_IsArchive() : false;
    }
Boolean Chilkat::SFtpFile::IsCaseInsensitive::get()
    {
    return m_impl ? m_impl->get_IsCaseInsensitive() : false;
    }
Boolean Chilkat::SFtpFile::IsCompressed::get()
    {
    return m_impl ? m_impl->get_IsCompressed() : false;
    }
Boolean Chilkat::SFtpFile::IsDirectory::get()
    {
    return m_impl ? m_impl->get_IsDirectory() : false;
    }
Boolean Chilkat::SFtpFile::IsEncrypted::get()
    {
    return m_impl ? m_impl->get_IsEncrypted() : false;
    }
Boolean Chilkat::SFtpFile::IsHidden::get()
    {
    return m_impl ? m_impl->get_IsHidden() : false;
    }
Boolean Chilkat::SFtpFile::IsImmutable::get()
    {
    return m_impl ? m_impl->get_IsImmutable() : false;
    }
Boolean Chilkat::SFtpFile::IsReadOnly::get()
    {
    return m_impl ? m_impl->get_IsReadOnly() : false;
    }
Boolean Chilkat::SFtpFile::IsRegular::get()
    {
    return m_impl ? m_impl->get_IsRegular() : false;
    }
Boolean Chilkat::SFtpFile::IsSparse::get()
    {
    return m_impl ? m_impl->get_IsSparse() : false;
    }
Boolean Chilkat::SFtpFile::IsSymLink::get()
    {
    return m_impl ? m_impl->get_IsSymLink() : false;
    }
Boolean Chilkat::SFtpFile::IsSync::get()
    {
    return m_impl ? m_impl->get_IsSync() : false;
    }
Boolean Chilkat::SFtpFile::IsSystem::get()
    {
    return m_impl ? m_impl->get_IsSystem() : false;
    }
String ^Chilkat::SFtpFile::LastAccessTimeStr::get()
    {
    return ref new String(m_impl ? m_impl->lastAccessTimeStr() : L"");
    }
String ^Chilkat::SFtpFile::LastModifiedTimeStr::get()
    {
    return ref new String(m_impl ? m_impl->lastModifiedTimeStr() : L"");
    }
String ^Chilkat::SFtpFile::Owner::get()
    {
    return ref new String(m_impl ? m_impl->owner() : L"");
    }
int Chilkat::SFtpFile::Permissions::get()
    {
    return m_impl ? m_impl->get_Permissions() : 0;
    }
int Chilkat::SFtpFile::Size32::get()
    {
    return m_impl ? m_impl->get_Size32() : 0;
    }
int64 Chilkat::SFtpFile::Size64::get()
    {
    return m_impl ? m_impl->get_Size64() : 0;
    }
String ^Chilkat::SFtpFile::SizeStr::get()
    {
    return ref new String(m_impl ? m_impl->sizeStr() : L"");
    }
int Chilkat::SFtpFile::Uid::get()
    {
    return m_impl ? m_impl->get_Uid() : 0;
    }


Boolean SFtpFile::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Chilkat::CkDateTime ^SFtpFile::GetCreateDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetCreateDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Chilkat::CkDateTime ^SFtpFile::GetLastAccessDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastAccessDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }
Chilkat::CkDateTime ^SFtpFile::GetLastModifiedDt(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = CkDateTime
	// cppType = CkDateTime *
	CkDateTimeW *pRetObj = m_impl->GetLastModifiedDt();
	if (!pRetObj) return nullptr;
	Chilkat::CkDateTime ^pCkDateTime = ref new Chilkat::CkDateTime();
	pCkDateTime->m_impl = pRetObj;
	return pCkDateTime;
    }




