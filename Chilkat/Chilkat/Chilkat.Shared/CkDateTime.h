
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDateTimeW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class DtObj;


public ref class CkDateTime sealed
{
#include "friendDecls.h"
		
	private:
    CkDateTimeW *m_impl;

	public:
	virtual ~CkDateTime(void);
	CkDateTime(void);
	//CkDateTime(Platform::IntPtr p);

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
	property int32 IsDst
	{
		int32 get();
	}
	property int32 UtcOffset
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddDays(int numDays);

	void DeSerialize(Platform::String ^serializedDateTime);

	int64 GetAsDateTimeTicks(Boolean bLocal);

	uint32 GetAsDosDate(Boolean bLocal);

	double GetAsOleDate(Boolean bLocal);

	Platform::String ^GetAsRfc822(Boolean bLocal);

	int GetAsUnixTime(Boolean bLocal);

	int64 GetAsUnixTime64(Boolean bLocal);

	DtObj ^GetDtObj(Boolean bLocal);

	Platform::String ^Serialize(void);

	void SetFromCurrentSystemTime(void);

	void SetFromDateTimeTicks(Boolean bLocal, int64 ticks);

	void SetFromDosDate(Boolean bLocal, uint32 t);

	Boolean SetFromDtObj(DtObj ^dt);

	void SetFromNtpTime(int ntpSeconds);

	void SetFromOleDate(Boolean bLocal, double dt);

	Boolean SetFromRfc822(Platform::String ^rfc822Str);

	void SetFromUnixTime(Boolean bLocal, int t);

	void SetFromUnixTime64(Boolean bLocal, int64 t);



};





}


