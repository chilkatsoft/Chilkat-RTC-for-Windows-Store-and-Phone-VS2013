
// This header is generated for Chilkat v9.5.0

#pragma once

class CkHtmlToXmlW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class HtmlToXml sealed
{
#include "friendDecls.h"
		
	private:
    CkHtmlToXmlW *m_impl;

	public:
	virtual ~HtmlToXml(void);
	HtmlToXml(void);
	//HtmlToXml(Platform::IntPtr p);

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
	property Boolean DropCustomTags
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Html
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 Nbsp
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^XmlCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean ConvertFile(Platform::String ^inHtmlPath, Platform::String ^destXmlPath);

	void DropTagType(Platform::String ^tagName);

	void DropTextFormattingTags(void);

	Boolean IsUnlocked(void);

	Windows::Foundation::Collections::IVector<uint8>^ReadFile(Platform::String ^path);

	Platform::String ^ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset);

	void SetHtmlBytes(Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean SetHtmlFromFile(Platform::String ^filename);

	Platform::String ^ToXml(void);

	void UndropTagType(Platform::String ^tagName);

	void UndropTextFormattingTags(void);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean WriteFile(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^fileData);

	Boolean WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset);



};





}


