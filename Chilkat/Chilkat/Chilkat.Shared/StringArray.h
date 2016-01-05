
// This header is generated for Chilkat v9.5.0

#pragma once

class CkStringArrayW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class StringArray sealed
{
#include "friendDecls.h"
		
	private:
    CkStringArrayW *m_impl;

	public:
	virtual ~StringArray(void);
	StringArray(void);
	//StringArray(Platform::IntPtr p);

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
	property Boolean Crlf
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 Length
	{
		int32 get();
	}
	property Boolean Trim
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Unique
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean Append(Platform::String ^str);

	Boolean AppendSerialized(Platform::String ^encodedStr);

	void Clear(void);

	Boolean Contains(Platform::String ^str);

	int Find(Platform::String ^str, int firstIndex);

	int FindFirstMatch(Platform::String ^str, int firstIndex);

	Platform::String ^GetString(int index);

	int GetStringLen(int index);

	void InsertAt(int index, Platform::String ^str);

	Platform::String ^LastString(void);

	Boolean LoadFromFile(Platform::String ^filename);

	Boolean LoadFromFile2(Platform::String ^filename, Platform::String ^charset);

	void LoadFromText(Platform::String ^str);

	Platform::String ^Pop(void);

	void Prepend(Platform::String ^str);

	void Remove(Platform::String ^str);

	Boolean RemoveAt(int index);

	void ReplaceAt(int index, Platform::String ^str);

	Boolean SaveNthToFile(int index, Platform::String ^filename);

	Boolean SaveToFile(Platform::String ^filename);

	Boolean SaveToFile2(Platform::String ^filename, Platform::String ^charset);

	Platform::String ^SaveToText(void);

	Platform::String ^Serialize(void);

	void Sort(Boolean ascending);

	void SplitAndAppend(Platform::String ^str, Platform::String ^boundary);

	void Subtract(StringArray ^sa);

	void Union(StringArray ^sa);



};





}


