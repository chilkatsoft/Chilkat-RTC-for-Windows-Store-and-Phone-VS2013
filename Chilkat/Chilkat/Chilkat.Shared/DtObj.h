
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDtObjW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class DtObj sealed
{
#include "friendDecls.h"
		
	private:
    CkDtObjW *m_impl;

	public:
	virtual ~DtObj(void);
	DtObj(void);
	//DtObj(Platform::IntPtr p);

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
	property int32 Day
	{
		int32 get();
		void set(int32);
	}
	property int32 Hour
	{
		int32 get();
		void set(int32);
	}
	property int32 Minute
	{
		int32 get();
		void set(int32);
	}
	property int32 Month
	{
		int32 get();
		void set(int32);
	}
	property int32 Second
	{
		int32 get();
		void set(int32);
	}
	property int32 StructTmMonth
	{
		int32 get();
		void set(int32);
	}
	property int32 StructTmYear
	{
		int32 get();
		void set(int32);
	}
	property Boolean Utc
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Year
	{
		int32 get();
		void set(int32);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void DeSerialize(Platform::String ^serializedDtObj);

	Platform::String ^Serialize(void);



};





}


