
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCertStoreW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;


public ref class CertStore sealed
{
#include "friendDecls.h"
		
	private:
    CkCertStoreW *m_impl;

	public:
	virtual ~CertStore(void);
	CertStore(void);
	//CertStore(Platform::IntPtr p);

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
	property Boolean AvoidWindowsPkAccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 NumCertificates
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Cert ^FindCertByRfc822Name(Platform::String ^name);

	Cert ^FindCertBySerial(Platform::String ^str);

	Cert ^FindCertBySha1Thumbprint(Platform::String ^str);

	Cert ^FindCertBySubject(Platform::String ^str);

	Cert ^FindCertBySubjectCN(Platform::String ^str);

	Cert ^FindCertBySubjectE(Platform::String ^str);

	Cert ^FindCertBySubjectO(Platform::String ^str);

	Cert ^FindCertForEmail(Platform::String ^emailAddress);

	Cert ^GetCertificate(int index);

	Boolean LoadPemFile(Platform::String ^pemPath);

	Boolean LoadPemStr(Platform::String ^pemString);

	Boolean LoadPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean LoadPfxFile(Platform::String ^pfxFilename, Platform::String ^password);



};





}


