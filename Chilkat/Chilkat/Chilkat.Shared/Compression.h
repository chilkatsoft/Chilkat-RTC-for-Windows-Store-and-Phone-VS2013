
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCompressionW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkCompressionW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Stream;


public ref class Compression sealed
{
#include "friendDecls.h"
		
	private:
    CkCompressionW *m_impl;

	public:
	virtual ~Compression(void);
	Compression(void);
	//Compression(Platform::IntPtr p);

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
	property Platform::String ^Algorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodingMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
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

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ BeginCompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ BeginCompressBytesENCAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ BeginCompressStringAsync(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ BeginCompressStringENCAsync(Platform::String ^str);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ BeginDecompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ BeginDecompressBytesENCAsync(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ BeginDecompressStringAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ BeginDecompressStringENCAsync(Platform::String ^str);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ CompressBytesENCAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Boolean>^ CompressFileAsync(Platform::String ^srcPath, Platform::String ^destPath);

	IAsyncOperation<Boolean>^ CompressStreamAsync(Stream ^strm);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ CompressStringAsync(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ CompressStringENCAsync(Platform::String ^str);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ DecompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ DecompressBytesENCAsync(Platform::String ^str);

	IAsyncOperation<Boolean>^ DecompressFileAsync(Platform::String ^srcPath, Platform::String ^destPath);

	IAsyncOperation<Boolean>^ DecompressStreamAsync(Stream ^strm);

	IAsyncOperation<Platform::String ^>^ DecompressStringAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ DecompressStringENCAsync(Platform::String ^str);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ EndCompressBytesAsync(void);

	IAsyncOperation<Platform::String ^>^ EndCompressBytesENCAsync(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ EndCompressStringAsync(void);

	IAsyncOperation<Platform::String ^>^ EndCompressStringENCAsync(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ EndDecompressBytesAsync(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ EndDecompressBytesENCAsync(void);

	IAsyncOperation<Platform::String ^>^ EndDecompressStringAsync(void);

	IAsyncOperation<Platform::String ^>^ EndDecompressStringENCAsync(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MoreCompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ MoreCompressBytesENCAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MoreCompressStringAsync(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ MoreCompressStringENCAsync(Platform::String ^str);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MoreDecompressBytesAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ MoreDecompressBytesENCAsync(Platform::String ^str);

	IAsyncOperation<Platform::String ^>^ MoreDecompressStringAsync(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Platform::String ^>^ MoreDecompressStringENCAsync(Platform::String ^str);

	Boolean UnlockComponent(Platform::String ^unlockCode);



};




private class CxCompressionProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Compression ^m_sender;
	CkCompressionW *m_impl;
	
    private:
	 	CxCompressionProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxCompressionProgress(CkCompressionW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxCompressionProgress(void)
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


