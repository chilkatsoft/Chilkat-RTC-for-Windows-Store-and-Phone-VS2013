
// This header is generated for Chilkat v9.5.0

#pragma once

class CkPrngW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Prng sealed
{
#include "friendDecls.h"
		
	private:
    CkPrngW *m_impl;

	public:
	virtual ~Prng(void);
	Prng(void);
	//Prng(Platform::IntPtr p);

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
	property Platform::String ^PrngName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddEntropy(Platform::String ^entropy, Platform::String ^encoding);

	Boolean AddEntropyBytes(Windows::Foundation::Collections::IVector<uint8>^entropy);

	Platform::String ^ExportEntropy(void);

	Platform::String ^GenRandom(int numBytes, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^GenRandomBytes(int numBytes);

	Platform::String ^GetEntropy(int numBytes, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^GetEntropyBytes(int numBytes);

	Boolean ImportEntropy(Platform::String ^entropy);

	int RandomInt(int low, int high);

	Platform::String ^RandomPassword(int length, Boolean mustIncludeDigit, Boolean upperAndLowercase, Platform::String ^mustHaveOneOf, Platform::String ^excludeChars);

	Platform::String ^RandomString(int length, Boolean bDigits, Boolean bLower, Boolean bUpper);



};





}


