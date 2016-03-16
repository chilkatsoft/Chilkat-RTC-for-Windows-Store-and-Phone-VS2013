
// This header is generated for Chilkat v9.5.0

#pragma once

class CkTarW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkTarProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkTarW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Tar sealed
{
#include "friendDecls.h"
		
	private:
    CkTarW *m_impl;

	public:
	virtual ~Tar(void);
	Tar(void);
	//Tar(Platform::IntPtr p);

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


	event NextTarFileEventHandler ^NextTarFile;
	void FireNextTarFile(Object ^sender, NextTarFileEventArgs ^args)
		{
		NextTarFile(sender,args);
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
	property Boolean CaptureXmlListing
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 DirMode
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DirPrefix
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 FileMode
	{
		int32 get();
		void set(int32);
	}
	property int32 GroupId
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^GroupName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean MatchCaseSensitive
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^MustMatch
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^MustNotMatch
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean NoAbsolutePaths
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumDirRoots
	{
		int32 get();
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property int32 ScriptFileMode
	{
		int32 get();
		void set(int32);
	}
	property Boolean SuppressOutput
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UntarCaseSensitive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UntarDebugLog
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UntarDiscardPaths
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^UntarFromDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^UntarMatchPattern
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 UntarMaxCount
	{
		int32 get();
		void set(int32);
	}
	property int32 UserId
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^UserName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^WriteFormat
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^XmlListing
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddDirRoot(Platform::String ^dirPath);

	Boolean AddFile(Platform::String ^path);

	Platform::String ^GetDirRoot(int index);

	IAsyncOperation<Platform::String ^>^ ListXmlAsync(Platform::String ^tarPath);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<int>^ UntarAsync(Platform::String ^tarPath);

	IAsyncOperation<Boolean>^ UntarBz2Async(Platform::String ^tarPath);

	Windows::Foundation::Collections::IVector<uint8>^UntarFirstMatchingToMemory(Windows::Foundation::Collections::IVector<uint8>^tarFileBytes, Platform::String ^matchPattern);

	IAsyncOperation<int>^ UntarFromMemoryAsync(Windows::Foundation::Collections::IVector<uint8>^tarFileBytes);

	IAsyncOperation<Boolean>^ UntarGzAsync(Platform::String ^tarPath);

	IAsyncOperation<Boolean>^ UntarZAsync(Platform::String ^tarPath);

	IAsyncOperation<Boolean>^ VerifyTarAsync(Platform::String ^tarPath);

	IAsyncOperation<Boolean>^ WriteTarAsync(Platform::String ^tarPath);

	IAsyncOperation<Boolean>^ WriteTarBz2Async(Platform::String ^bz2Path);

	IAsyncOperation<Boolean>^ WriteTarGzAsync(Platform::String ^gzPath);

	Boolean AddDirRoot2(Platform::String ^rootPrefix, Platform::String ^rootPath);



};




private class CxTarProgress : public CkTarProgressW
    {
	

    public:
	Chilkat::Tar ^m_sender;
	CkTarW *m_impl;
	
    private:
	 	CxTarProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxTarProgress(CkTarW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxTarProgress(void)
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







	// Now include the CkTarProgressW override 
	void NextTarFile(const wchar_t *path, 
	    __int64 fileSize,
	    bool bIsDirectory, 
	    bool *skip) 
		{ 	    
		if (m_sender == nullptr) return;
		
		NextTarFileEventArgs^ args = ref new NextTarFileEventArgs;
		EVENT_ARGS_STRING(path,FileName)
		args->FileSize = fileSize;
		args->IsDirectory = bIsDirectory;
		args->Skip = false;	    
		m_sender->FireNextTarFile(m_sender,args);
		if (skip) *skip = args->Skip;
		}

    };







}


