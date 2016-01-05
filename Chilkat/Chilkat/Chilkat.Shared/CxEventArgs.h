#pragma once

using namespace Platform;

// EVENT_ARGS_UTF8 is not used...
#define EVENT_ARGS_UTF8(utf8str,refstr) \
    { CkString x1; x1.appendUtf8(utf8str); \
    args->refstr = ref new Platform::String((const wchar_t *)x1.getUnicode()); }

#define EVENT_ARGS_STRING(wideStr,refstr) \
    args->refstr = ref new Platform::String(wideStr);


// This file is NOT generated.
// The master copy of this file is in ck2000/components/winRTC
//
// All of the Chilkat EventArgs classes are defined here.
// 
namespace Chilkat {

public ref class EventArgs sealed
	{
	public:
	    EventArgs(void) { }
	};

public ref class PercentDoneEventArgs sealed
	{
	public:
	    PercentDoneEventArgs(void) { }

	    property int PercentDone;
	    property bool Abort;
	};

public ref class AbortCheckEventArgs sealed
	{
	public:
	    AbortCheckEventArgs(void) { }

	    property bool Abort;
	};

public ref class ProgressInfoEventArgs sealed
	{
	public:
	    ProgressInfoEventArgs(void) { }

	    property Platform::String^ Name;
	    property Platform::String^ Value;
    };

public ref class FtpTreeEventArgs sealed
	{
	public:
	    FtpTreeEventArgs(void) { }

	    property Platform::String^ Path;
	    property __int64 NumBytes;
	    property bool Skip;
	};


public ref class DataRateEventArgs sealed
	{
	public:
	    DataRateEventArgs(void) { }
	    property __int64 ByteCount;
	    property uint32 BytesPerSec;
	};

public ref class DirToBeAddedEventArgs sealed
	{
	public:
	    DirToBeAddedEventArgs(void) { }
	    property Platform::String^ DirName;
	    property bool Exclude;
	};

public ref class FileAddedEventArgs sealed
	{
	public:
	    FileAddedEventArgs(void) { }
	    property Platform::String^ FileName;
	    property __int64 FileSize;
	    property bool Abort;
	};

public ref class FileUnzippedEventArgs sealed
	{
	public:
	    FileUnzippedEventArgs(void) { }
	    property String^ FileName;
	    property __int64 CompressedSize;
	    property __int64 FileSize;
	    property bool IsDirectory;
	    property bool Abort;
	};

public ref class FileZippedEventArgs sealed
	{
	public:
	    FileZippedEventArgs(void) { }
	    property String^ FileName;
	    property __int64 CompressedSize;
	    property __int64 FileSize;
	    property bool Abort;
	};

public ref class HttpRedirectEventArgs sealed
	{
	public:
	    HttpRedirectEventArgs(void) { }
	    property String^ OriginalUrl;
	    property String^ RedirectUrl;
	    property bool Abort;
	};

public ref class NextTarFileEventArgs sealed
	{
	public:
	    NextTarFileEventArgs(void) { }
	    property String^ FileName;
	    property __int64 FileSize;
	    property bool IsDirectory;
	    property bool Skip;
	};

public ref class EmailEventArgs sealed
	{
	public:
	    EmailEventArgs(void) { }
	       property String^ Subject;
	       property String^ FromName;
	       property String^ FromAddr;
	       property String^ Uidl;
	       property String^ ReturnPath;
	       property String^ Date;
	       property int Size;
	};

public ref class StatusEventArgs sealed
	{
	public:
	    StatusEventArgs(void) { }
	    property bool Success;
	};

public ref class ToBeAddedEventArgs sealed
	{
	public:
	    ToBeAddedEventArgs(void) { }
	    property String^ FileName;
	    property __int64 FileSize;
	    property bool Exclude;
	};

public ref class ToBeUnzippedEventArgs sealed
	{
	public:
	    ToBeUnzippedEventArgs(void) { }
	       property String^ FileName;
	       property __int64 CompressedSize;
	       property __int64 FileSize;
	       property bool IsDirectory;
	       property bool Exclude;
	};

public ref class ToBeZippedEventArgs sealed
	{
	public:
	    ToBeZippedEventArgs(void) { }
	       property String^ FileName;
	       property __int64 FileSize;
	       property bool Exclude;
	};

//public ref class EventArgs sealed
//	{
//	public:
//	    EventArgs(void) { }
//	};
}
