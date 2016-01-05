
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSpiderW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkSpiderW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Spider sealed
{
#include "friendDecls.h"
		
	private:
    CkSpiderW *m_impl;

	public:
	virtual ~Spider(void);
	Spider(void);
	//Spider(Platform::IntPtr p);

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
	property Boolean AvoidHttps
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^CacheDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean ChopAtQuery
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 ConnectTimeout
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Domain
	{
		Platform::String ^get();
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
	property Boolean LastFromCache
	{
		Boolean get();
	}
	property Platform::String ^LastHtml
	{
		Platform::String ^get();
	}
	property Platform::String ^LastHtmlDescription
	{
		Platform::String ^get();
	}
	property Platform::String ^LastHtmlKeywords
	{
		Platform::String ^get();
	}
	property Platform::String ^LastHtmlTitle
	{
		Platform::String ^get();
	}
	property Platform::String ^LastModDateStr
	{
		Platform::String ^get();
	}
	property Platform::String ^LastUrl
	{
		Platform::String ^get();
	}
	property int32 MaxResponseSize
	{
		int32 get();
		void set(int32);
	}
	property int32 MaxUrlLen
	{
		int32 get();
		void set(int32);
	}
	property int32 NumAvoidPatterns
	{
		int32 get();
	}
	property int32 NumFailed
	{
		int32 get();
	}
	property int32 NumOutboundLinks
	{
		int32 get();
	}
	property int32 NumSpidered
	{
		int32 get();
	}
	property int32 NumUnspidered
	{
		int32 get();
	}
	property Boolean PreferIpv6
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ProxyDomain
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
	property int32 ProxyPort
	{
		int32 get();
		void set(int32);
	}
	property int32 ReadTimeout
	{
		int32 get();
		void set(int32);
	}
	property Boolean UpdateCache
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^UserAgent
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 WindDownCount
	{
		int32 get();
		void set(int32);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddAvoidOutboundLinkPattern(Platform::String ^pattern);

	void AddAvoidPattern(Platform::String ^pattern);

	void AddMustMatchPattern(Platform::String ^pattern);

	void AddUnspidered(Platform::String ^url);

	Platform::String ^CanonicalizeUrl(Platform::String ^url);

	void ClearFailedUrls(void);

	void ClearOutboundLinks(void);

	void ClearSpideredUrls(void);

	IAsyncOperation<Boolean>^ CrawlNextAsync(void);

	IAsyncOperation<Platform::String ^>^ FetchRobotsTextAsync(void);

	Platform::String ^GetAvoidPattern(int index);

	Platform::String ^GetBaseDomain(Platform::String ^domain);

	Platform::String ^GetFailedUrl(int index);

	Platform::String ^GetOutboundLink(int index);

	Platform::String ^GetSpideredUrl(int index);

	Platform::String ^GetUnspideredUrl(int index);

	Platform::String ^GetUrlDomain(Platform::String ^url);

	void Initialize(Platform::String ^domain);

	IAsyncOperation<Boolean>^ RecrawlLastAsync(void);

	void SkipUnspidered(int index);

	void SleepMs(int millisec);



};




private class CxSpiderProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Spider ^m_sender;
	CkSpiderW *m_impl;
	
    private:
	 	CxSpiderProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxSpiderProgress(CkSpiderW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxSpiderProgress(void)
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


