
// This header is generated for Chilkat v9.5.0

#pragma once

class CkPfxW;

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
	ref class PrivateKey;
	ref class CertChain;
	ref class JavaKeyStore;
	ref class XmlCertVault;


public ref class Pfx sealed
{
#include "friendDecls.h"
		
	private:
    CkPfxW *m_impl;

	public:
	virtual ~Pfx(void);
	Pfx(void);
	//Pfx(Platform::IntPtr p);

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
	property int32 NumCerts
	{
		int32 get();
	}
	property int32 NumPrivateKeys
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddCert(Cert ^cert, Boolean includeChain);

	Boolean AddPrivateKey(PrivateKey ^privKey, CertChain ^certChain);

	Cert ^GetCert(int index);

	PrivateKey ^GetPrivateKey(int index);

	Boolean LoadPem(Platform::String ^pemStr, Platform::String ^password);

	Boolean LoadPfxBytes(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean LoadPfxEncoded(Platform::String ^encodedData, Platform::String ^encoding, Platform::String ^password);

	Boolean LoadPfxFile(Platform::String ^path, Platform::String ^password);

	Windows::Foundation::Collections::IVector<uint8>^ToBinary(Platform::String ^password);

	Platform::String ^ToEncodedString(Platform::String ^password, Platform::String ^encoding);

	Boolean ToFile(Platform::String ^password, Platform::String ^path);

	JavaKeyStore ^ToJavaKeyStore(Platform::String ^alias, Platform::String ^password);

	Platform::String ^ToPem(void);

	Platform::String ^ToPemEx(Boolean extendedAttrs, Boolean noKeys, Boolean noCerts, Boolean noCaCerts, Platform::String ^encryptAlg, Platform::String ^password);

	Boolean UseCertVault(XmlCertVault ^vault);



};





}


