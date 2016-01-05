
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCharsetW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Charset sealed
{
#include "friendDecls.h"
		
	private:
    CkCharsetW *m_impl;

	public:
	virtual ~Charset(void);
	Charset(void);
	//Charset(Platform::IntPtr p);

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
	property Platform::String ^AltToCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ErrorAction
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^FromCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^LastInputAsHex
	{
		Platform::String ^get();
	}
	property Platform::String ^LastInputAsQP
	{
		Platform::String ^get();
	}
	property Platform::String ^LastOutputAsHex
	{
		Platform::String ^get();
	}
	property Platform::String ^LastOutputAsQP
	{
		Platform::String ^get();
	}
	property Boolean SaveLast
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ToCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	int CharsetToCodePage(Platform::String ^charsetName);

	Platform::String ^CodePageToCharset(int codePage);

	Windows::Foundation::Collections::IVector<uint8>^ConvertData(Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean ConvertFile(Platform::String ^srcPath, Platform::String ^destPath);

	Boolean ConvertFileNoPreamble(Platform::String ^srcPath, Platform::String ^destPath);

	Windows::Foundation::Collections::IVector<uint8>^ConvertFromUnicode(Platform::String ^inData);

	Windows::Foundation::Collections::IVector<uint8>^ConvertFromUtf16(Windows::Foundation::Collections::IVector<uint8>^uniData);

	Windows::Foundation::Collections::IVector<uint8>^ConvertHtml(Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean ConvertHtmlFile(Platform::String ^srcPath, Platform::String ^destPath);

	Platform::String ^ConvertToUnicode(Windows::Foundation::Collections::IVector<uint8>^inData);

	Windows::Foundation::Collections::IVector<uint8>^ConvertToUtf16(Windows::Foundation::Collections::IVector<uint8>^mbData);

	Platform::String ^EntityEncodeDec(Platform::String ^str);

	Platform::String ^EntityEncodeHex(Platform::String ^str);

	Platform::String ^GetHtmlCharset(Windows::Foundation::Collections::IVector<uint8>^inData);

	Platform::String ^GetHtmlFileCharset(Platform::String ^htmlFilename);

	Platform::String ^HtmlDecodeToStr(Platform::String ^inStr);

	Windows::Foundation::Collections::IVector<uint8>^HtmlEntityDecode(Windows::Foundation::Collections::IVector<uint8>^inHtml);

	Boolean HtmlEntityDecodeFile(Platform::String ^inFilename, Platform::String ^destPath);

	Boolean IsUnlocked(void);

	Platform::String ^LowerCase(Platform::String ^inStr);

	Windows::Foundation::Collections::IVector<uint8>^ReadFile(Platform::String ^filename);

	Platform::String ^ReadFileToString(Platform::String ^filename, Platform::String ^srcCharset);

	void SetErrorBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	void SetErrorString(Platform::String ^str, Platform::String ^charset);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Platform::String ^UpperCase(Platform::String ^inStr);

	Platform::String ^UrlDecodeStr(Platform::String ^inStr);

	Boolean VerifyData(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean VerifyFile(Platform::String ^charset, Platform::String ^filename);

	Boolean WriteFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData);

	Boolean WriteStringToFile(Platform::String ^str, Platform::String ^filename, Platform::String ^charset);



};





}


