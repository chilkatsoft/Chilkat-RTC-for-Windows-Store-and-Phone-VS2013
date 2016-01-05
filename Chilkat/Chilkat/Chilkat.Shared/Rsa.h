
// This header is generated for Chilkat v9.5.0

#pragma once

class CkRsaW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class PrivateKey;
	ref class PublicKey;


public ref class Rsa sealed
{
#include "friendDecls.h"
		
	private:
    CkRsaW *m_impl;

	public:
	virtual ~Rsa(void);
	Rsa(void);
	//Rsa(Platform::IntPtr p);

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
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodingMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean LittleEndian
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NoUnpad
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumBits
	{
		int32 get();
	}
	property Platform::String ^OaepHash
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean OaepPadding
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Windows::Foundation::Collections::IVector<uint8>^DecryptBytes(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^DecryptBytesENC(Platform::String ^str, Boolean bUsePrivateKey);

	Platform::String ^DecryptString(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey);

	Platform::String ^DecryptStringENC(Platform::String ^str, Boolean bUsePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^EncryptBytes(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey);

	Platform::String ^EncryptBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Boolean bUsePrivateKey);

	Windows::Foundation::Collections::IVector<uint8>^EncryptString(Platform::String ^str, Boolean bUsePrivateKey);

	Platform::String ^EncryptStringENC(Platform::String ^str, Boolean bUsePrivateKey);

	Platform::String ^ExportPrivateKey(void);

	PrivateKey ^ExportPrivateKeyObj(void);

	Platform::String ^ExportPublicKey(void);

	PublicKey ^ExportPublicKeyObj(void);

	Boolean GenerateKey(int numBits);

	Boolean ImportPrivateKey(Platform::String ^xml);

	Boolean ImportPrivateKeyObj(PrivateKey ^key);

	Boolean ImportPublicKey(Platform::String ^xml);

	Boolean ImportPublicKeyObj(PublicKey ^key);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslSignBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^OpenSslSignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslSignString(Platform::String ^str);

	Platform::String ^OpenSslSignStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslVerifyBytes(Windows::Foundation::Collections::IVector<uint8>^signature);

	Windows::Foundation::Collections::IVector<uint8>^OpenSslVerifyBytesENC(Platform::String ^str);

	Platform::String ^OpenSslVerifyString(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^OpenSslVerifyStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^SignBytes(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg);

	Platform::String ^SignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg);

	Windows::Foundation::Collections::IVector<uint8>^SignHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg);

	Platform::String ^SignHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg);

	Windows::Foundation::Collections::IVector<uint8>^SignString(Platform::String ^str, Platform::String ^hashAlg);

	Platform::String ^SignStringENC(Platform::String ^str, Platform::String ^hashAlg);

	Platform::String ^SnkToXml(Platform::String ^filename);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean VerifyBytes(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sig);

	Boolean VerifyBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^hashAlg, Platform::String ^encodedSig);

	Boolean VerifyHash(Windows::Foundation::Collections::IVector<uint8>^hashBytes, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sigBytes);

	Boolean VerifyHashENC(Platform::String ^encodedHash, Platform::String ^hashAlg, Platform::String ^encodedSig);

	Boolean VerifyPrivateKey(Platform::String ^xml);

	Boolean VerifyString(Platform::String ^str, Platform::String ^hashAlg, Windows::Foundation::Collections::IVector<uint8>^sig);

	Boolean VerifyStringENC(Platform::String ^str, Platform::String ^hashAlg, Platform::String ^sig);



};





}


