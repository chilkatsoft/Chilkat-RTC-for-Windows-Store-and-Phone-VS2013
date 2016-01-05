
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDsaW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Dsa sealed
{
#include "friendDecls.h"
		
	private:
    CkDsaW *m_impl;

	public:
	virtual ~Dsa(void);
	Dsa(void);
	//Dsa(Platform::IntPtr p);

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
	property int32 GroupSize
	{
		int32 get();
		void set(int32);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^Hash
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}
	property Platform::String ^HexG
	{
		Platform::String ^get();
	}
	property Platform::String ^HexP
	{
		Platform::String ^get();
	}
	property Platform::String ^HexQ
	{
		Platform::String ^get();
	}
	property Platform::String ^HexX
	{
		Platform::String ^get();
	}
	property Platform::String ^HexY
	{
		Platform::String ^get();
	}
	property Windows::Foundation::Collections::IVector<uint8> ^Signature
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean FromDer(Windows::Foundation::Collections::IVector<uint8>^derData);

	Boolean FromDerFile(Platform::String ^path);

	Boolean FromEncryptedPem(Platform::String ^password, Platform::String ^pemData);

	Boolean FromPem(Platform::String ^pemData);

	Boolean FromPublicDer(Windows::Foundation::Collections::IVector<uint8>^derData);

	Boolean FromPublicDerFile(Platform::String ^path);

	Boolean FromPublicPem(Platform::String ^pemData);

	Boolean FromXml(Platform::String ^xmlKey);

	Boolean GenKey(int numBits);

	Boolean GenKeyFromParamsDer(Windows::Foundation::Collections::IVector<uint8>^derBytes);

	Boolean GenKeyFromParamsDerFile(Platform::String ^path);

	Boolean GenKeyFromParamsPem(Platform::String ^pem);

	Boolean GenKeyFromParamsPemFile(Platform::String ^path);

	Platform::String ^GetEncodedHash(Platform::String ^encoding);

	Platform::String ^GetEncodedSignature(Platform::String ^encoding);

	Platform::String ^LoadText(Platform::String ^path);

	Boolean SaveText(Platform::String ^strToSave, Platform::String ^path);

	Boolean SetEncodedHash(Platform::String ^encoding, Platform::String ^encodedHash);

	Boolean SetEncodedSignature(Platform::String ^encoding, Platform::String ^encodedSig);

	Boolean SetEncodedSignatureRS(Platform::String ^encoding, Platform::String ^encodedR, Platform::String ^encodedS);

	Boolean SetKeyExplicit(int groupSizeInBytes, Platform::String ^pHex, Platform::String ^qHex, Platform::String ^gHex, Platform::String ^xHex);

	Boolean SetPubKeyExplicit(int groupSizeInBytes, Platform::String ^pHex, Platform::String ^qHex, Platform::String ^gHex, Platform::String ^yHex);

	Boolean SignHash(void);

	Windows::Foundation::Collections::IVector<uint8>^ToDer(void);

	Boolean ToDerFile(Platform::String ^path);

	Platform::String ^ToEncryptedPem(Platform::String ^password);

	Platform::String ^ToPem(void);

	Windows::Foundation::Collections::IVector<uint8>^ToPublicDer(void);

	Boolean ToPublicDerFile(Platform::String ^path);

	Platform::String ^ToPublicPem(void);

	Platform::String ^ToXml(Boolean bPublicOnly);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean Verify(void);

	Boolean VerifyKey(void);



};





}


