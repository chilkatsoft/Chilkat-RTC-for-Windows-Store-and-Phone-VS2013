
// This header is generated for Chilkat v9.5.0

#pragma once

class CkBounceW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Email;


public ref class Bounce sealed
{
#include "friendDecls.h"
		
	private:
    CkBounceW *m_impl;

	public:
	virtual ~Bounce(void);
	Bounce(void);
	//Bounce(Platform::IntPtr p);

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
	property Platform::String ^BounceAddress
	{
		Platform::String ^get();
	}
	property Platform::String ^BounceData
	{
		Platform::String ^get();
	}
	property int32 BounceType
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean ExamineEmail(Email ^email);

	Boolean ExamineEml(Platform::String ^emlFilename);

	Boolean ExamineMime(Platform::String ^mimeText);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};





}


