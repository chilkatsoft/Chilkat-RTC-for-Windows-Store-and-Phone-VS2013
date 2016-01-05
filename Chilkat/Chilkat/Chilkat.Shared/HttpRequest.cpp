
// This source file is generated.

#include "pch.h"
#include "HttpRequest.h"
	
#include "include/CkString.h"
#include "include/CkByteData.h"
#include "include/CkDateTime.h"
#include "include/CkHttpRequestW.h"
		


using namespace Chilkat;
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

Chilkat::HttpRequest::~HttpRequest(void)
    {
    if (m_impl)
	{
	delete m_impl;
	m_impl = 0;
	}
    }

Chilkat::HttpRequest::HttpRequest(void) 
{
    m_impl = new CkHttpRequestW();
}

//Chilkat::HttpRequest::HttpRequest(Platform::IntPtr p)
//    {
//    void *x = (void *)p;
//    m_impl = (CkHttpRequestW *)x;
//    if (!m_impl) m_impl = new CkHttpRequestW();
//    }
//    
//Platform::IntPtr Chilkat::HttpRequest::ImplObj(void)
//{
//	return (Platform::IntPtr) m_impl;
//}


String ^Chilkat::HttpRequest::LastErrorHtml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorHtml() : L"");
    }
String ^Chilkat::HttpRequest::LastErrorText::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorText() : L"");
    }
String ^Chilkat::HttpRequest::LastErrorXml::get()
    {
    return ref new String(m_impl ? m_impl->lastErrorXml() : L"");
    }
String ^Chilkat::HttpRequest::Version::get()
    {
    return ref new String(m_impl ? m_impl->version() : L"");
    }
String ^Chilkat::HttpRequest::DebugLogFilePath::get()
    {
    return ref new String(m_impl ? m_impl->debugLogFilePath() : L"");
    }
void Chilkat::HttpRequest::DebugLogFilePath::set(String ^newVal)
    {
        if (m_impl) m_impl->put_DebugLogFilePath(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::HttpRequest::VerboseLogging::get()
    {
    return m_impl ? m_impl->get_VerboseLogging() : false;
    }
void Chilkat::HttpRequest::VerboseLogging::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_VerboseLogging(newVal);
    }
Boolean Chilkat::HttpRequest::LastMethodSuccess::get()
    {
    return m_impl ? m_impl->get_LastMethodSuccess() : false;
    }
void Chilkat::HttpRequest::LastMethodSuccess::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_LastMethodSuccess(newVal);
    }
String ^Chilkat::HttpRequest::Boundary::get()
    {
    return ref new String(m_impl ? m_impl->boundary() : L"");
    }
void Chilkat::HttpRequest::Boundary::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Boundary(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpRequest::Charset::get()
    {
    return ref new String(m_impl ? m_impl->charset() : L"");
    }
void Chilkat::HttpRequest::Charset::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Charset(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpRequest::ContentType::get()
    {
    return ref new String(m_impl ? m_impl->contentType() : L"");
    }
void Chilkat::HttpRequest::ContentType::set(String ^newVal)
    {
        if (m_impl) m_impl->put_ContentType(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpRequest::EntireHeader::get()
    {
    return ref new String(m_impl ? m_impl->entireHeader() : L"");
    }
void Chilkat::HttpRequest::EntireHeader::set(String ^newVal)
    {
        if (m_impl) m_impl->put_EntireHeader(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpRequest::HttpVerb::get()
    {
    return ref new String(m_impl ? m_impl->httpVerb() : L"");
    }
void Chilkat::HttpRequest::HttpVerb::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpVerb(newVal ? newVal->Data() : L"");
    }
String ^Chilkat::HttpRequest::HttpVersion::get()
    {
    return ref new String(m_impl ? m_impl->httpVersion() : L"");
    }
void Chilkat::HttpRequest::HttpVersion::set(String ^newVal)
    {
        if (m_impl) m_impl->put_HttpVersion(newVal ? newVal->Data() : L"");
    }
int Chilkat::HttpRequest::NumHeaderFields::get()
    {
    return m_impl ? m_impl->get_NumHeaderFields() : 0;
    }
int Chilkat::HttpRequest::NumParams::get()
    {
    return m_impl ? m_impl->get_NumParams() : 0;
    }
String ^Chilkat::HttpRequest::Path::get()
    {
    return ref new String(m_impl ? m_impl->path() : L"");
    }
void Chilkat::HttpRequest::Path::set(String ^newVal)
    {
        if (m_impl) m_impl->put_Path(newVal ? newVal->Data() : L"");
    }
Boolean Chilkat::HttpRequest::SendCharset::get()
    {
    return m_impl ? m_impl->get_SendCharset() : false;
    }
void Chilkat::HttpRequest::SendCharset::set(Boolean newVal)
    {
        if (m_impl) m_impl->put_SendCharset(newVal);
    }


Boolean HttpRequest::SaveLastError(Platform::String ^path)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->SaveLastError(path ? path->Data() : L"");
    }
Boolean HttpRequest::AddBytesForUpload(Platform::String ^name, Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^byteData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (byteData != nullptr) { v2 = to_vector(byteData);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddBytesForUpload(name ? name->Data() : L"",filename ? filename->Data() : L"",db2);
    }
Boolean HttpRequest::AddBytesForUpload2(Platform::String ^name, Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db2; std::vector<uint8> v2;
        if (byteData != nullptr) { v2 = to_vector(byteData);
            db2.borrowData(&v2[0], (unsigned long)v2.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddBytesForUpload2(name ? name->Data() : L"",filename ? filename->Data() : L"",db2,contentType ? contentType->Data() : L"");
    }
Boolean HttpRequest::AddFileForUpload(Platform::String ^name, Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddFileForUpload(name ? name->Data() : L"",filename ? filename->Data() : L"");
    }
Boolean HttpRequest::AddFileForUpload2(Platform::String ^name, Platform::String ^filename, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddFileForUpload2(name ? name->Data() : L"",filename ? filename->Data() : L"",contentType ? contentType->Data() : L"");
    }
void HttpRequest::AddHeader(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddHeader(name ? name->Data() : L"",value ? value->Data() : L"");
    }
void HttpRequest::AddParam(Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->AddParam(name ? name->Data() : L"",value ? value->Data() : L"");
    }
Boolean HttpRequest::AddStringForUpload(Platform::String ^name, Platform::String ^filename, Platform::String ^strData, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringForUpload(name ? name->Data() : L"",filename ? filename->Data() : L"",strData ? strData->Data() : L"",charset ? charset->Data() : L"");
    }
Boolean HttpRequest::AddStringForUpload2(Platform::String ^name, Platform::String ^filename, Platform::String ^strData, Platform::String ^charset, Platform::String ^contentType)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddStringForUpload2(name ? name->Data() : L"",filename ? filename->Data() : L"",strData ? strData->Data() : L"",charset ? charset->Data() : L"",contentType ? contentType->Data() : L"");
    }
Boolean HttpRequest::AddSubHeader(int index, Platform::String ^name, Platform::String ^value)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->AddSubHeader(index,name ? name->Data() : L"",value ? value->Data() : L"");
    }
Platform::String ^HttpRequest::GenerateRequestText(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->generateRequestText();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetHeaderField(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderField(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetHeaderName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetHeaderValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getHeaderValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetParam(Platform::String ^name)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getParam(name ? name->Data() : L"");
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetParamName(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getParamName(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetParamValue(int index)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getParamValue(index);
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Platform::String ^HttpRequest::GetUrlEncodedParams(void)
    {
	if (m_impl == nullptr) { return nullptr; }
	// --- prep output arg ---
	// gType = string
	// cppType = bool
	const wchar_t *retStr = m_impl->getUrlEncodedParams();
	if (!retStr) return nullptr;
	return ref new String(retStr);
    }
Boolean HttpRequest::LoadBodyFromBytes(Windows::Foundation::Collections::IVector<uint8>^binaryData)
    {
	if (m_impl == nullptr) { return false; }
	CkByteData db0; std::vector<uint8> v0;
        if (binaryData != nullptr) { v0 = to_vector(binaryData);
            db0.borrowData(&v0[0], (unsigned long)v0.size()); }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBodyFromBytes(db0);
    }
Boolean HttpRequest::LoadBodyFromFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBodyFromFile(filename ? filename->Data() : L"");
    }
Boolean HttpRequest::LoadBodyFromString(Platform::String ^bodyStr, Platform::String ^charset)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->LoadBodyFromString(bodyStr ? bodyStr->Data() : L"",charset ? charset->Data() : L"");
    }
void HttpRequest::RemoveAllParams(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveAllParams();
    }
Boolean HttpRequest::RemoveHeader(Platform::String ^name)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->RemoveHeader(name ? name->Data() : L"");
    }
void HttpRequest::RemoveParam(Platform::String ^name)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->RemoveParam(name ? name->Data() : L"");
    }
void HttpRequest::SetFromUrl(Platform::String ^url)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->SetFromUrl(url ? url->Data() : L"");
    }
Boolean HttpRequest::StreamBodyFromFile(Platform::String ^filename)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->StreamBodyFromFile(filename ? filename->Data() : L"");
    }
Boolean HttpRequest::StreamChunkFromFile(Platform::String ^path, Platform::String ^offset, Platform::String ^numBytes)
    {
	if (m_impl == nullptr) { return false; }
	// --- prep output arg ---
	// gType = bool
	// cppType = bool
	return m_impl->StreamChunkFromFile(path ? path->Data() : L"",offset ? offset->Data() : L"",numBytes ? numBytes->Data() : L"");
    }
void HttpRequest::UseGet(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UseGet();
    }
void HttpRequest::UseHead(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UseHead();
    }
void HttpRequest::UsePost(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UsePost();
    }
void HttpRequest::UsePostMultipartForm(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UsePostMultipartForm();
    }
void HttpRequest::UsePut(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UsePut();
    }
void HttpRequest::UseUpload(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UseUpload();
    }
void HttpRequest::UseUploadPut(void)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UseUploadPut();
    }
void HttpRequest::UseXmlHttp(Platform::String ^xmlBody)
    {
	if (m_impl == nullptr) { return ; }
	// --- prep output arg ---
	// gType = void
	// cppType = void
	m_impl->UseXmlHttp(xmlBody ? xmlBody->Data() : L"");
    }




