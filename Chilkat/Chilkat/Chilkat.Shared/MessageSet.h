
// This header is generated for Chilkat v9.5.0

#pragma once

class CkMessageSetW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class MessageSet sealed
{
#include "friendDecls.h"
		
	private:
    CkMessageSetW *m_impl;

	public:
	virtual ~MessageSet(void);
	MessageSet(void);
	//MessageSet(Platform::IntPtr p);

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
	property int32 Count
	{
		int32 get();
	}
	property Boolean HasUids
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean ContainsId(int id);

	Boolean FromCompactString(Platform::String ^str);

	int GetId(int index);

	void InsertId(int id);

	void RemoveId(int id);

	Platform::String ^ToCommaSeparatedStr(void);

	Platform::String ^ToCompactString(void);



};





}


