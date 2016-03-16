
// This header is generated for Chilkat v9.5.0

#pragma once

class CkJsonObjectW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class JsonArray;


public ref class JsonObject sealed
{
#include "friendDecls.h"
		
	private:
    CkJsonObjectW *m_impl;

	public:
	virtual ~JsonObject(void);
	JsonObject(void);
	//JsonObject(Platform::IntPtr p);

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
	property Boolean EmitCompact
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitCrLf
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 I
	{
		int32 get();
		void set(int32);
	}
	property int32 J
	{
		int32 get();
		void set(int32);
	}
	property int32 K
	{
		int32 get();
		void set(int32);
	}
	property int32 Size
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddArrayAt(int index, Platform::String ^name);

	Boolean AddBoolAt(int index, Platform::String ^name, Boolean value);

	Boolean AddIntAt(int index, Platform::String ^name, int value);

	Boolean AddNullAt(int index, Platform::String ^name);

	Boolean AddNumberAt(int index, Platform::String ^name, Platform::String ^numericStr);

	Boolean AddObjectAt(int index, Platform::String ^name);

	Boolean AddStringAt(int index, Platform::String ^name, Platform::String ^value);

	JsonArray ^ArrayAt(int index);

	JsonArray ^ArrayOf(Platform::String ^jsonPath);

	Boolean BoolAt(int index);

	Boolean BoolOf(Platform::String ^jsonPath);

	Boolean Delete(Platform::String ^name);

	Boolean DeleteAt(int index);

	Platform::String ^Emit(void);

	JsonObject ^GetDocRoot(void);

	int IndexOf(Platform::String ^name);

	int IntAt(int index);

	int IntOf(Platform::String ^jsonPath);

	Boolean IsNullAt(int index);

	Boolean IsNullOf(Platform::String ^jsonPath);

	Boolean Load(Platform::String ^json);

	Boolean LoadFile(Platform::String ^path);

	Platform::String ^NameAt(int index);

	JsonObject ^ObjectAt(int index);

	JsonObject ^ObjectOf(Platform::String ^jsonPath);

	Boolean Rename(Platform::String ^oldName, Platform::String ^newName);

	Boolean RenameAt(int index, Platform::String ^name);

	Boolean SetBoolAt(int index, Boolean value);

	Boolean SetBoolOf(Platform::String ^jsonPath, Boolean value);

	Boolean SetIntAt(int index, int value);

	Boolean SetIntOf(Platform::String ^jsonPath, int value);

	Boolean SetNullAt(int index);

	Boolean SetNullOf(Platform::String ^jsonPath);

	Boolean SetNumberAt(int index, Platform::String ^value);

	Boolean SetNumberOf(Platform::String ^jsonPath, Platform::String ^value);

	Boolean SetStringAt(int index, Platform::String ^value);

	Boolean SetStringOf(Platform::String ^jsonPath, Platform::String ^value);

	int SizeOfArray(Platform::String ^jsonPath);

	Platform::String ^StringAt(int index);

	Platform::String ^StringOf(Platform::String ^jsonPath);



};





}


