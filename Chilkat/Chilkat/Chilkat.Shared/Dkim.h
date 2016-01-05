
// This header is generated for Chilkat v9.5.0

#pragma once

class CkDkimW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkDkimW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Dkim sealed
{
#include "friendDecls.h"
		
	private:
    CkDkimW *m_impl;

	public:
	virtual ~Dkim(void);
	Dkim(void);
	//Dkim(Platform::IntPtr p);

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
	property Platform::String ^DkimAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 DkimBodyLengthCount
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DkimCanon
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DkimDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DkimHeaders
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DkimSelector
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DomainKeyAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DomainKeyCanon
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DomainKeyDomain
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DomainKeyHeaders
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^DomainKeySelector
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

	Windows::Foundation::Collections::IVector<uint8>^AddDkimSignature(Windows::Foundation::Collections::IVector<uint8>^mimeIn);

	Windows::Foundation::Collections::IVector<uint8>^AddDomainKeySignature(Windows::Foundation::Collections::IVector<uint8>^mimeIn);

	Boolean LoadDkimPk(Platform::String ^privateKey, Platform::String ^optionalPassword);

	Boolean LoadDkimPkBytes(Windows::Foundation::Collections::IVector<uint8>^privateKeyDer, Platform::String ^optionalPassword);

	Boolean LoadDkimPkFile(Platform::String ^privateKeyFilepath, Platform::String ^optionalPassword);

	Boolean LoadDomainKeyPk(Platform::String ^privateKey, Platform::String ^optionalPassword);

	Boolean LoadDomainKeyPkBytes(Windows::Foundation::Collections::IVector<uint8>^privateKeyDer, Platform::String ^optionalPassword);

	Boolean LoadDomainKeyPkFile(Platform::String ^privateKeyFilepath, Platform::String ^optionalPassword);

	Boolean LoadPublicKey(Platform::String ^selector, Platform::String ^domain, Platform::String ^publicKey);

	Boolean LoadPublicKeyFile(Platform::String ^selector, Platform::String ^domain, Platform::String ^publicKeyFilepath);

	int NumDkimSignatures(Windows::Foundation::Collections::IVector<uint8>^mimeData);

	int NumDomainKeySignatures(Windows::Foundation::Collections::IVector<uint8>^mimeData);

	IAsyncOperation<Boolean>^ PrefetchPublicKeyAsync(Platform::String ^selector, Platform::String ^domain);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	IAsyncOperation<Boolean>^ VerifyDkimSignatureAsync(int sigIdx, Windows::Foundation::Collections::IVector<uint8>^mimeData);

	IAsyncOperation<Boolean>^ VerifyDomainKeySignatureAsync(int sigIdx, Windows::Foundation::Collections::IVector<uint8>^mimeData);



};




private class CxDkimProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Dkim ^m_sender;
	CkDkimW *m_impl;
	
    private:
	 	CxDkimProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxDkimProgress(CkDkimW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxDkimProgress(void)
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


