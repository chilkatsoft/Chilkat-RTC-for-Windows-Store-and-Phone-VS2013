
// This header is generated for Chilkat v9.5.0

#pragma once

class CkPemW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkPemW.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;
	ref class PrivateKey;
	ref class CertChain;
	ref class PublicKey;
	ref class JavaKeyStore;
	ref class Pfx;


public ref class Pem sealed
{
#include "friendDecls.h"
		
	private:
    CkPemW *m_impl;

	public:
	virtual ~Pem(void);
	Pem(void);
	//Pem(Platform::IntPtr p);

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
	property Boolean AppendMode
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property int32 NumCerts
	{
		int32 get();
	}
	property int32 NumCsrs
	{
		int32 get();
	}
	property int32 NumPrivateKeys
	{
		int32 get();
	}
	property int32 NumPublicKeys
	{
		int32 get();
	}
	property Platform::String ^PrivateKeyFormat
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^PublicKeyFormat
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Boolean AddCert(Cert ^cert, Boolean includeChain);

	Boolean AddPrivateKey(PrivateKey ^privateKey);

	Boolean AddPrivateKey2(PrivateKey ^privKey, CertChain ^certChain);

	Boolean AddPublicKey(PublicKey ^pubkey);

	Boolean Clear(void);

	Cert ^GetCert(int index);

	Platform::String ^GetEncodedItem(Platform::String ^itemType, Platform::String ^itemSubType, Platform::String ^encoding, int index);

	PrivateKey ^GetPrivateKey(int index);

	PublicKey ^GetPublicKey(int index);

	IAsyncOperation<Boolean>^ LoadP7bAsync(Windows::Foundation::Collections::IVector<uint8>^p7bData);

	IAsyncOperation<Boolean>^ LoadP7bFileAsync(Platform::String ^path);

	IAsyncOperation<Boolean>^ LoadPemAsync(Platform::String ^pemContent, Platform::String ^password);

	IAsyncOperation<Boolean>^ LoadPemFileAsync(Platform::String ^path, Platform::String ^password);

	Boolean RemoveCert(int index);

	Boolean RemovePrivateKey(int index);

	JavaKeyStore ^ToJks(Platform::String ^alias, Platform::String ^password);

	Platform::String ^ToPem(void);

	Platform::String ^ToPemEx(Boolean extendedAttrs, Boolean noKeys, Boolean noCerts, Boolean noCaCerts, Platform::String ^encryptAlg, Platform::String ^password);

	Pfx ^ToPfx(void);



};




private class CxPemProgress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Pem ^m_sender;
	CkPemW *m_impl;
	
    private:
	 	CxPemProgress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxPemProgress(CkPemW *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxPemProgress(void)
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


