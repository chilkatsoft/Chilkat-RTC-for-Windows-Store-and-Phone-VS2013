
// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmlCertVaultW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;
	ref class CertChain;
	ref class Pfx;


public ref class XmlCertVault sealed
{
#include "friendDecls.h"
		
	private:
    CkXmlCertVaultW *m_impl;

	public:
	virtual ~XmlCertVault(void);
	XmlCertVault(void);
	//XmlCertVault(Platform::IntPtr p);

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
	property Platform::String ^MasterPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddCert(Cert ^cert);

	Boolean AddCertBinary(Windows::Foundation::Collections::IVector<uint8>^certBytes);

	Boolean AddCertChain(CertChain ^certChain);

	Boolean AddCertEncoded(Platform::String ^encodedBytes, Platform::String ^encoding);

	Boolean AddCertFile(Platform::String ^path);

	Boolean AddCertString(Platform::String ^certData);

	Boolean AddPemFile(Platform::String ^path, Platform::String ^password);

	Boolean AddPfx(Pfx ^pfx);

	Boolean AddPfxBinary(Windows::Foundation::Collections::IVector<uint8>^pfxBytes, Platform::String ^password);

	Boolean AddPfxEncoded(Platform::String ^encodedBytes, Platform::String ^encoding, Platform::String ^password);

	Boolean AddPfxFile(Platform::String ^path, Platform::String ^password);

	Platform::String ^GetXml(void);

	Boolean LoadXml(Platform::String ^xml);

	Boolean LoadXmlFile(Platform::String ^path);

	Boolean SaveXml(Platform::String ^path);



};





}


