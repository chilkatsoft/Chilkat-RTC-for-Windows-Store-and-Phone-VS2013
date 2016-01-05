
// This header is generated for Chilkat v9.5.0

#pragma once

class CkCertW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{

	ref class PrivateKey;
	ref class PublicKey;
	ref class CertChain;
	ref class CkDateTime;
	ref class XmlCertVault;


public ref class Cert sealed
{
#include "friendDecls.h"
		
	private:
    CkCertW *m_impl;

	public:
	virtual ~Cert(void);
	Cert(void);
	//Cert(Platform::IntPtr p);

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
	property Platform::String ^AuthorityKeyId
	{
		Platform::String ^get();
	}
	property Boolean AvoidWindowsPkAccess
	{
		Boolean get();
		void set(Boolean);
	}
	property int32 CertVersion
	{
		int32 get();
	}
	property Platform::String ^CspName
	{
		Platform::String ^get();
	}
	property Boolean Expired
	{
		Boolean get();
	}
	property Boolean ForClientAuthentication
	{
		Boolean get();
	}
	property Boolean ForCodeSigning
	{
		Boolean get();
	}
	property Boolean ForSecureEmail
	{
		Boolean get();
	}
	property Boolean ForServerAuthentication
	{
		Boolean get();
	}
	property Boolean ForTimeStamping
	{
		Boolean get();
	}
	property Boolean HasKeyContainer
	{
		Boolean get();
	}
	property uint32 IntendedKeyUsage
	{
		uint32 get();
	}
	property Boolean IsRoot
	{
		Boolean get();
	}
	property Platform::String ^IssuerC
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerCN
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerDN
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerE
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerL
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerO
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerOU
	{
		Platform::String ^get();
	}
	property Platform::String ^IssuerS
	{
		Platform::String ^get();
	}
	property Platform::String ^KeyContainerName
	{
		Platform::String ^get();
	}
	property Boolean MachineKeyset
	{
		Boolean get();
	}
	property Platform::String ^OcspUrl
	{
		Platform::String ^get();
	}
	property Boolean PrivateKeyExportable
	{
		Boolean get();
	}
	property Boolean Revoked
	{
		Boolean get();
	}
	property Platform::String ^Rfc822Name
	{
		Platform::String ^get();
	}
	property Boolean SelfSigned
	{
		Boolean get();
	}
	property Platform::String ^SerialNumber
	{
		Platform::String ^get();
	}
	property Platform::String ^Sha1Thumbprint
	{
		Platform::String ^get();
	}
	property Boolean SignatureVerified
	{
		Boolean get();
	}
	property Boolean Silent
	{
		Boolean get();
	}
	property Platform::String ^SubjectC
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectCN
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectDN
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectE
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectKeyId
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectL
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectO
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectOU
	{
		Platform::String ^get();
	}
	property Platform::String ^SubjectS
	{
		Platform::String ^get();
	}
	property Boolean TrustedRoot
	{
		Boolean get();
	}
	property Platform::String ^ValidFromStr
	{
		Platform::String ^get();
	}
	property Platform::String ^ValidToStr
	{
		Platform::String ^get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	int CheckRevoked(void);

	Windows::Foundation::Collections::IVector<uint8>^ExportCertDer(void);

	Boolean ExportCertDerFile(Platform::String ^path);

	Platform::String ^ExportCertPem(void);

	Boolean ExportCertPemFile(Platform::String ^path);

	Platform::String ^ExportCertXml(void);

	PrivateKey ^ExportPrivateKey(void);

	PublicKey ^ExportPublicKey(void);

	Windows::Foundation::Collections::IVector<uint8>^ExportToPfxData(Platform::String ^password, Boolean includeCertChain);

	Boolean ExportToPfxFile(Platform::String ^pfxFilename, Platform::String ^password, Boolean bIncludeChain);

	Cert ^FindIssuer(void);

	CertChain ^GetCertChain(void);

	Platform::String ^GetEncoded(void);

	Platform::String ^GetExtensionAsXml(Platform::String ^oid);

	Platform::String ^GetPrivateKeyPem(void);

	Platform::String ^GetSpkiFingerprint(Platform::String ^hashAlg, Platform::String ^encoding);

	CkDateTime ^GetValidFromDt(void);

	CkDateTime ^GetValidToDt(void);

	Boolean HasPrivateKey(void);

	Boolean LoadByCommonName(Platform::String ^cn);

	Boolean LoadByEmailAddress(Platform::String ^emailAddress);

	Boolean LoadByIssuerAndSerialNumber(Platform::String ^issuerCN, Platform::String ^serialNum);

	Boolean LoadFromBase64(Platform::String ^encodedCert);

	Boolean LoadFromBinary(Windows::Foundation::Collections::IVector<uint8>^data);

	Boolean LoadFromFile(Platform::String ^path);

	Boolean LoadPem(Platform::String ^strPem);

	Boolean LoadPfxData(Windows::Foundation::Collections::IVector<uint8>^pfxData, Platform::String ^password);

	Boolean LoadPfxFile(Platform::String ^pfxPath, Platform::String ^password);

	Boolean PemFileToDerFile(Platform::String ^fromPath, Platform::String ^toPath);

	Boolean SaveToFile(Platform::String ^path);

	Boolean SetFromEncoded(Platform::String ^encodedCert);

	Boolean SetPrivateKey(PrivateKey ^privKey);

	Boolean SetPrivateKeyPem(Platform::String ^privKeyPem);

	Boolean UseCertVault(XmlCertVault ^vault);

	Boolean VerifySignature(void);



};





}


