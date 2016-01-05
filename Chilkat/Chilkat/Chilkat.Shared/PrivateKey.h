
// This header is generated for Chilkat v9.5.0

#pragma once

class CkPrivateKeyW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class PublicKey;


public ref class PrivateKey sealed
{
#include "friendDecls.h"
		
	private:
    CkPrivateKeyW *m_impl;

	public:
	virtual ~PrivateKey(void);
	PrivateKey(void);
	//PrivateKey(Platform::IntPtr p);

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
	property int32 BitLength
	{
		int32 get();
	}
	property Platform::String ^KeyType
	{
		Platform::String ^get();
	}
	property Platform::String ^Pkcs8EncryptAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Platform::String ^GetPkcs1ENC(Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^GetPkcs8(void);

	Platform::String ^GetPkcs8ENC(Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^GetPkcs8Encrypted(Platform::String ^password);

	Platform::String ^GetPkcs8EncryptedENC(Platform::String ^encoding, Platform::String ^password);

	Platform::String ^GetPkcs8EncryptedPem(Platform::String ^password);

	Platform::String ^GetPkcs8Pem(void);

	PublicKey ^GetPublicKey(void);

	Windows::Foundation::Collections::IVector<uint8>^GetRsaDer(void);

	Platform::String ^GetRsaPem(void);

	Platform::String ^GetXml(void);

	Boolean LoadEncryptedPem(Platform::String ^pemStr, Platform::String ^password);

	Boolean LoadEncryptedPemFile(Platform::String ^path, Platform::String ^password);

	Boolean LoadPem(Platform::String ^str);

	Boolean LoadPemFile(Platform::String ^path);

	Boolean LoadPkcs8(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadPkcs8Encrypted(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^password);

	Boolean LoadPkcs8EncryptedFile(Platform::String ^path, Platform::String ^password);

	Boolean LoadPkcs8File(Platform::String ^path);

	Boolean LoadRsaDer(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadRsaDerFile(Platform::String ^path);

	Boolean LoadXml(Platform::String ^xml);

	Boolean LoadXmlFile(Platform::String ^path);

	Boolean SavePkcs8EncryptedFile(Platform::String ^password, Platform::String ^path);

	Boolean SavePkcs8EncryptedPemFile(Platform::String ^password, Platform::String ^path);

	Boolean SavePkcs8File(Platform::String ^path);

	Boolean SavePkcs8PemFile(Platform::String ^path);

	Boolean SaveRsaDerFile(Platform::String ^path);

	Boolean SaveRsaPemFile(Platform::String ^path);

	Boolean SaveXmlFile(Platform::String ^path);



};





}


