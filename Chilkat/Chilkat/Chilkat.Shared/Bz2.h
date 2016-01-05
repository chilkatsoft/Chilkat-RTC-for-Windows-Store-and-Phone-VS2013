
// This header is generated for Chilkat v9.5.0

#pragma once

class CkBz2W;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkBz2W.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Bz2 sealed
{
#include "friendDecls.h"
		
	private:
    CkBz2W *m_impl;

	public:
	virtual ~Bz2(void);
	Bz2(void);
	//Bz2(Platform::IntPtr p);

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
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Boolean>^ CompressFileAsync(Platform::String ^inFilename, Platform::String ^toPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressFileToMemAsync(Platform::String ^inFilename);

	IAsyncOperation<Boolean>^ CompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^toPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Boolean>^ UncompressFileAsync(Platform::String ^inFilename, Platform::String ^toPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UncompressFileToMemAsync(Platform::String ^inFilename);

	IAsyncOperation<Boolean>^ UncompressMemToFileAsync(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^toPath);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ UncompressMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean UnlockComponent(Platform::String ^regCode);



};




private class CxBz2Progress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Bz2 ^m_sender;
	CkBz2W *m_impl;
	
    private:
	 	CxBz2Progress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxBz2Progress(CkBz2W *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxBz2Progress(void)
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


