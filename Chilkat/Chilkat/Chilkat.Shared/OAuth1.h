
// This header is generated for Chilkat v9.5.0

#pragma once

class CkOAuth1W;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class OAuth1 sealed
{
#include "friendDecls.h"
		
	private:
    CkOAuth1W *m_impl;

	public:
	virtual ~OAuth1(void);
	OAuth1(void);
	//OAuth1(Platform::IntPtr p);

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
	property Platform::String ^AuthorizationHeader
	{
		Platform::String ^get();
	}
	property Platform::String ^BaseString
	{
		Platform::String ^get();
	}
	property Platform::String ^ConsumerKey
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ConsumerSecret
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodedSignature
	{
		Platform::String ^get();
	}
	property Platform::String ^GeneratedUrl
	{
		Platform::String ^get();
	}
	property Platform::String ^HmacKey
	{
		Platform::String ^get();
	}
	property Platform::String ^Nonce
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OauthMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OauthUrl
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^OauthVersion
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^QueryString
	{
		Platform::String ^get();
	}
	property Platform::String ^Signature
	{
		Platform::String ^get();
	}
	property Platform::String ^SignatureMethod
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Timestamp
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Token
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TokenSecret
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddParam(Platform::String ^name, Platform::String ^value);

	Boolean Generate(void);

	Boolean RemoveParam(Platform::String ^name);

	Boolean GenNonce(int numBytes);

	Boolean GenTimestamp(void);



};





}


