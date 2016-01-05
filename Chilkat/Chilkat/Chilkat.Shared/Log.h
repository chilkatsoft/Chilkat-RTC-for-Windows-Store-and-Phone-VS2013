
// This header is generated for Chilkat v9.5.0

#pragma once

class CkLogW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Log sealed
{
#include "friendDecls.h"
		
	private:
    CkLogW *m_impl;

	public:
	virtual ~Log(void);
	Log(void);
	//Log(Platform::IntPtr p);

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


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void Clear(Platform::String ^initialTag);

	void EnterContext(Platform::String ^tag);

	void LeaveContext(void);

	void LogData(Platform::String ^tag, Platform::String ^message);

	void LogDataBase64(Platform::String ^tag, Windows::Foundation::Collections::IVector<uint8>^data);

	void LogDataHex(Platform::String ^tag, Windows::Foundation::Collections::IVector<uint8>^data);

	void LogDataMax(Platform::String ^tag, Platform::String ^message, int maxNumChars);

	void LogDateTime(Platform::String ^tag, Boolean gmt);

	void LogError(Platform::String ^message);

	void LogInfo(Platform::String ^message);

	void LogInt(Platform::String ^tag, int value);

	void LogInt64(Platform::String ^tag, int64 value);

	void LogTimestamp(Platform::String ^tag);



};





}


