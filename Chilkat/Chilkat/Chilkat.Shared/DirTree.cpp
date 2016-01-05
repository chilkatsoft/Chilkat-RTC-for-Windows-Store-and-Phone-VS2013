
// This source file is generated.

#include "pch.h"
#include "DirTree.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkDirTreeW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::DirTree::~DirTree(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::DirTree::DirTree(void) 
{
    m_impl = new CkDirTreeW();
}

//Chilkat::DirTree::DirTree(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkDirTreeW *)x;
//    if (!m_impl) m_impl = new CkDirTreeW();
//    }
//    
//Platform::IntPtr Chilkat::DirTree::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::DirTree::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::DirTree::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::DirTree::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::DirTree::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::DirTree::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::DirTree::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::DirTree::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::DirTree::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::DirTree::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::DirTree::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::DirTree::BaseDir::get()
    {
    return ref new String(m_impl ? m_impl->baseDir() : L"");
    }
void Chilkat::DirTree::BaseDir::set(String ^newVal)
    {
        if (m_impl) m_impl->put_BaseDir(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::DirTree::DoneIterating::get()
    {
    return m_impl ? m_impl->get_DoneIterating() : false;
    }
int Chilkat::DirTree::FileSize32::get()
    {
    return m_impl ? m_impl->get_FileSize32() : 0;
    }
int64 Chilkat::DirTree::FileSize64::get()
    {
    return m_impl ? m_impl->get_FileSize64() : 0;
    }
String ^Chilkat::DirTree::FullPath::get()
    {
    return ref new String(m_impl ? m_impl->fullPath() : L"");
    }
String ^Chilkat::DirTree::FullUncPath::get()
    {
    return ref new String(m_impl ? m_impl->fullUncPath() : L"");
    }
Boolean Chilkat::DirTree::IsDirectory::get()
    {
    return m_impl ? m_impl->get_IsDirectory() : false;
    }
Boolean Chilkat::DirTree::Recurse::get()
    {
    return m_impl ? m_impl->get_Recurse() : false;
    }
void Chilkat::DirTree::Recurse::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_Recurse(newVal);
    }
String ^Chilkat::DirTree::RelativePath::get()
    {
    return ref new String(m_impl ? m_impl->relativePath() : L"");
    }


Boolean DirTree::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean DirTree::AdvancePosition(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AdvancePosition();
    }
Boolean DirTree::BeginIterate(void)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->BeginIterate();
    }




