
// This header is generated for Chilkat v9.5.0

#pragma once

class CkNtlmW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Ntlm sealed
{
#include "friendDecls.h"
		
	private:
    CkNtlmW *m_impl;

	public:
	virtual ~Ntlm(void);
	Ntlm(void);
	//Ntlm(Platform::IntPtr p);

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
	property Platform::String ^ClientChallenge
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DnsComputerName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DnsDomainName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Domain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodingMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Flags
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^NetBiosComputerName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^NetBiosDomainName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 NtlmVersion
	{
		int32 get();
		void set(int32);
	}
	property int32 OemCodePage
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Password
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ServerChallenge
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^TargetName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^UserName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Workstation
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean CompareType3(Platform::String ^msg1, Platform::String ^msg2);

	Platform::String ^GenType1(void);

	Platform::String ^GenType2(Platform::String ^type1Msg);

	Platform::String ^GenType3(Platform::String ^type2Msg);

	Boolean LoadType3(Platform::String ^type3Msg);

	Platform::String ^ParseType1(Platform::String ^type1Msg);

	Platform::String ^ParseType2(Platform::String ^type2Msg);

	Platform::String ^ParseType3(Platform::String ^type3Msg);

	Boolean SetFlag(Platform::String ^flagLetter, Boolean onOrOff);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};





}


