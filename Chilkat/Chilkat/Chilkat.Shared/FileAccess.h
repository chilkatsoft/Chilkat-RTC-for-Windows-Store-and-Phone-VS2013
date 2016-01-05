
// This header is generated for Chilkat v9.5.0

#pragma once

class CkFileAccessW;

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


public ref class FileAccess sealed
{
#include "friendDecls.h"
		
	private:
    CkFileAccessW *m_impl;

	public:
	virtual ~FileAccess(void);
	FileAccess(void);
	//FileAccess(Platform::IntPtr p);

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
	property Platform::String ^CurrentDir
	{
		Platform::String ^get();
	}
	property Boolean EndOfFile
	{
		Boolean get();
	}
	property int32 FileOpenError
	{
		int32 get();
	}
	property Platform::String ^FileOpenErrorMsg
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AppendAnsi(Platform::String ^text);

	Boolean AppendText(Platform::String ^text, Platform::String ^charset);

	Boolean AppendUnicodeBOM(void);

	Boolean AppendUtf8BOM(void);

	Boolean DirAutoCreate(Platform::String ^path);

	Boolean DirCreate(Platform::String ^path);

	Boolean DirDelete(Platform::String ^path);

	Boolean DirEnsureExists(Platform::String ^filePath);

	void FileClose(void);

	Boolean FileContentsEqual(Platform::String ^path1, Platform::String ^path2);

	Boolean FileCopy(Platform::String ^existing, Platform::String ^newFilename, Boolean failIfExists);

	Boolean FileDelete(Platform::String ^filename);

	Boolean FileExists(Platform::String ^path);

	int FileExists3(Platform::String ^path);

	Boolean FileOpen(Platform::String ^filename, uint32 accessMode, uint32 shareMode, uint32 createDisp, uint32 attr);

	Windows::Foundation::Collections::IVector<uint8>^FileRead(int numBytes);

	Boolean FileRename(Platform::String ^existing, Platform::String ^newFilename);

	Boolean FileSeek(int offset, int origin);

	int FileSize(Platform::String ^filename);

	Boolean FileWrite(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^GetTempFilename(Platform::String ^dirName, Platform::String ^prefix);

	Boolean OpenForAppend(Platform::String ^filePath);

	Boolean OpenForRead(Platform::String ^filePath);

	Boolean OpenForReadWrite(Platform::String ^filePath);

	Boolean OpenForWrite(Platform::String ^filePath);

	Platform::String ^ReadBinaryToEncoded(Platform::String ^filename, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^ReadEntireFile(Platform::String ^filename);

	Platform::String ^ReadEntireTextFile(Platform::String ^filename, Platform::String ^charset);

	Boolean ReassembleFile(Platform::String ^partsDirPath, Platform::String ^partPrefix, Platform::String ^partExtension, Platform::String ^reassembledFilename);

	int ReplaceStrings(Platform::String ^path, Platform::String ^charset, Platform::String ^existingString, Platform::String ^replacementString);

	Boolean SetCurrentDir(Platform::String ^path);

	Boolean SetFileTimes(Platform::String ^path, Chilkat::CkDateTime ^create, Chilkat::CkDateTime ^lastAccess, Chilkat::CkDateTime ^lastModified);

	Boolean SetLastModified(Platform::String ^path, Chilkat::CkDateTime ^lastModified);

	Boolean SplitFile(Platform::String ^fileToSplit, Platform::String ^partPrefix, Platform::String ^partExtension, int partSize, Platform::String ^destDir);

	Boolean TreeDelete(Platform::String ^path);

	Boolean WriteEntireFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData);

	Boolean WriteEntireTextFile(Platform::String ^filename, Platform::String ^fileData, Platform::String ^charset, Boolean includePreamble);



};





}


