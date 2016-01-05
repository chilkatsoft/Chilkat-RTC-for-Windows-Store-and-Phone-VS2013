
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSshKeyW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class SshKey sealed
{
#include "friendDecls.h"
		
	private:
    CkSshKeyW *m_impl;

	public:
	virtual ~SshKey(void);
	SshKey(void);
	//SshKey(Platform::IntPtr p);

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
	property Platform::String ^Comment
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean IsDsaKey
	{
		Boolean get();
	}
	property Boolean IsPrivateKey
	{
		Boolean get();
	}
	property Boolean IsRsaKey
	{
		Boolean get();
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean FromOpenSshPrivateKey(Platform::String ^keyStr);

	Boolean FromOpenSshPublicKey(Platform::String ^keyStr);

	Boolean FromPuttyPrivateKey(Platform::String ^keyStr);

	Boolean FromRfc4716PublicKey(Platform::String ^keyStr);

	Boolean FromXml(Platform::String ^xmlKey);

	Platform::String ^GenFingerprint(void);

	Boolean GenerateDsaKey(int numBits);

	Boolean GenerateRsaKey(int numBits, int exponent);

	Platform::String ^LoadText(Platform::String ^filename);

	Boolean SaveText(Platform::String ^strToSave, Platform::String ^filename);

	Platform::String ^ToOpenSshPrivateKey(Boolean bEncrypt);

	Platform::String ^ToOpenSshPublicKey(void);

	Platform::String ^ToPuttyPrivateKey(Boolean bEncrypt);

	Platform::String ^ToRfc4716PublicKey(void);

	Platform::String ^ToXml(void);



};





}


