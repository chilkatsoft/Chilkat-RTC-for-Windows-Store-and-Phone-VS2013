
// This header is generated for Chilkat v9.5.0

#pragma once

class CkRssW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkRssW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Rss sealed
{
#include "friendDecls.h"
		
	private:
    CkRssW *m_impl;

	public:
	virtual ~Rss(void);
	Rss(void);
	//Rss(Platform::IntPtr p);

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
	property int32 NumChannels
	{
		int32 get();
	}
	property int32 NumItems
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Rss ^AddNewChannel(void);

	Rss ^AddNewImage(void);

	Rss ^AddNewItem(void);

	IAsyncOperation<Boolean>^ DownloadRssAsync(Platform::String ^url);

	Platform::String ^GetAttr(Platform::String ^tag, Platform::String ^attrName);

	Rss ^GetChannel(int index);

	int GetCount(Platform::String ^tag);

	Platform::String ^GetDateStr(Platform::String ^tag);

	Rss ^GetImage(void);

	int GetInt(Platform::String ^tag);

	Rss ^GetItem(int index);

	Platform::String ^GetString(Platform::String ^tag);

	Boolean LoadRssFile(Platform::String ^filename);

	Boolean LoadRssString(Platform::String ^rssString);

	Platform::String ^MGetAttr(Platform::String ^tag, int index, Platform::String ^attrName);

	Platform::String ^MGetString(Platform::String ^tag, int index);

	Boolean MSetAttr(Platform::String ^tag, int idx, Platform::String ^attrName, Platform::String ^value);

	Boolean MSetString(Platform::String ^tag, int idx, Platform::String ^value);

	void NewRss(void);

	void Remove(Platform::String ^tag);

	void SetAttr(Platform::String ^tag, Platform::String ^attrName, Platform::String ^value);

	void SetDateNow(Platform::String ^tag);

	void SetDateStr(Platform::String ^tag, Platform::String ^dateTimeStr);

	void SetInt(Platform::String ^tag, int value);

	void SetString(Platform::String ^tag, Platform::String ^value);

	Platform::String ^ToXmlString(void);



};




private class CxRssProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Rss ^m_sender;
	CkRssW *m_impl;
	
    private:
	 	CxRssProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxRssProgress(CkRssW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxRssProgress(void)
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


