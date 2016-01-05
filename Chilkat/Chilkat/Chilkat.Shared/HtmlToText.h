
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHtmlToTextW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class HtmlToText sealed
{
#include "friendDecls.h"
		
	private:
    CkHtmlToTextW *m_impl;

	public:
	virtual ~HtmlToText(void);
	HtmlToText(void);
	//HtmlToText(Platform::IntPtr p);

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
	property Boolean DecodeHtmlEntities
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 RightMargin
	{
		int32 get();
		void set(int32);
	}
	property Boolean SuppressLinks
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean IsUnlocked(void);

	Platform::String ^ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset);

	Platform::String ^ToText(Platform::String ^html);

	Boolean UnlockComponent(Platform::String ^code);

	Boolean WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset);



};





}


