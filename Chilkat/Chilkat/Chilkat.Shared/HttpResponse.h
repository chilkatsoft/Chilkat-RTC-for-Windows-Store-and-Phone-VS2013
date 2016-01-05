
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHttpResponseW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class HttpResponse sealed
{
#include "friendDecls.h"
		
	private:
    CkHttpResponseW *m_impl;

	public:
	virtual ~HttpResponse(void);
	HttpResponse(void);
	//HttpResponse(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	



	// ----------------------
	// Properties
	// ----------------------
	property Platform::String ^LastErrorHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorText
	{
		Platform::String ^get();
	}
	property Platform::String ^LastErrorXml
	{
		Platform::String ^get();
	}
	property Platform::String ^Version
	{
		Platform::String ^get();
	}
	property Platform::String ^DebugLogFilePath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean VerboseLogging
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean LastMethodSuccess
	{
		Boolean get();
		void set(Boolean);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^Body
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
	}
	property Platform::String ^BodyQP
	{
		Platform::String ^get();
	}
	property Platform::String ^BodyStr
	{
		Platform::String ^get();
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
	}
	property uint32 ContentLength
	{
		uint32 get();
	}
	property Platform::String ^DateStr
	{
		Platform::String ^get();
	}
	property Platform::String ^Domain
	{
		Platform::String ^get();
	}
	property Platform::String ^FinalRedirectUrl
	{
		Platform::String ^get();
	}
	property Platform::String ^FullMime
	{
		Platform::String ^get();
	}
	property Platform::String ^Header
	{
		Platform::String ^get();
	}
	property int32 NumCookies
	{
		int32 get();
	}
	property int32 NumHeaderFields
	{
		int32 get();
	}
	property int32 StatusCode
	{
		int32 get();
	}
	property Platform::String ^StatusLine
	{
		Platform::String ^get();
	}
	property Platform::String ^StatusText
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Platform::String ^GetCookieDomain(int index);

	Platform::String ^GetCookieExpiresStr(int index);

	Platform::String ^GetCookieName(int index);

	Platform::String ^GetCookiePath(int index);

	Platform::String ^GetCookieValue(int index);

	Platform::String ^GetHeaderField(Platform::String ^fieldName);

	Platform::String ^GetHeaderFieldAttr(Platform::String ^fieldName, Platform::String ^attrName);

	Platform::String ^GetHeaderName(int index);

	Platform::String ^GetHeaderValue(int index);

	Boolean SaveBodyBinary(Platform::String ^path);

	Boolean SaveBodyText(Boolean bCrlf, Platform::String ^path);

	Platform::String ^UrlEncParamValue(Platform::String ^encodedParams, Platform::String ^paramName);



};





}


