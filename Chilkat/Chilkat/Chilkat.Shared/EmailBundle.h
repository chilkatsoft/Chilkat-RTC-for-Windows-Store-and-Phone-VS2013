
// This header is generated for Chilkat v9.5.0

#pragma once

class CkEmailBundleW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Email;
	ref class StringArray;


public ref class EmailBundle sealed
{
#include "friendDecls.h"
		
	private:
    CkEmailBundleW *m_impl;

	public:
	virtual ~EmailBundle(void);
	EmailBundle(void);
	//EmailBundle(Platform::IntPtr p);

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
	property int32 MessageCount
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddEmail(Email ^email);

	Email ^FindByHeader(Platform::String ^name, Platform::String ^value);

	Email ^GetEmail(int index);

	StringArray ^GetUidls(void);

	Platform::String ^GetXml(void);

	Boolean LoadXml(Platform::String ^filename);

	Boolean LoadXmlString(Platform::String ^xmlStr);

	Boolean RemoveEmail(Email ^email);

	Boolean RemoveEmailByIndex(int index);

	Boolean SaveXml(Platform::String ^filename);

	void SortByDate(Boolean ascending);

	void SortByRecipient(Boolean ascending);

	void SortBySender(Boolean ascending);

	void SortBySubject(Boolean ascending);



};





}


