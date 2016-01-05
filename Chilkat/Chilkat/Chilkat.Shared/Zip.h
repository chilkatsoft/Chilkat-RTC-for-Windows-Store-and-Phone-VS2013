
// This header is generated for Chilkat v9.5.0

#pragma once

class CkZipW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkZipProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkZipW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class ZipEntry;
	ref class StringArray;


public ref class Zip sealed
{
#include "friendDecls.h"
		
	private:
    CkZipW *m_impl;

	public:
	virtual ~Zip(void);
	Zip(void);
	//Zip(Platform::IntPtr p);

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


	event ToBeAddedEventHandler ^ToBeAdded;
	void FireToBeAdded(Object ^sender, ToBeAddedEventArgs ^args)
		{
		ToBeAdded(sender,args);
		}

	event DirToBeAddedEventHandler ^DirToBeAdded;
	void FireDirToBeAdded(Object ^sender, DirToBeAddedEventArgs ^args)
		{
		DirToBeAdded(sender,args);
		}

	event FileAddedEventHandler ^FileAdded;
	void FireFileAdded(Object ^sender, FileAddedEventArgs ^args)
		{
		FileAdded(sender,args);
		}

	event ToBeZippedEventHandler ^ToBeZipped;
	void FireToBeZipped(Object ^sender, ToBeZippedEventArgs ^args)
		{
		ToBeZipped(sender,args);
		}

	event FileZippedEventHandler ^FileZipped;
	void FireFileZipped(Object ^sender, FileZippedEventArgs ^args)
		{
		FileZipped(sender,args);
		}

	event ToBeUnzippedEventHandler ^ToBeUnzipped;
	void FireToBeUnzipped(Object ^sender, ToBeUnzippedEventArgs ^args)
		{
		ToBeUnzipped(sender,args);
		}

	event SkippedForUnzipEventHandler ^SkippedForUnzip;
	void FireSkippedForUnzip(Object ^sender, ToBeUnzippedEventArgs ^args)
		{
		SkippedForUnzip(sender,args);
		}

	event FileUnzippedEventHandler ^FileUnzipped;
	void FireFileUnzipped(Object ^sender, FileUnzippedEventArgs ^args)
		{
		FileUnzipped(sender,args);
		}

	event AddFilesBeginEventHandler ^AddFilesBegin;
	void FireAddFilesBegin(Object ^sender, EventArgs ^args)
		{
		AddFilesBegin(sender,args);
		}

	event AddFilesEndEventHandler ^AddFilesEnd;
	void FireAddFilesEnd(Object ^sender, EventArgs ^args)
		{
		AddFilesEnd(sender,args);
		}

	event WriteZipBeginEventHandler ^WriteZipBegin;
	void FireWriteZipBegin(Object ^sender, EventArgs ^args)
		{
		WriteZipBegin(sender,args);
		}

	event WriteZipEndEventHandler ^WriteZipEnd;
	void FireWriteZipEnd(Object ^sender, EventArgs ^args)
		{
		WriteZipEnd(sender,args);
		}

	event UnzipBeginEventHandler ^UnzipBegin;
	void FireUnzipBegin(Object ^sender, EventArgs ^args)
		{
		UnzipBegin(sender,args);
		}

	event UnzipEndEventHandler ^UnzipEnd;
	void FireUnzipEnd(Object ^sender, EventArgs ^args)
		{
		UnzipEnd(sender,args);
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
	property Platform::String ^AppendFromDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean CaseSensitive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean ClearArchiveAttribute
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean ClearReadOnlyAttr
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Comment
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DecryptPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean DiscardPaths
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 EncryptKeyLength
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^EncryptPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 Encryption
	{
		int32 get();
		void set(int32);
	}
	property int32 FileCount
	{
		int32 get();
	}
	property Platform::String ^FileName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean HasZipFormatErrors
	{
		Boolean get();
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Boolean IgnoreAccessDenied
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumEntries
	{
		int32 get();
	}
	property int32 OemCodePage
	{
		int32 get();
		void set(int32);
	}
	property Boolean OverwriteExisting
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean PasswordProtect
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^PathPrefix
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 PercentDoneScale
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^TempDir
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean TextFlag
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Zipx
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^ZipxDefaultAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddNoCompressExtension(Platform::String ^fileExtension);

	ZipEntry ^AppendBase64(Platform::String ^fileName, Platform::String ^encodedCompressedData);

	ZipEntry ^AppendCompressed(Platform::String ^fileName, Windows::Foundation::Collections::IVector<uint8>^inData);

	ZipEntry ^AppendData(Platform::String ^fileName, Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Boolean>^ AppendFilesAsync(Platform::String ^filePattern, Boolean recurse);

	IAsyncOperation<Boolean>^ AppendFilesExAsync(Platform::String ^filePattern, Boolean recurse, Boolean saveExtraPath, Boolean archiveOnly, Boolean includeHidden, Boolean includeSystem);

	ZipEntry ^AppendHex(Platform::String ^fileName, Platform::String ^encodedCompressedData);

	IAsyncOperation<Boolean>^ AppendMultipleAsync(StringArray ^fileSpecs, Boolean recurse);

	ZipEntry ^AppendNew(Platform::String ^fileName);

	ZipEntry ^AppendNewDir(Platform::String ^dirName);

	IAsyncOperation<Boolean>^ AppendOneFileOrDirAsync(Platform::String ^fileOrDirName, Boolean saveExtraPath);

	ZipEntry ^AppendString(Platform::String ^fileName, Platform::String ^str);

	ZipEntry ^AppendString2(Platform::String ^fileName, Platform::String ^str, Platform::String ^charset);

	Boolean AppendZip(Platform::String ^zipFileName);

	void CloseZip(void);

	Boolean DeleteEntry(ZipEntry ^entry);

	void ExcludeDir(Platform::String ^dirName);

	IAsyncOperation<Boolean>^ ExtractAsync(Platform::String ^dirPath);

	IAsyncOperation<Boolean>^ ExtractIntoAsync(Platform::String ^dirPath);

	IAsyncOperation<Boolean>^ ExtractMatchingAsync(Platform::String ^dirPath, Platform::String ^pattern);

	IAsyncOperation<Boolean>^ ExtractNewerAsync(Platform::String ^dirPath);

	IAsyncOperation<Boolean>^ ExtractOneAsync(ZipEntry ^entry, Platform::String ^dirPath);

	ZipEntry ^FirstEntry(void);

	ZipEntry ^FirstMatchingEntry(Platform::String ^pattern);

	Platform::String ^GetDirectoryAsXML(void);

	ZipEntry ^GetEntryByID(int entryID);

	ZipEntry ^GetEntryByIndex(int index);

	ZipEntry ^GetEntryByName(Platform::String ^entryName);

	StringArray ^GetExclusions(void);

	ZipEntry ^InsertNew(Platform::String ^fileName, int beforeIndex);

	Boolean IsNoCompressExtension(Platform::String ^fileExtension);

	Boolean IsPasswordProtected(Platform::String ^zipFilename);

	Boolean IsUnlocked(void);

	Boolean NewZip(Platform::String ^ZipFileName);

	Boolean OpenFromByteData(Windows::Foundation::Collections::IVector<uint8>^byteData);

	Boolean OpenFromMemory(Windows::Foundation::Collections::IVector<uint8>^inData);

	IAsyncOperation<Boolean>^ OpenZipAsync(Platform::String ^ZipFileName);

	IAsyncOperation<Boolean>^ QuickAppendAsync(Platform::String ^ZipFileName);

	void RemoveNoCompressExtension(Platform::String ^fileExtension);

	void SetCompressionLevel(int level);

	void SetExclusions(StringArray ^excludePatterns);

	void SetPassword(Platform::String ^password);

	Boolean UnlockComponent(Platform::String ^regCode);

	IAsyncOperation<int>^ UnzipAsync(Platform::String ^dirPath);

	IAsyncOperation<int>^ UnzipIntoAsync(Platform::String ^dirPath);

	IAsyncOperation<int>^ UnzipMatchingAsync(Platform::String ^dirPath, Platform::String ^pattern, Boolean verbose);

	IAsyncOperation<int>^ UnzipMatchingIntoAsync(Platform::String ^dirPath, Platform::String ^pattern, Boolean verbose);

	IAsyncOperation<int>^ UnzipNewerAsync(Platform::String ^dirPath);

	Boolean VerifyPassword(void);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ WriteToMemoryAsync(void);

	IAsyncOperation<Boolean>^ WriteZipAsync(void);

	IAsyncOperation<Boolean>^ WriteZipAndCloseAsync(void);



};




private class CxZipProgress : public CkZipProgressW
    {
	

    public:
	Chilkat::Zip ^m_sender;
	CkZipW *m_impl;
	
    private:
	 	CxZipProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxZipProgress(CkZipW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxZipProgress(void)
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







	// Now include the CkZipProgress overrides

	void ToBeAdded(const wchar_t *filePath, 
	    __int64 fileSize, 
	    bool *exclude) 
	    { 
		if (m_sender == nullptr) return;
		ToBeAddedEventArgs^ args = ref new ToBeAddedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->Exclude = false;	    
		m_sender->FireToBeAdded(m_sender,args);
		if (exclude) *exclude = args->Exclude;
	    }

	void DirToBeAdded(const wchar_t *dirName, 
	    bool *exclude) 
	    { 
		if (m_sender == nullptr) return;
		DirToBeAddedEventArgs^ args = ref new DirToBeAddedEventArgs;
		EVENT_ARGS_STRING(dirName,DirName)
		args->Exclude = false;	    
		m_sender->FireDirToBeAdded(m_sender,args);
		if (exclude) *exclude = args->Exclude;
	    }

	void FileAdded(const wchar_t *filePath, 
	    __int64 fileSize, 
	    bool *abort) 
	    { 
		if (m_sender == nullptr) return;
		FileAddedEventArgs^ args = ref new FileAddedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->Abort = false;	    
		m_sender->FireFileAdded(m_sender,args);
		if (abort) *abort = args->Abort;
	    }

	void ToBeZipped(const wchar_t *filePath, 
	    __int64 fileSize, 
	    bool *exclude) 
	    { 
		if (m_sender == nullptr) return;
		ToBeZippedEventArgs^ args = ref new ToBeZippedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->Exclude = false;	    
		m_sender->FireToBeZipped(m_sender,args);
		if (exclude) *exclude = args->Exclude;
	    }

	void FileZipped(const wchar_t *filePath, 
	    __int64 fileSize, 
	    __int64 compressedSize, 
	    bool *abort) 
	    { 
		if (m_sender == nullptr) return;
		FileZippedEventArgs^ args = ref new FileZippedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->CompressedSize = compressedSize;
		args->Abort = false;	    
		m_sender->FireFileZipped(m_sender,args);
		if (abort) *abort = args->Abort;
	    }

	void ToBeUnzipped(const wchar_t *filePath, 
	    __int64 compressedSize,
	    __int64 fileSize, 
	    bool isDirectory,
	    bool *exclude) 
	    { 
		if (m_sender == nullptr) return;
		ToBeUnzippedEventArgs^ args = ref new ToBeUnzippedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->CompressedSize = compressedSize;
		args->IsDirectory = isDirectory;
		args->Exclude = false;	    
		m_sender->FireToBeUnzipped(m_sender,args);
		if (exclude) *exclude = args->Exclude;
	    }

	void FileUnzipped(const wchar_t *filePath, 
	    __int64 compressedSize,
	    __int64 fileSize, 
	    bool isDirectory,
	    bool *abort) 
	    { 
		if (m_sender == nullptr) return;
		FileUnzippedEventArgs^ args = ref new FileUnzippedEventArgs;
		EVENT_ARGS_STRING(filePath,FileName)
		args->FileSize = fileSize;
		args->CompressedSize = compressedSize;
		args->IsDirectory = isDirectory;
		args->Abort = false;	    
		m_sender->FireFileUnzipped(m_sender,args);
		if (abort) *abort = args->Abort;
	    }

	void SkippedForUnzip(const wchar_t *filePath, 
	    __int64 compressedSize,
	    __int64 fileSize,
	    bool isDirectory) 
	    { 
		if (m_sender == nullptr) return;
		ToBeUnzippedEventArgs^ args = ref new ToBeUnzippedEventArgs;
		args->FileSize = fileSize;
		args->CompressedSize = compressedSize;
		args->IsDirectory = isDirectory;
		args->Exclude = false;	 // not used.
		EVENT_ARGS_STRING(filePath,FileName)
		m_sender->FireSkippedForUnzip(m_sender,args);
	    }

	void AddFilesBegin(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireAddFilesBegin(m_sender,args);
	}
	void AddFilesEnd(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireAddFilesEnd(m_sender,args);
	}
	void WriteZipBegin(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireWriteZipBegin(m_sender,args);
	}
	void WriteZipEnd(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireWriteZipEnd(m_sender,args);
	}
	void UnzipBegin(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireUnzipBegin(m_sender,args);
	}
	void UnzipEnd(void) 
	{ 
		if (m_sender == nullptr) return;
		EventArgs^ args = ref new EventArgs;
		m_sender->FireUnzipEnd(m_sender,args);
	}


    };







}


