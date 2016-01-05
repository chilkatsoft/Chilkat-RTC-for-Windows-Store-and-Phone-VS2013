
// This header is generated for Chilkat v9.5.0

#pragma once

class CkSFtpFileW;

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


public ref class SFtpFile sealed
{
#include "friendDecls.h"
		
	private:
    CkSFtpFileW *m_impl;

	public:
	virtual ~SFtpFile(void);
	SFtpFile(void);
	//SFtpFile(Platform::IntPtr p);

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
	property Platform::String ^CreateTimeStr
	{
		Platform::String ^get();
	}
	property Platform::String ^FileType
	{
		Platform::String ^get();
	}
	property Platform::String ^Filename
	{
		Platform::String ^get();
	}
	property int32 Gid
	{
		int32 get();
	}
	property Platform::String ^Group
	{
		Platform::String ^get();
	}
	property Boolean IsAppendOnly
	{
		Boolean get();
	}
	property Boolean IsArchive
	{
		Boolean get();
	}
	property Boolean IsCaseInsensitive
	{
		Boolean get();
	}
	property Boolean IsCompressed
	{
		Boolean get();
	}
	property Boolean IsDirectory
	{
		Boolean get();
	}
	property Boolean IsEncrypted
	{
		Boolean get();
	}
	property Boolean IsHidden
	{
		Boolean get();
	}
	property Boolean IsImmutable
	{
		Boolean get();
	}
	property Boolean IsReadOnly
	{
		Boolean get();
	}
	property Boolean IsRegular
	{
		Boolean get();
	}
	property Boolean IsSparse
	{
		Boolean get();
	}
	property Boolean IsSymLink
	{
		Boolean get();
	}
	property Boolean IsSync
	{
		Boolean get();
	}
	property Boolean IsSystem
	{
		Boolean get();
	}
	property Platform::String ^LastAccessTimeStr
	{
		Platform::String ^get();
	}
	property Platform::String ^LastModifiedTimeStr
	{
		Platform::String ^get();
	}
	property Platform::String ^Owner
	{
		Platform::String ^get();
	}
	property int32 Permissions
	{
		int32 get();
	}
	property int32 Size32
	{
		int32 get();
	}
	property int64 Size64
	{
		int64 get();
	}
	property Platform::String ^SizeStr
	{
		Platform::String ^get();
	}
	property int32 Uid
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	CkDateTime ^GetCreateDt(void);

	CkDateTime ^GetLastAccessDt(void);

	CkDateTime ^GetLastModifiedDt(void);



};





}


