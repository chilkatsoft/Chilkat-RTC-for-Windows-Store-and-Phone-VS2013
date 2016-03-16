
// This header is generated for Chilkat v9.5.0

#pragma once

class CkJsonArrayW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class JsonObject;


public ref class JsonArray sealed
{
#include "friendDecls.h"
		
	private:
    CkJsonArrayW *m_impl;

	public:
	virtual ~JsonArray(void);
	JsonArray(void);
	//JsonArray(Platform::IntPtr p);

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
	property int32 Size
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddArrayAt(int index);

	Boolean AddBoolAt(int index, Boolean value);

	Boolean AddIntAt(int index, int value);

	Boolean AddNullAt(int index);

	Boolean AddNumberAt(int index, Platform::String ^numericStr);

	Boolean AddObjectAt(int index);

	Boolean AddStringAt(int index, Platform::String ^value);

	JsonArray ^ArrayAt(int index);

	Boolean BoolAt(int index);

	Boolean DeleteAt(int index);

	int IntAt(int index);

	Boolean IsNullAt(int index);

	JsonObject ^ObjectAt(int index);

	Boolean SetBoolAt(int index, Boolean value);

	Boolean SetIntAt(int index, int value);

	Boolean SetNullAt(int index);

	Boolean SetNumberAt(int index, Platform::String ^value);

	Boolean SetStringAt(int index, Platform::String ^value);

	Platform::String ^StringAt(int index);



};





}


