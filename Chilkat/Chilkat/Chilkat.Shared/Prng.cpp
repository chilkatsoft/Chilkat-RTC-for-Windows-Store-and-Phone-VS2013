
// This source file is generated.

#include "pch.h"
#include "Prng.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkPrngW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::Prng::~Prng(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::Prng::Prng(void) 
{
    m_impl = new CkPrngW();
}

//Chilkat::Prng::Prng(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkPrngW *)x;
//    if (!m_impl) m_impl = new CkPrngW();
//    }
//    
//Platform::IntPtr Chilkat::Prng::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::Prng::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::Prng::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::Prng::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::Prng::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::Prng::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::Prng::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::Prng::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::Prng::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::Prng::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::Prng::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::Prng::PrngName::get()
    {
    return ref new String(m_impl ? m_impl->prngName() : L"");
    }
void Chilkat::Prng::PrngName::set(String ^newVal)
    {
        if (m_impl) m_impl->put_PrngName(newVal ? newVal->Data() : L"");
    }


Boolean Prng::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean Prng::AddEntropy(Platform::String ^entropy, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddEntropy(entropy ? entropy->Data() : L"",encoding ? encoding->Data() : L"");
    }
Boolean Prng::AddEntropyBytes(Windows::Foundation::Collections::IVector<uint8>^entropy)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (entropy != nullptr) { v0 = to_vector(entropy);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddEntropyBytes(db0);
    }
Platform::String ^Prng::ExportEntropy(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->exportEntropy();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Prng::GenRandom(int numBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->genRandom(numBytes,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Prng::GenRandomBytes(int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GenRandomBytes(numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Platform::String ^Prng::GetEntropy(int numBytes, Platform::String ^encoding)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getEntropy(numBytes,encoding ? encoding->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Windows::Foundation::Collections::IVector<uint8>^Prng::GetEntropyBytes(int numBytes)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	CkByteData outDb;
	// gType = bytes
	// cppType = bool
	bool success = m_impl->GetEntropyBytes(numBytes,outDb);
	const uint8 *pOut = outDb.getData();
	std::vector<uint8> vec(pOut, pOut+(size_t)outDb.getSize());
	return ref new Platform::Collections::Vector<uint8>(std::move(vec));
    }
Boolean Prng::ImportEntropy(Platform::String ^entropy)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->ImportEntropy(entropy ? entropy->Data() : L"");
    }
int Prng::RandomInt(int low, int high)
    {
	if (m_impl == nullptr) { return -1; }
	// --- prep output arg ---
	// gType = int
	// cppType = int
	return m_impl->RandomInt(low,high);
    }
Platform::String ^Prng::RandomPassword(int length, Boolean mustIncludeDigit, Boolean upperAndLowercase, Platform::String ^mustHaveOneOf, Platform::String ^excludeChars)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->randomPassword(length,mustIncludeDigit,upperAndLowercase,mustHaveOneOf ? mustHaveOneOf->Data() : L"",excludeChars ? excludeChars->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^Prng::RandomString(int length, Boolean bDigits, Boolean bLower, Boolean bUpper)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->randomString(length,bDigits,bLower,bUpper);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }




