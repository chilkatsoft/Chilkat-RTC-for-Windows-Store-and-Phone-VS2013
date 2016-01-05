
// This header is generated for Chilkat v9.5.0

#pragma once

class CkMhtW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkMhtW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Mht sealed
{
#include "friendDecls.h"
		
	private:
    CkMhtW *m_impl;

	public:
	virtual ~Mht(void);
	Mht(void);
	//Mht(Platform::IntPtr p);

	//Platform::IntPtr ImplObj(void);
	


	event ProgressInfoEventHandler^ ProgressInfo;
	event AbortCheckEventHandler^ AbortCheck;
	event PercentDoneEventHandler^ PercentDone;

	void FireAbortCheck(bool *abort)
	    {
	    Chilkat::AbortCheckEventArgs ^args = ref new Chilkat::AbortCheckEventArgs;
	    args->Abort = false;
	    AbortCheck(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FirePercentDone(int percentDone, bool *abort)
	    {
	    Chilkat::PercentDoneEventArgs ^args = ref new Chilkat::PercentDoneEventArgs;
	    args->PercentDone = percentDone;
	    args->Abort = false;
	    PercentDone(this,args);
	    if (abort) *abort = args->Abort;
	    }
	void FireProgressInfo(Platform::String ^name, Platform::String ^value)
	    {
	    Chilkat::ProgressInfoEventArgs ^args = ref new Chilkat::ProgressInfoEventArgs;
	    args->Name = name;
	    args->Value = value;
	    ProgressInfo(this,args);
	    }



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
	property Platform::String ^BaseUrl
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ConnectTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DebugHtmlAfter
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DebugHtmlBefore
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean DebugTagCleaning
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmbedImages
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmbedLocalOnly
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean FetchFromCache
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean IgnoreMustRevalidate
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean IgnoreNoCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NoScripts
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean NtlmAuth
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumCacheLevels
	{
		int32 get();
		void set(int32);
	}
	property int32 NumCacheRoots
	{
		int32 get();
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PreferMHTScripts
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Proxy
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ProxyLogin
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ProxyPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ReadTimeout
	{
		int32 get();
		void set(int32);
	}
	property Boolean RequireSslCertVerify
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^SocksHostname
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SocksPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksPort
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SocksUsername
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 SocksVersion
	{
		int32 get();
		void set(int32);
	}
	property Boolean UnpackDirect
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UnpackUseRelPaths
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UpdateCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseCids
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseFilename
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseIEProxy
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseInline
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^WebSiteLogin
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^WebSiteLoginDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^WebSitePassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddCacheRoot(Platform::String ^dir);

	void AddCustomHeader(Platform::String ^name, Platform::String ^value);

	void AddExternalStyleSheet(Platform::String ^url);

	void ClearCustomHeaders(void);

	void ExcludeImagesMatching(Platform::String ^pattern);

	IAsyncOperation<Boolean>^ GetAndSaveEMLAsync(Platform::String ^url, Platform::String ^emlFilename);

	IAsyncOperation<Boolean>^ GetAndSaveMHTAsync(Platform::String ^url, Platform::String ^mhtFilename);

	IAsyncOperation<Boolean>^ GetAndZipEMLAsync(Platform::String ^url, Platform::String ^zipEntryFilename, Platform::String ^zipFilename);

	IAsyncOperation<Boolean>^ GetAndZipMHTAsync(Platform::String ^url, Platform::String ^zipEntryFilename, Platform::String ^zipFilename);

	Platform::String ^GetCacheRoot(int index);

	IAsyncOperation<Platform::String ^>^ GetEMLAsync(Platform::String ^url);

	IAsyncOperation<Platform::String ^>^ GetMHTAsync(Platform::String ^url);

	IAsyncOperation<Platform::String ^>^ HtmlToEMLAsync(Platform::String ^htmlText);

	IAsyncOperation<Boolean>^ HtmlToEMLFileAsync(Platform::String ^html, Platform::String ^emlFilename);

	IAsyncOperation<Platform::String ^>^ HtmlToMHTAsync(Platform::String ^htmlText);

	IAsyncOperation<Boolean>^ HtmlToMHTFileAsync(Platform::String ^html, Platform::String ^mhtFilename);

	Boolean IsUnlocked(void);

	void RemoveCustomHeader(Platform::String ^name);

	void RestoreDefaults(void);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean UnpackMHT(Platform::String ^mhtFilename, Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubDir);

	Boolean UnpackMHTString(Platform::String ^mhtString, Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubDir);



};




private class CxMhtProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Mht ^m_sender;
	CkMhtW *m_impl;
	
    private:
	 	CxMhtProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxMhtProgress(CkMhtW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxMhtProgress(void)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(0);
	    m_impl = 0;
	    }


	// overrides for CkBaseProgressW methods
	void AbortCheck(bool *abort) 
	    { 
	    if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FireAbortCheck(abort);
	    }

	void PercentDone(int pctDone, bool *abort) 
	    { 
	    if (is_task_cancellation_requested()) { *abort = true; return; }

	    if (m_sender == nullptr) return;
	    m_sender->FirePercentDone(pctDone,abort);
	    }

	void ProgressInfo(const wchar_t *name, const wchar_t *value) 
	    { 
	    if (m_sender == nullptr) return;
	    Platform::String ^s1 = ref new Platform::String(name);
	    Platform::String ^s2 = ref new Platform::String(value);
		m_sender->FireProgressInfo(s1,s2);
	    }






    };







}


