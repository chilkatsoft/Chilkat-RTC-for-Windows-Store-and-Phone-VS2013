
// This header is generated for Chilkat v9.5.0

#pragma once

class CkAtomW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkAtomW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class CkDateTime;


public ref class Atom sealed
{
#include "friendDecls.h"
		
	private:
    CkAtomW *m_impl;

	public:
	virtual ~Atom(void);
	Atom(void);
	//Atom(Platform::IntPtr p);

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
	property int32 NumEntries
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	int AddElement(Platform::String ^tag, Platform::String ^value);

	int AddElementDateStr(Platform::String ^tag, Platform::String ^dateTimeStr);

	int AddElementDt(Platform::String ^tag, Chilkat::CkDateTime ^dateTime);

	int AddElementHtml(Platform::String ^tag, Platform::String ^htmlStr);

	int AddElementXHtml(Platform::String ^tag, Platform::String ^xmlStr);

	int AddElementXml(Platform::String ^tag, Platform::String ^xmlStr);

	void AddEntry(Platform::String ^xmlStr);

	void AddLink(Platform::String ^rel, Platform::String ^href, Platform::String ^title, Platform::String ^typ);

	void AddPerson(Platform::String ^tag, Platform::String ^name, Platform::String ^uri, Platform::String ^email);

	void DeleteElement(Platform::String ^tag, int index);

	void DeleteElementAttr(Platform::String ^tag, int index, Platform::String ^attrName);

	void DeletePerson(Platform::String ^tag, int index);

	IAsyncOperation<Boolean>^ DownloadAtomAsync(Platform::String ^url);

	Platform::String ^GetElement(Platform::String ^tag, int index);

	Platform::String ^GetElementAttr(Platform::String ^tag, int index, Platform::String ^attrName);

	int GetElementCount(Platform::String ^tag);

	Platform::String ^GetElementDateStr(Platform::String ^tag, int index);

	CkDateTime ^GetElementDt(Platform::String ^tag, int index);

	Atom ^GetEntry(int index);

	Platform::String ^GetLinkHref(Platform::String ^relName);

	Platform::String ^GetPersonInfo(Platform::String ^tag, int index, Platform::String ^tag2);

	Platform::String ^GetTopAttr(Platform::String ^attrName);

	Boolean HasElement(Platform::String ^tag);

	Boolean LoadXml(Platform::String ^xmlStr);

	void NewEntry(void);

	void NewFeed(void);

	void SetElementAttr(Platform::String ^tag, int index, Platform::String ^attrName, Platform::String ^attrValue);

	void SetTopAttr(Platform::String ^attrName, Platform::String ^value);

	Platform::String ^ToXmlString(void);

	void UpdateElement(Platform::String ^tag, int index, Platform::String ^value);

	void UpdateElementDateStr(Platform::String ^tag, int index, Platform::String ^dateTimeStr);

	void UpdateElementDt(Platform::String ^tag, int index, Chilkat::CkDateTime ^dateTime);

	void UpdateElementHtml(Platform::String ^tag, int index, Platform::String ^htmlStr);

	void UpdateElementXHtml(Platform::String ^tag, int index, Platform::String ^xmlStr);

	void UpdateElementXml(Platform::String ^tag, int index, Platform::String ^xmlStr);

	void UpdatePerson(Platform::String ^tag, int index, Platform::String ^name, Platform::String ^uri, Platform::String ^email);



};




private class CxAtomProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Atom ^m_sender;
	CkAtomW *m_impl;
	
    private:
	 	CxAtomProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxAtomProgress(CkAtomW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxAtomProgress(void)
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


