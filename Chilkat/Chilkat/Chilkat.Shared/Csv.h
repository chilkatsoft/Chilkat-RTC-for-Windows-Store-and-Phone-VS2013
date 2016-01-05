
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCsvW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Csv sealed
{
#include "friendDecls.h"
		
	private:
    CkCsvW *m_impl;

	public:
	virtual ~Csv(void);
	Csv(void);
	//Csv(Platform::IntPtr p);

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
	property Boolean AutoTrim
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Crlf
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Delimiter
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EscapeBackslash
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean HasColumnNames
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumColumns
	{
		int32 get();
	}
	property int32 NumRows
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean DeleteColumn(int index);

	Boolean DeleteColumnByName(Platform::String ^columnName);

	Boolean DeleteRow(int index);

	Platform::String ^GetCell(int row, int col);

	Platform::String ^GetCellByName(int row, Platform::String ^columnName);

	Platform::String ^GetColumnName(int index);

	int GetIndex(Platform::String ^columnName);

	int GetNumCols(int row);

	Boolean LoadFile(Platform::String ^path);

	Boolean LoadFile2(Platform::String ^path, Platform::String ^charset);

	Boolean LoadFromString(Platform::String ^csvData);

	Boolean RowMatches(int row, Platform::String ^matchPattern, Boolean bCaseSensitive);

	Boolean SaveFile(Platform::String ^path);

	Boolean SaveFile2(Platform::String ^path, Platform::String ^charset);

	Platform::String ^SaveToString(void);

	Boolean SetCell(int row, int col, Platform::String ^content);

	Boolean SetCellByName(int row, Platform::String ^columnName, Platform::String ^content);

	Boolean SetColumnName(int index, Platform::String ^columnName);

	Boolean SortByColumn(Platform::String ^columnName, Boolean bAscending, Boolean bCaseSensitive);



};





}


