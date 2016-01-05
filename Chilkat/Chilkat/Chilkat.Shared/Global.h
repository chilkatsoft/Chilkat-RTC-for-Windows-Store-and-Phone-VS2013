
// This header is generated for Chilkat v9.5.0

#pragma once

class CkGlobalW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Global sealed
{
#include "friendDecls.h"
		
	private:
    CkGlobalW *m_impl;

	public:
	virtual ~Global(void);
	Global(void);
	//Global(Platform::IntPtr p);

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
	property int32 AnsiCodePage
	{
		int32 get();
		void set(int32);
	}
	property int32 DefaultNtlmVersion
	{
		int32 get();
		void set(int32);
	}
	property Boolean DefaultUtf8
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 DnsTimeToLive
	{
		int32 get();
		void set(int32);
	}
	property Boolean EnableDnsCaching
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 MaxThreads
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^ThreadPoolLogPath
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean DnsClearCache(void);

	Boolean UnlockBundle(Platform::String ^bundleUnlockCode);



};





}


