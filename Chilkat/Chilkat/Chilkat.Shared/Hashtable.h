
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHashtableW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Hashtable sealed
{
#include "friendDecls.h"
		
	private:
    CkHashtableW *m_impl;

	public:
	virtual ~Hashtable(void);
	Hashtable(void);
	//Hashtable(Platform::IntPtr p);

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

	Boolean AddInt(Platform::String ^key, int value);

	Boolean AddStr(Platform::String ^key, Platform::String ^value);

	void Clear(void);

	Boolean ClearWithNewCapacity(int capacity);

	Boolean Contains(Platform::String ^key);

	int LookupInt(Platform::String ^key);

	Platform::String ^LookupStr(Platform::String ^key);

	Boolean Remove(Platform::String ^key);



};





}


