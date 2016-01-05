
// This header is generated for Chilkat v9.5.0

#pragma once

class CkPublicKeyW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class PublicKey sealed
{
#include "friendDecls.h"
		
	private:
    CkPublicKeyW *m_impl;

	public:
	virtual ~PublicKey(void);
	PublicKey(void);
	//PublicKey(Platform::IntPtr p);

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
	property Platform::String ^KeyType
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Windows::Foundation::Collections::IVector<uint8>^GetOpenSslDer(void);

	Platform::String ^GetOpenSslPem(void);

	Platform::String ^GetPkcs1ENC(Platform::String ^encoding);

	Platform::String ^GetPkcs8ENC(Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^GetRsaDer(void);

	Platform::String ^GetXml(void);

	Boolean LoadBase64(Platform::String ^keyStr);

	Boolean LoadOpenSslDer(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadOpenSslDerFile(Platform::String ^path);

	Boolean LoadOpenSslPem(Platform::String ^str);

	Boolean LoadOpenSslPemFile(Platform::String ^path);

	Boolean LoadPkcs1Pem(Platform::String ^str);

	Boolean LoadRsaDer(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadRsaDerFile(Platform::String ^path);

	Boolean LoadXml(Platform::String ^xml);

	Boolean LoadXmlFile(Platform::String ^path);

	Boolean SaveOpenSslDerFile(Platform::String ^path);

	Boolean SaveOpenSslPemFile(Platform::String ^path);

	Boolean SaveRsaDerFile(Platform::String ^path);

	Boolean SaveXmlFile(Platform::String ^path);



};





}


