
// This source file is generated.

#include "pch.h"
#include "SFtpDir.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkSFtpDirW.h"
		
#include "include/CkSFtpFileW.h"
#include "SFtpFile.h"


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::SFtpDir::~SFtpDir(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::SFtpDir::SFtpDir(void) 
{
    m_impl = new CkSFtpDirW();
}

//Chilkat::SFtpDir::SFtpDir(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkSFtpDirW *)x;
//    if (!m_impl) m_impl = new CkSFtpDirW();
//    }
//    
//Platform::IntPtr Chilkat::SFtpDir::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::SFtpDir::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::SFtpDir::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::SFtpDir::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::SFtpDir::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::SFtpDir::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::SFtpDir::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::SFtpDir::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::SFtpDir::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::SFtpDir::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::SFtpDir::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
int Chilkat::SFtpDir::NumFilesAndDirs::get()
    {
    return m_impl ? m_impl->get_NumFilesAndDirs() : 0;
    }
String ^Chilkat::SFtpDir::OriginalPath::get()
    {
    return ref new String(m_impl ? m_impl->originalPath() : L"");
    }


Boolean SFtpDir::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
SFtpFile ^SFtpDir::GetFileObject(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = SFtpFile
	// cppType = CkSFtpFile *
	CkSFtpFileW *pRetObj = m_impl->GetFileObject(index);
	if (!pRetObj) return nullptr;
	Chilkat::SFtpFile ^pSFtpFile = ref new Chilkat::SFtpFile();
	pSFtpFile->m_impl = pRetObj;
	return pSFtpFile;
    }
Platform::String ^SFtpDir::GetFilename(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getFilename(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




