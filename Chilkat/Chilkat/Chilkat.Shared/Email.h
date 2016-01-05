
// This header is generated for Chilkat v9.5.0

#pragma once

class CkEmailW;

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
	ref class StringArray;
	ref class CkDateTime;
	ref class CertChain;
	ref class PrivateKey;
	ref class XmlCertVault;


public ref class Email sealed
{
#include "friendDecls.h"
		
	private:
    CkEmailW *m_impl;

	public:
	virtual ~Email(void);
	Email(void);
	//Email(Platform::IntPtr p);

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
	property Platform::String ^Body
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^BounceAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Charset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean Decrypted
	{
		Boolean get();
	}
	property Platform::String ^EmailDateStr
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^EncryptedBy
	{
		Platform::String ^get();
	}
	property Platform::String ^FileDistList
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^From
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^FromAddress
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^FromName
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Header
	{
		Platform::String ^get();
	}
	property Platform::String ^Language
	{
		Platform::String ^get();
	}
	property Platform::String ^LocalDateStr
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Mailer
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 NumAlternatives
	{
		int32 get();
	}
	property int32 NumAttachedMessages
	{
		int32 get();
	}
	property int32 NumAttachments
	{
		int32 get();
	}
	property int32 NumBcc
	{
		int32 get();
	}
	property int32 NumCC
	{
		int32 get();
	}
	property int32 NumDaysOld
	{
		int32 get();
	}
	property int32 NumHeaderFields
	{
		int32 get();
	}
	property int32 NumRelatedItems
	{
		int32 get();
	}
	property int32 NumReplacePatterns
	{
		int32 get();
	}
	property int32 NumReports
	{
		int32 get();
	}
	property int32 NumTo
	{
		int32 get();
	}
	property Boolean OverwriteExisting
	{
		Boolean get();
		void set(Boolean);
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
	property Platform::String ^PreferredCharset
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean PrependHeaders
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean ReceivedEncrypted
	{
		Boolean get();
	}
	property Boolean ReceivedSigned
	{
		Boolean get();
	}
	property Platform::String ^ReplyTo
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean ReturnReceipt
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean SendEncrypted
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean SendSigned
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Sender
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean SignaturesValid
	{
		Boolean get();
	}
	property Platform::String ^SignedBy
	{
		Platform::String ^get();
	}
	property Platform::String ^SigningHashAlg
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 Size
	{
		int32 get();
	}
	property Platform::String ^Subject
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Platform::String ^Uidl
	{
		Platform::String ^get();
	}
	property Boolean UnpackUseRelPaths
	{
		Boolean get();
		void set(Boolean);
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	void AddAttachmentHeader(int index, Platform::String ^fieldName, Platform::String ^fieldValue);

	Boolean AddBcc(Platform::String ^friendlyName, Platform::String ^emailAddress);

	Boolean AddCC(Platform::String ^friendlyName, Platform::String ^emailAddress);

	Boolean AddDataAttachment(Platform::String ^filePath, Windows::Foundation::Collections::IVector<uint8>^content);

	Boolean AddDataAttachment2(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^content, Platform::String ^contentType);

	Boolean AddEncryptCert(Cert ^cert);

	Platform::String ^AddFileAttachment(Platform::String ^path);

	Boolean AddFileAttachment2(Platform::String ^path, Platform::String ^contentType);

	void AddHeaderField(Platform::String ^fieldName, Platform::String ^fieldValue);

	void AddHeaderField2(Platform::String ^fieldName, Platform::String ^fieldValue);

	Boolean AddHtmlAlternativeBody(Platform::String ^body);

	Boolean AddMultipleBcc(Platform::String ^commaSeparatedAddresses);

	Boolean AddMultipleCC(Platform::String ^commaSeparatedAddresses);

	Boolean AddMultipleTo(Platform::String ^commaSeparatedAddresses);

	Boolean AddPfxSourceData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean AddPfxSourceFile(Platform::String ^pfxFilePath, Platform::String ^password);

	Boolean AddPlainTextAlternativeBody(Platform::String ^body);

	Platform::String ^AddRelatedData(Platform::String ^path, Windows::Foundation::Collections::IVector<uint8>^inData);

	void AddRelatedData2(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^fileNameInHtml);

	Platform::String ^AddRelatedFile(Platform::String ^path);

	Boolean AddRelatedFile2(Platform::String ^filenameOnDisk, Platform::String ^filenameInHtml);

	void AddRelatedHeader(int index, Platform::String ^fieldName, Platform::String ^fieldValue);

	Platform::String ^AddRelatedString(Platform::String ^nameInHtml, Platform::String ^str, Platform::String ^charset);

	void AddRelatedString2(Platform::String ^content, Platform::String ^charset, Platform::String ^fileNameInHtml);

	Boolean AddStringAttachment(Platform::String ^path, Platform::String ^content);

	Boolean AddStringAttachment2(Platform::String ^path, Platform::String ^content, Platform::String ^charset);

	Boolean AddTo(Platform::String ^friendlyName, Platform::String ^emailAddress);

	Boolean AddiCalendarAlternativeBody(Platform::String ^body, Platform::String ^methodName);

	Boolean AesDecrypt(Platform::String ^password);

	Boolean AesEncrypt(Platform::String ^password);

	void AppendToBody(Platform::String ^str);

	Boolean AspUnpack(Platform::String ^prefix, Platform::String ^saveDir, Platform::String ^urlPath, Boolean cleanFiles);

	Windows::Foundation::Collections::IVector<uint8>^AspUnpack2(Platform::String ^prefix, Platform::String ^saveDir, Platform::String ^urlPath, Boolean cleanFiles);

	Boolean AttachMessage(Windows::Foundation::Collections::IVector<uint8>^mimeBytes);

	Platform::String ^BEncodeBytes(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset);

	Platform::String ^BEncodeString(Platform::String ^str, Platform::String ^charset);

	void ClearBcc(void);

	void ClearCC(void);

	void ClearEncryptCerts(void);

	void ClearTo(void);

	Email ^Clone(void);

	Platform::String ^ComputeGlobalKey(Platform::String ^encoding, Boolean bFold);

	Email ^CreateDsn(Platform::String ^explanation, Platform::String ^xmlDeliveryStatus, Boolean bHeaderOnly);

	Email ^CreateForward(void);

	Email ^CreateMdn(Platform::String ^explanation, Platform::String ^xmlMdnFields, Boolean bHeaderOnly);

	Email ^CreateReply(void);

	Platform::String ^CreateTempMht(Platform::String ^inFilename);

	void DropAttachments(void);

	void DropRelatedItem(int index);

	void DropRelatedItems(void);

	Boolean DropSingleAttachment(int index);

	Cert ^FindIssuer(Cert ^cert);

	Platform::String ^GenerateFilename(void);

	Platform::String ^GetAltHeaderField(int index, Platform::String ^fieldName);

	Platform::String ^GetAlternativeBody(int index);

	Platform::String ^GetAlternativeBodyByContentType(Platform::String ^contentType);

	Platform::String ^GetAlternativeContentType(int index);

	Email ^GetAttachedMessage(int index);

	Platform::String ^GetAttachedMessageAttr(int index, Platform::String ^fieldName, Platform::String ^attrName);

	Platform::String ^GetAttachedMessageFilename(int index);

	Platform::String ^GetAttachmentAttr(int index, Platform::String ^fieldName, Platform::String ^attrName);

	Platform::String ^GetAttachmentContentID(int index);

	Platform::String ^GetAttachmentContentType(int index);

	Windows::Foundation::Collections::IVector<uint8>^GetAttachmentData(int index);

	Platform::String ^GetAttachmentFilename(int index);

	Platform::String ^GetAttachmentHeader(int attachIndex, Platform::String ^fieldName);

	int GetAttachmentSize(int index);

	Platform::String ^GetAttachmentString(int index, Platform::String ^charset);

	Platform::String ^GetAttachmentStringCrLf(int index, Platform::String ^charset);

	Platform::String ^GetBcc(int index);

	Platform::String ^GetBccAddr(int index);

	Platform::String ^GetBccName(int index);

	Platform::String ^GetCC(int index);

	Platform::String ^GetCcAddr(int index);

	Platform::String ^GetCcName(int index);

	Platform::String ^GetDeliveryStatusInfo(Platform::String ^fieldName);

	StringArray ^GetDsnFinalRecipients(void);

	CkDateTime ^GetDt(void);

	Cert ^GetEncryptCert(void);

	Cert ^GetEncryptedByCert(void);

	Windows::Foundation::Collections::IVector<uint8>^GetFileContent(Platform::String ^path);

	Platform::String ^GetHeaderField(Platform::String ^fieldName);

	Platform::String ^GetHeaderFieldName(int index);

	Platform::String ^GetHeaderFieldValue(int index);

	Platform::String ^GetHtmlBody(void);

	int GetImapUid(void);

	StringArray ^GetLinkedDomains(void);

	Windows::Foundation::Collections::IVector<uint8>^GetMbHeaderField(Platform::String ^fieldName, Platform::String ^charset);

	Windows::Foundation::Collections::IVector<uint8>^GetMbHtmlBody(Platform::String ^charset);

	Windows::Foundation::Collections::IVector<uint8>^GetMbPlainTextBody(Platform::String ^charset);

	Platform::String ^GetMime(void);

	Windows::Foundation::Collections::IVector<uint8>^GetMimeBinary(void);

	Windows::Foundation::Collections::IVector<uint8>^GetNthBinaryPartOfType(int index, Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments);

	Platform::String ^GetNthTextPartOfType(int index, Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments);

	int GetNumPartsOfType(Platform::String ^contentType, Boolean inlineOnly, Boolean excludeAttachments);

	Platform::String ^GetPlainTextBody(void);

	Platform::String ^GetRelatedAttr(int index, Platform::String ^fieldName, Platform::String ^attrName);

	Platform::String ^GetRelatedContentID(int index);

	Platform::String ^GetRelatedContentLocation(int index);

	Platform::String ^GetRelatedContentType(int index);

	Windows::Foundation::Collections::IVector<uint8>^GetRelatedData(int index);

	Platform::String ^GetRelatedFilename(int index);

	Platform::String ^GetRelatedString(int index, Platform::String ^charset);

	Platform::String ^GetRelatedStringCrLf(int index, Platform::String ^charset);

	Platform::String ^GetReplacePattern(int index);

	Platform::String ^GetReplaceString(int index);

	Platform::String ^GetReplaceString2(Platform::String ^pattern);

	Platform::String ^GetReport(int index);

	Cert ^GetSignedByCert(void);

	CertChain ^GetSignedByCertChain(void);

	Cert ^GetSigningCert(void);

	Platform::String ^GetTo(int index);

	Platform::String ^GetToAddr(int index);

	Platform::String ^GetToName(int index);

	Platform::String ^GetXml(void);

	Boolean HasHeaderMatching(Platform::String ^fieldName, Platform::String ^valuePattern, Boolean caseInsensitive);

	Boolean HasHtmlBody(void);

	Boolean HasPlainTextBody(void);

	Boolean IsMultipartReport(void);

	Boolean LoadEml(Platform::String ^mimePath);

	Boolean LoadXml(Platform::String ^xmlPath);

	Boolean LoadXmlString(Platform::String ^xmlStr);

	Platform::String ^QEncodeBytes(Windows::Foundation::Collections::IVector<uint8>^inData, Platform::String ^charset);

	Platform::String ^QEncodeString(Platform::String ^str, Platform::String ^charset);

	void RemoveAttachedMessage(int idx);

	void RemoveAttachedMessages(void);

	void RemoveAttachmentPaths(void);

	void RemoveHeaderField(Platform::String ^fieldName);

	void RemoveHtmlAlternative(void);

	void RemovePlainTextAlternative(void);

	Boolean SaveAllAttachments(Platform::String ^directory);

	Boolean SaveAttachedFile(int index, Platform::String ^directory);

	Boolean SaveEml(Platform::String ^path);

	Boolean SaveRelatedItem(int index, Platform::String ^directory);

	Boolean SaveXml(Platform::String ^path);

	Boolean SetAttachmentCharset(int index, Platform::String ^charset);

	Boolean SetAttachmentDisposition(int index, Platform::String ^disposition);

	Boolean SetAttachmentFilename(int index, Platform::String ^path);

	Boolean SetBinaryBody(Windows::Foundation::Collections::IVector<uint8>^byteData, Platform::String ^contentType, Platform::String ^disposition, Platform::String ^filename);

	Boolean SetDt(Chilkat::CkDateTime ^dt);

	void SetEdifactBody(Platform::String ^message, Platform::String ^name, Platform::String ^filename, Platform::String ^charset);

	Boolean SetEncryptCert(Cert ^cert);

	Boolean SetFromMimeBytes(Windows::Foundation::Collections::IVector<uint8>^mimeBytes);

	Boolean SetFromMimeBytes2(Windows::Foundation::Collections::IVector<uint8>^mimeBytes, Platform::String ^charset);

	Boolean SetFromMimeText(Platform::String ^mimeText);

	Boolean SetFromXmlText(Platform::String ^xmlStr);

	void SetHtmlBody(Platform::String ^html);

	Boolean SetMbHtmlBody(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean SetMbPlainTextBody(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean SetRelatedFilename(int index, Platform::String ^path);

	Boolean SetReplacePattern(Platform::String ^pattern, Platform::String ^replaceString);

	Boolean SetSigningCert(Cert ^cert);

	Boolean SetSigningCert2(Cert ^cert, PrivateKey ^key);

	void SetTextBody(Platform::String ^bodyText, Platform::String ^contentType);

	Boolean UidlEquals(Email ^e);

	void UnSpamify(void);

	Boolean UnpackHtml(Platform::String ^unpackDir, Platform::String ^htmlFilename, Platform::String ^partsSubdir);

	Boolean UnzipAttachments(void);

	Boolean UseCertVault(XmlCertVault ^vault);

	Boolean ZipAttachments(Platform::String ^zipFilename);



};





}


