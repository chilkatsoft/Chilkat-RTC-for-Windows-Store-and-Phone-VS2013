
#pragma once
	

using namespace Platform;

ref class PercentDoneEventArgs;
ref class AbortCheckEventArgs;
ref class ProgressInfoEventArgs;

#include "CxEventArgs.h"

// This file is NOT generated.
// The master copy of this file is in ck2000/components/winRTC
//
// All of the Chilkat delegates are defined here.
// 
namespace Chilkat
{

public delegate void AbortCheckEventHandler(Platform::Object^ sender, AbortCheckEventArgs^ eventArgs);
public delegate void PercentDoneEventHandler(Platform::Object^ sender, PercentDoneEventArgs^ eventArgs);
public delegate void ProgressInfoEventHandler(Platform::Object^ sender, ProgressInfoEventArgs^ eventArgs);

public delegate void UploadRateEventHandler(Object ^sender, DataRateEventArgs ^args);
public delegate void DownloadRateEventHandler(Object ^sender, DataRateEventArgs ^args);
public delegate void BeginDownloadFileEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void EndDownloadFileEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void VerifyDownloadDirEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void BeginUploadFileEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void EndUploadFileEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void VerifyUploadDirEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void VerifyDeleteFileEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void VerifyDeleteDirEventHandler(Object ^sender, FtpTreeEventArgs ^args);
public delegate void ReceiveRateEventHandler(Object ^sender, DataRateEventArgs ^args);
public delegate void SendRateEventHandler(Object ^sender, DataRateEventArgs ^args);
public delegate void HttpChunkedEventHandler(Object ^sender, EventArgs ^args);
public delegate void HttpRedirectEventHandler(Object ^sender, HttpRedirectEventArgs ^args);
public delegate void HttpBeginReceiveEventHandler(Object ^sender, EventArgs ^args);
public delegate void HttpBeginSendEventHandler(Object ^sender, EventArgs ^args);
public delegate void HttpEndReceiveEventHandler(Object ^sender, StatusEventArgs ^args);
public delegate void HttpEndSendEventHandler(Object ^sender, StatusEventArgs ^args);
public delegate void EmailReceivedEventHandler(Object ^sender, EmailEventArgs ^args);
public delegate void NextTarFileEventHandler(Object ^sender, NextTarFileEventArgs ^args);
public delegate void ToBeAddedEventHandler(Object ^sender, ToBeAddedEventArgs ^args);
public delegate void DirToBeAddedEventHandler(Object ^sender, DirToBeAddedEventArgs ^args);
public delegate void FileAddedEventHandler(Object ^sender, FileAddedEventArgs ^args);
public delegate void ToBeZippedEventHandler(Object ^sender, ToBeZippedEventArgs ^args);
public delegate void FileZippedEventHandler(Object ^sender, FileZippedEventArgs ^args);
public delegate void ToBeUnzippedEventHandler(Object ^sender, ToBeUnzippedEventArgs ^args);
public delegate void SkippedForUnzipEventHandler(Object ^sender, ToBeUnzippedEventArgs ^args);
public delegate void FileUnzippedEventHandler(Object ^sender, FileUnzippedEventArgs ^args);
public delegate void AddFilesBeginEventHandler(Object ^sender, EventArgs ^args);
public delegate void AddFilesEndEventHandler(Object ^sender, EventArgs ^args);
public delegate void WriteZipBeginEventHandler(Object ^sender, EventArgs ^args);
public delegate void WriteZipEndEventHandler(Object ^sender, EventArgs ^args);
public delegate void UnzipBeginEventHandler(Object ^sender, EventArgs ^args);
public delegate void UnzipEndEventHandler(Object ^sender, EventArgs ^args);


}


