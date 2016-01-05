
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCertChainW;

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
	ref class TrustedRoots;


public ref class CertChain sealed
{
#include "friendDecls.h"
		
	private:
    CkCertChainW *m_impl;

	public:
	virtual ~CertChain(void);
	CertChain(void);
	//CertChain(Platform::IntPtr p);

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
	property int32 NumCerts
	{
		int32 get();
	}
	property int32 NumExpiredCerts
	{
		int32 get();
	}
	property Boolean ReachesRoot
	{
		Boolean get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Cert ^GetCert(int index);

	Boolean IsRootTrusted(TrustedRoots ^trustedRoots);

	Boolean VerifyCertSignatures(void);



};





}


