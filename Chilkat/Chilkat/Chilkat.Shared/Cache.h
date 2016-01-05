
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCacheW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class Cache sealed
{
#include "friendDecls.h"
		
	private:
    CkCacheW *m_impl;

	public:
	virtual ~Cache(void);
	Cache(void);
	//Cache(Platform::IntPtr p);

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
	property Platform::String ^LastEtagFetched
	{
		Platform::String ^get();
	}
	property Platform::String ^LastExpirationFetchedStr
	{
		Platform::String ^get();
	}
	property Boolean LastHitExpired
	{
		Boolean get();
	}
	property Platform::String ^LastKeyFetched
	{
		Platform::String ^get();
	}
	property int32 Level
	{
		int32 get();
		void set(int32);
	}
	property int32 NumRoots
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddRoot(Platform::String ^path);

	int DeleteAll(void);

	int DeleteAllExpired(void);

	Boolean DeleteFromCache(Platform::String ^url);

	int DeleteOlderDt(Chilkat::CkDateTime ^dt);

	int DeleteOlderStr(Platform::String ^dateTimeStr);

	Windows::Foundation::Collections::IVector<uint8>^FetchFromCache(Platform::String ^url);

	Platform::String ^FetchText(Platform::String ^key);

	Platform::String ^GetEtag(Platform::String ^url);

	CkDateTime ^GetExpirationDt(Platform::String ^key);

	Platform::String ^GetExpirationStr(Platform::String ^url);

	Platform::String ^GetFilename(Platform::String ^url);

	Platform::String ^GetRoot(int index);

	Boolean IsCached(Platform::String ^url);

	Boolean SaveTextDt(Platform::String ^key, Chilkat::CkDateTime ^expire, Platform::String ^eTag, Platform::String ^strData);

	Boolean SaveTextNoExpire(Platform::String ^key, Platform::String ^eTag, Platform::String ^strData);

	Boolean SaveTextStr(Platform::String ^key, Platform::String ^expireDateTimeStr, Platform::String ^eTag, Platform::String ^strData);

	Boolean SaveToCacheDt(Platform::String ^url, Chilkat::CkDateTime ^expire, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean SaveToCacheNoExpire(Platform::String ^url, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean SaveToCacheStr(Platform::String ^url, Platform::String ^expireDateTimeStr, Platform::String ^eTag, Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean UpdateExpirationDt(Platform::String ^url, Chilkat::CkDateTime ^dt);

	Boolean UpdateExpirationStr(Platform::String ^url, Platform::String ^dateTimeStr);



};





}


