
// This header is generated for Chilkat v9.5.0

#pragma once

class CkEccW;

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
	ref class Prng;
	ref class PublicKey;


public ref class Ecc sealed
{
#include "friendDecls.h"
		
	private:
    CkEccW *m_impl;

	public:
	virtual ~Ecc(void);
	Ecc(void);
	//Ecc(Platform::IntPtr p);

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


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	PrivateKey ^GenEccKey(Platform::String ^curveName, Prng ^prng);

	Platform::String ^SharedSecretENC(PrivateKey ^privKey, PublicKey ^pubKey, Platform::String ^encoding);

	Platform::String ^SignHashENC(Platform::String ^encodedHash, Platform::String ^encoding, PrivateKey ^privkey, Prng ^prng);

	int VerifyHashENC(Platform::String ^encodedHash, Platform::String ^encodedSig, Platform::String ^encoding, PublicKey ^pubkey);

	PrivateKey ^GenEccKey2(Platform::String ^curveName, Platform::String ^encodedK, Platform::String ^encoding);



};





}


