
// This header is generated for Chilkat v9.5.0

#pragma once

class CkStreamW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkStreamW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Stream sealed
{
#include "friendDecls.h"
		
	private:
    CkStreamW *m_impl;

	public:
	virtual ~Stream(void);
	Stream(void);
	//Stream(Platform::IntPtr p);

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
	property int32 DefaultChunkSize
	{
		int32 get();
		void set(int32);
	}
	property Boolean EndOfStream
	{
		Boolean get();
	}
	property Boolean IsWriteClosed
	{
		Boolean get();
	}
	property int32 ReadFailReason
	{
		int32 get();
	}
	property int32 ReadTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^SinkFile
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SourceFile
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean StringBom
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^StringCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 WriteFailReason
	{
		int32 get();
	}
	property int32 WriteTimeoutMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean CanRead
	{
		Boolean get();
	}
	property Boolean CanWrite
	{
		Boolean get();
	}
	property Boolean DataAvailable
	{
		Boolean get();
	}
	property int64 Length
	{
		int64 get();
	}
	property int64 NumReceived
	{
		int64 get();
	}
	property int64 NumSent
	{
		int64 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadBytesAsync(void);

	IAsyncOperation<Platform::String ^>^ ReadBytesENCAsync(Platform::String ^encoding);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ ReadNBytesAsync(int numBytes);

	IAsyncOperation<Platform::String ^>^ ReadNBytesENCAsync(int numBytes, Platform::String ^encoding);

	IAsyncOperation<Platform::String ^>^ ReadStringAsync(void);

	IAsyncOperation<Platform::String ^>^ ReadToCRLFAsync(void);

	IAsyncOperation<Platform::String ^>^ ReadUntilMatchAsync(Platform::String ^matchStr);

	void Reset(void);

	IAsyncOperation<Boolean>^ RunStreamAsync(void);

	Boolean SetSinkStream(Stream ^strm);

	Boolean SetSourceBytes(Windows::Foundation::Collections::IVector<uint8>^sourceData);

	Boolean SetSourceStream(Stream ^strm);

	Boolean SetSourceString(Platform::String ^srcStr, Platform::String ^charset);

	IAsyncOperation<Boolean>^ WriteByteAsync(int byteVal);

	IAsyncOperation<Boolean>^ WriteBytesAsync(Windows::Foundation::Collections::IVector<uint8>^byteData);

	IAsyncOperation<Boolean>^ WriteBytesENCAsync(Platform::String ^byteData, Platform::String ^encoding);

	IAsyncOperation<Boolean>^ WriteStringAsync(Platform::String ^str);

	Boolean WriteClose(void);



};




private class CxStreamProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Stream ^m_sender;
	CkStreamW *m_impl;
	
    private:
	 	CxStreamProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxStreamProgress(CkStreamW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxStreamProgress(void)
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


