
// This header is generated for Chilkat v9.5.0

#pragma once

class CkMimeW;

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
	ref class PrivateKey;
	ref class StringArray;
	ref class CertChain;
	ref class XmlCertVault;


public ref class Mime sealed
{
#include "friendDecls.h"
		
	private:
    CkMimeW *m_impl;

	public:
	virtual ~Mime(void);
	Mime(void);
	//Mime(Platform::IntPtr p);

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
	property Platform::String ^Boundary
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^ContentType
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^CurrentDateTime
	{
		Platform::String ^get();
	}
	property Platform::String ^Disposition
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Encoding
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Filename
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Micalg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Name
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 NumEncryptCerts
	{
		int32 get();
	}
	property int32 NumHeaderFields
	{
		int32 get();
	}
	property int32 NumParts
	{
		int32 get();
	}
	property int32 NumSignerCerts
	{
		int32 get();
	}
	property Platform::String ^Pkcs7CryptAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 Pkcs7KeyLength
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^Protocol
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^SigningHashAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean UnwrapExtras
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseMmDescription
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean UseXPkcs7
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddContentLength(void);

	Boolean AddDecryptCert(Cert ^cert);

	Boolean AddDetachedSignature(Cert ^cert);

	Boolean AddDetachedSignature2(Cert ^cert, Boolean transferHeaderFields);

	Boolean AddDetachedSignaturePk(Cert ^cert, PrivateKey ^privateKey);

	Boolean AddDetachedSignaturePk2(Cert ^cert, PrivateKey ^privateKey, Boolean transferHeaderFields);

	Boolean AddEncryptCert(Cert ^cert);

	Boolean AddHeaderField(Platform::String ^name, Platform::String ^value);

	Boolean AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password);

	Boolean AppendPart(Mime ^mime);

	Boolean AppendPartFromFile(Platform::String ^filename);

	Platform::String ^AsnBodyToXml(void);

	void ClearEncryptCerts(void);

	Boolean ContainsEncryptedParts(void);

	Boolean ContainsSignedParts(void);

	void Convert8Bit(void);

	Boolean ConvertToMultipartAlt(void);

	Boolean ConvertToMultipartMixed(void);

	Boolean ConvertToSigned(Cert ^cert);

	Boolean ConvertToSignedPk(Cert ^cert, PrivateKey ^privateKey);

	Boolean Decrypt(void);

	Boolean Decrypt2(Cert ^cert, PrivateKey ^privateKey);

	Boolean DecryptUsingCert(Cert ^cert);

	Boolean DecryptUsingPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean DecryptUsingPfxFile(Platform::String ^pfxFilePath, Platform::String ^password);

	Boolean Encrypt(Cert ^cert);

	Boolean EncryptN(void);

	StringArray ^ExtractPartsToFiles(Platform::String ^dirPath);

	Cert ^FindIssuer(Cert ^cert);

	Windows::Foundation::Collections::IVector<uint8>^GetBodyBinary(void);

	Platform::String ^GetBodyDecoded(void);

	Platform::String ^GetBodyEncoded(void);

	Cert ^GetEncryptCert(int index);

	Platform::String ^GetEntireBody(void);

	Platform::String ^GetEntireHead(void);

	Platform::String ^GetHeaderField(Platform::String ^name);

	Platform::String ^GetHeaderFieldAttribute(Platform::String ^name, Platform::String ^attrName);

	Platform::String ^GetHeaderFieldName(int index);

	Platform::String ^GetHeaderFieldValue(int index);

	Platform::String ^GetMime(void);

	Windows::Foundation::Collections::IVector<uint8>^GetMimeBytes(void);

	Mime ^GetPart(int index);

	Platform::String ^GetSignatureSigningTimeStr(int index);

	Cert ^GetSignerCert(int index);

	CertChain ^GetSignerCertChain(int index);

	Platform::String ^GetXml(void);

	Boolean HasSignatureSigningTime(int index);

	Boolean IsApplicationData(void);

	Boolean IsAttachment(void);

	Boolean IsAudio(void);

	Boolean IsEncrypted(void);

	Boolean IsHtml(void);

	Boolean IsImage(void);

	Boolean IsMultipart(void);

	Boolean IsMultipartAlternative(void);

	Boolean IsMultipartMixed(void);

	Boolean IsMultipartRelated(void);

	Boolean IsPlainText(void);

	Boolean IsSigned(void);

	Boolean IsText(void);

	Boolean IsUnlocked(void);

	Boolean IsVideo(void);

	Boolean IsXml(void);

	Boolean LoadMime(Platform::String ^mimeMsg);

	Boolean LoadMimeBytes(Windows::Foundation::Collections::IVector<uint8>^binData);

	Boolean LoadMimeFile(Platform::String ^fileName);

	Boolean LoadXml(Platform::String ^xml);

	Boolean LoadXmlFile(Platform::String ^fileName);

	Boolean NewMessageRfc822(Mime ^mimeObject);

	Boolean NewMultipartAlternative(void);

	Boolean NewMultipartMixed(void);

	Boolean NewMultipartRelated(void);

	void RemoveHeaderField(Platform::String ^name, Boolean bAllOccurances);

	Boolean RemovePart(int index);

	Boolean SaveBody(Platform::String ^filename);

	Boolean SaveMime(Platform::String ^filename);

	Boolean SaveXml(Platform::String ^filename);

	void SetBody(Platform::String ^str);

	Boolean SetBodyFromBinary(Windows::Foundation::Collections::IVector<uint8>^binData);

	Boolean SetBodyFromEncoded(Platform::String ^encoding, Platform::String ^str);

	Boolean SetBodyFromFile(Platform::String ^fileName);

	Boolean SetBodyFromHtml(Platform::String ^str);

	Boolean SetBodyFromPlainText(Platform::String ^str);

	Boolean SetBodyFromXml(Platform::String ^str);

	Boolean SetHeaderField(Platform::String ^name, Platform::String ^value);

	Boolean SetVerifyCert(Cert ^cert);

	Boolean UnlockComponent(Platform::String ^unlockCode);

	Boolean UnwrapSecurity(void);

	void UrlEncodeBody(Platform::String ^charset);

	Boolean UseCertVault(XmlCertVault ^vault);

	Boolean Verify(void);



};





}


