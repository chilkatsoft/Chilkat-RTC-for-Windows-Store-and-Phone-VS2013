
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDirTreeW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class DirTree sealed
{
#include "friendDecls.h"
		
	private:
    CkDirTreeW *m_impl;

	public:
	virtual ~DirTree(void);
	DirTree(void);
	//DirTree(Platform::IntPtr p);

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
	property Platform::String ^BaseDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean DoneIterating
	{
		Boolean get();
	}
	property int32 FileSize32
	{
		int32 get();
	}
	property int64 FileSize64
	{
		int64 get();
	}
	property Platform::String ^FullPath
	{
		Platform::String ^get();
	}
	property Platform::String ^FullUncPath
	{
		Platform::String ^get();
	}
	property Boolean IsDirectory
	{
		Boolean get();
	}
	property Boolean Recurse
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^RelativePath
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AdvancePosition(void);

	Boolean BeginIterate(void);



};





}


