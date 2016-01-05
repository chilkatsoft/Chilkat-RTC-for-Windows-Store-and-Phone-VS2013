
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCrypt2W;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	
#include "include/CkBaseProgressW.h"
#include "CxDelegates.h"
#include "CxEventArgs.h"
#include "include/CkCrypt2W.h"

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class Cert;
	ref class CertChain;
	ref class PrivateKey;
	ref class XmlCertVault;


public ref class Crypt2 sealed
{
#include "friendDecls.h"
		
	private:
    CkCrypt2W *m_impl;

	public:
	virtual ~Crypt2(void);
	Crypt2(void);
	//Crypt2(Platform::IntPtr p);

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
	property int32 BlockSize
	{
		int32 get();
	}
	property Boolean CadesEnabled
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^CadesSigPolicyHash
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CadesSigPolicyId
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CadesSigPolicyUri
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CipherMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CompressionAlgorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CryptAlgorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncodingMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean FirstChunk
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^HashAlgorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 HavalRounds
	{
		int32 get();
		void set(int32);
	}
	property int32 HeartbeatMs
	{
		int32 get();
		void set(int32);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^IV
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}
	property Boolean IncludeCertChain
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 InitialCount
	{
		int32 get();
		void set(int32);
	}
	property int32 IterationCount
	{
		int32 get();
		void set(int32);
	}
	property int32 KeyLength
	{
		int32 get();
		void set(int32);
	}
	property Boolean LastChunk
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^MacAlgorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 NumSignerCerts
	{
		int32 get();
	}
	property int32 PaddingScheme
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^PbesAlgorithm
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^PbesPassword
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Pkcs7CryptAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 Rc2EffectiveKeyLength
	{
		int32 get();
		void set(int32);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^Salt
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}
	property Windows::Foundation::Collections::IVector<uint8> ^SecretKey
	{
		Windows::Foundation::Collections::IVector<uint8> ^get();
		void set(Windows::Foundation::Collections::IVector<uint8> ^);
	}
	property Platform::String ^UuFilename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^UuMode
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddEncryptCert(Cert ^cert);

	Boolean AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password);

	Windows::Foundation::Collections::IVector<uint8>^ByteSwap4321(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^BytesToString(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset);

	IAsyncOperation<Boolean>^ CkDecryptFileAsync(Platform::String ^srcFile, Platform::String ^destFile);

	IAsyncOperation<Boolean>^ CkEncryptFileAsync(Platform::String ^srcFile, Platform::String ^destFile);

	void ClearEncryptCerts(void);

	Windows::Foundation::Collections::IVector<uint8>^CompressBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^CompressBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^CompressString(Platform::String ^str);

	Platform::String ^CompressStringENC(Platform::String ^str);

	uint32 CrcBytes(Platform::String ^crcAlg, Windows::Foundation::Collections::IVector<uint8>^byteData);

	IAsyncOperation<uint32>^ CrcFileAsync(Platform::String ^crcAlg, Platform::String ^path);

	Boolean CreateDetachedSignature(Platform::String ^filename, Platform::String ^sigFile);

	Boolean CreateP7M(Platform::String ^inFilename, Platform::String ^p7mPath);

	Boolean CreateP7S(Platform::String ^inFilename, Platform::String ^p7sFilename);

	Windows::Foundation::Collections::IVector<uint8>^Decode(Platform::String ^str, Platform::String ^encoding);

	Platform::String ^DecodeString(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^DecryptBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^DecryptBytesENC(Platform::String ^str);

	Platform::String ^DecryptEncoded(Platform::String ^str);

	Platform::String ^DecryptString(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^DecryptStringENC(Platform::String ^str);

	Platform::String ^Encode(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^encoding);

	Platform::String ^EncodeString(Platform::String ^inStr, Platform::String ^charset, Platform::String ^encoding);

	Windows::Foundation::Collections::IVector<uint8>^EncryptBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^EncryptBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^EncryptEncoded(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^EncryptString(Platform::String ^str);

	Platform::String ^EncryptStringENC(Platform::String ^str);

	Platform::String ^GenEncodedSecretKey(Platform::String ^password, Platform::String ^encoding);

	Platform::String ^GenRandomBytesENC(int numBytes);

	Windows::Foundation::Collections::IVector<uint8>^GenerateSecretKey(Platform::String ^password);

	Platform::String ^GenerateUuid(void);

	Cert ^GetDecryptCert(void);

	Platform::String ^GetEncodedAad(Platform::String ^encoding);

	Platform::String ^GetEncodedAuthTag(Platform::String ^encoding);

	Platform::String ^GetEncodedIV(Platform::String ^encoding);

	Platform::String ^GetEncodedKey(Platform::String ^encoding);

	Platform::String ^GetEncodedSalt(Platform::String ^encoding);

	Cert ^GetLastCert(void);

	Platform::String ^GetSignatureSigningTimeStr(int index);

	Cert ^GetSignerCert(int index);

	CertChain ^GetSignerCertChain(int index);

	Boolean HasSignatureSigningTime(int index);

	Boolean HashBeginBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean HashBeginString(Platform::String ^strData);

	Windows::Foundation::Collections::IVector<uint8>^HashBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^HashBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	IAsyncOperation<Windows::Foundation::Collections::IVector<uint8>^>^ HashFileAsync(Platform::String ^filename);

	IAsyncOperation<Platform::String ^>^ HashFileENCAsync(Platform::String ^filename);

	Windows::Foundation::Collections::IVector<uint8>^HashFinal(void);

	Platform::String ^HashFinalENC(void);

	Boolean HashMoreBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean HashMoreString(Platform::String ^strData);

	Windows::Foundation::Collections::IVector<uint8>^HashString(Platform::String ^str);

	Platform::String ^HashStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^HmacBytes(Windows::Foundation::Collections::IVector<uint8>^inBytes);

	Platform::String ^HmacBytesENC(Windows::Foundation::Collections::IVector<uint8>^inBytes);

	Windows::Foundation::Collections::IVector<uint8>^HmacString(Platform::String ^inText);

	Platform::String ^HmacStringENC(Platform::String ^inText);

	Windows::Foundation::Collections::IVector<uint8>^InflateBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^InflateBytesENC(Platform::String ^str);

	Platform::String ^InflateString(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^InflateStringENC(Platform::String ^str);

	Boolean IsUnlocked(void);

	Windows::Foundation::Collections::IVector<uint8>^MacBytes(Windows::Foundation::Collections::IVector<uint8>^inBytes);

	Platform::String ^MacBytesENC(Windows::Foundation::Collections::IVector<uint8>^inBytes);

	Windows::Foundation::Collections::IVector<uint8>^MacString(Platform::String ^inText);

	Platform::String ^MacStringENC(Platform::String ^inText);

	Platform::String ^MySqlAesDecrypt(Platform::String ^strEncrypted, Platform::String ^strKey);

	Platform::String ^MySqlAesEncrypt(Platform::String ^strData, Platform::String ^strKey);

	Windows::Foundation::Collections::IVector<uint8>^OpaqueSignBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^OpaqueSignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^OpaqueSignString(Platform::String ^str);

	Platform::String ^OpaqueSignStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^OpaqueVerifyBytes(Windows::Foundation::Collections::IVector<uint8>^p7s);

	Windows::Foundation::Collections::IVector<uint8>^OpaqueVerifyBytesENC(Platform::String ^p7s);

	Platform::String ^OpaqueVerifyString(Windows::Foundation::Collections::IVector<uint8>^p7s);

	Platform::String ^OpaqueVerifyStringENC(Platform::String ^p7s);

	Platform::String ^Pbkdf1(Platform::String ^password, Platform::String ^charset, Platform::String ^hashAlg, Platform::String ^salt, int iterationCount, int outputKeyBitLen, Platform::String ^encoding);

	Platform::String ^Pbkdf2(Platform::String ^password, Platform::String ^charset, Platform::String ^hashAlg, Platform::String ^salt, int iterationCount, int outputKeyBitLen, Platform::String ^encoding);

	Platform::String ^Pkcs7ExtractDigest(int signerIndex, Platform::String ^pkcs7);

	void RandomizeIV(void);

	void RandomizeKey(void);

	Platform::String ^ReEncode(Platform::String ^data, Platform::String ^fromEncoding, Platform::String ^toEncoding);

	Windows::Foundation::Collections::IVector<uint8>^ReadFile(Platform::String ^filename);

	Boolean SetDecryptCert(Cert ^cert);

	Boolean SetDecryptCert2(Cert ^cert, PrivateKey ^key);

	Boolean SetEncodedAad(Platform::String ^aadStr, Platform::String ^encoding);

	Boolean SetEncodedAuthTag(Platform::String ^authTagStr, Platform::String ^encoding);

	void SetEncodedIV(Platform::String ^ivStr, Platform::String ^encoding);

	void SetEncodedKey(Platform::String ^keyStr, Platform::String ^encoding);

	void SetEncodedSalt(Platform::String ^saltStr, Platform::String ^encoding);

	Boolean SetEncryptCert(Cert ^cert);

	void SetHmacKeyBytes(Windows::Foundation::Collections::IVector<uint8>^keyBytes);

	void SetHmacKeyEncoded(Platform::String ^key, Platform::String ^encoding);

	void SetHmacKeyString(Platform::String ^key);

	Boolean SetMacKeyBytes(Windows::Foundation::Collections::IVector<uint8>^keyBytes);

	Boolean SetMacKeyEncoded(Platform::String ^key, Platform::String ^encoding);

	Boolean SetMacKeyString(Platform::String ^key);

	void SetSecretKeyViaPassword(Platform::String ^password);

	Boolean SetSigningCert(Cert ^cert);

	Boolean SetSigningCert2(Cert ^cert, PrivateKey ^key);

	Boolean SetVerifyCert(Cert ^cert);

	Windows::Foundation::Collections::IVector<uint8>^SignBytes(Windows::Foundation::Collections::IVector<uint8>^data);

	Platform::String ^SignBytesENC(Windows::Foundation::Collections::IVector<uint8>^data);

	Windows::Foundation::Collections::IVector<uint8>^SignString(Platform::String ^str);

	Platform::String ^SignStringENC(Platform::String ^str);

	Windows::Foundation::Collections::IVector<uint8>^StringToBytes(Platform::String ^inStr, Platform::String ^charset);

	Platform::String ^TrimEndingWith(Platform::String ^inStr, Platform::String ^ending);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean UseCertVault(XmlCertVault ^vault);

	Boolean VerifyBytes(Windows::Foundation::Collections::IVector<uint8>^data, Windows::Foundation::Collections::IVector<uint8>^sig);

	Boolean VerifyBytesENC(Windows::Foundation::Collections::IVector<uint8>^data, Platform::String ^encodedSig);

	Boolean VerifyDetachedSignature(Platform::String ^filename, Platform::String ^sigFile);

	Boolean VerifyP7M(Platform::String ^p7mPath, Platform::String ^destPath);

	Boolean VerifyP7S(Platform::String ^inFilename, Platform::String ^p7sFilename);

	Boolean VerifyString(Platform::String ^str, Windows::Foundation::Collections::IVector<uint8>^sig);

	Boolean VerifyStringENC(Platform::String ^str, Platform::String ^encodedSig);

	Boolean WriteFile(Platform::String ^filename, Windows::Foundation::Collections::IVector<uint8>^fileData);



};




private class CxCrypt2Progress : public CkBaseProgressW
    {
	

    public:
	Chilkat::Crypt2 ^m_sender;
	CkCrypt2W *m_impl;
	
    private:
	 	CxCrypt2Progress(void) : m_impl(0)
		    {
		    m_sender = nullptr;
		    }
   	
	public:
	CxCrypt2Progress(CkCrypt2W *pImpl) : m_impl(pImpl)
	    {
	    m_sender = nullptr;
	    m_impl->put_EventCallbackObject(this);
	    }

	virtual ~CxCrypt2Progress(void)
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


