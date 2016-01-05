
// This header is generated for Chilkat v9.5.0

#pragma once

class CkXmlW;

#if !defined(CK_SFX_INCLUDED)
#define CK_SFX_INCLUDED
#endif
	

	
#include "chilkatClassDecls.h"
	
using namespace Platform;
using namespace Windows::Foundation;
using namespace concurrency;

namespace Chilkat
{



public ref class Xml sealed
{
#include "friendDecls.h"
		
	private:
    CkXmlW *m_impl;

	public:
	virtual ~Xml(void);
	Xml(void);
	//Xml(Platform::IntPtr p);

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
	property Boolean Cdata
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Content
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 ContentInt
	{
		int32 get();
		void set(int32);
	}
	property Platform::String ^DocType
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property Boolean EmitBom
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean EmitXmlDecl
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Encoding
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 NumAttributes
	{
		int32 get();
	}
	property int32 NumChildren
	{
		int32 get();
	}
	property Boolean SortCaseInsensitive
	{
		Boolean get();
		void set(Boolean);
	}
	property Boolean Standalone
	{
		Boolean get();
		void set(Boolean);
	}
	property Platform::String ^Tag
	{
		Platform::String ^get();
		void set(Platform::String ^);
	}
	property int32 TreeId
	{
		int32 get();
	}


	// ----------------------
	// Methods
	// ----------------------
	Boolean SaveLastError(Platform::String ^path);

	Platform::String ^AccumulateTagContent(Platform::String ^tag, Platform::String ^skipTags);

	Boolean AddAttribute(Platform::String ^name, Platform::String ^value);

	Boolean AddAttributeInt(Platform::String ^name, int value);

	Boolean AddChildTree(Xml ^tree);

	void AddOrUpdateAttribute(Platform::String ^name, Platform::String ^value);

	void AddOrUpdateAttributeI(Platform::String ^name, int value);

	void AddStyleSheet(Platform::String ^styleSheet);

	void AddToAttribute(Platform::String ^name, int amount);

	void AddToChildContent(Platform::String ^tag, int amount);

	void AddToContent(int amount);

	Boolean AppendToContent(Platform::String ^str);

	Boolean BEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean ChildContentMatches(Platform::String ^tag, Platform::String ^pattern, Boolean caseSensitive);

	Platform::String ^ChilkatPath(Platform::String ^pathCmd);

	void Clear(void);

	Boolean ContentMatches(Platform::String ^pattern, Boolean caseSensitive);

	void Copy(Xml ^node);

	void CopyRef(Xml ^node);

	Windows::Foundation::Collections::IVector<uint8>^DecodeContent(void);

	Platform::String ^DecodeEntities(Platform::String ^str);

	Boolean DecryptContent(Platform::String ^password);

	Boolean EncryptContent(Platform::String ^password);

	Xml ^ExtractChildByIndex(int index);

	Xml ^ExtractChildByName(Platform::String ^tag, Platform::String ^attrName, Platform::String ^attrValue);

	Xml ^FindChild(Platform::String ^tag);

	Boolean FindChild2(Platform::String ^tag);

	Xml ^FindNextRecord(Platform::String ^tag, Platform::String ^contentPattern);

	Xml ^FindOrAddNewChild(Platform::String ^tag);

	Xml ^FirstChild(void);

	Boolean FirstChild2(void);

	Platform::String ^GetAttrValue(Platform::String ^name);

	int GetAttrValueInt(Platform::String ^name);

	Platform::String ^GetAttributeName(int index);

	Platform::String ^GetAttributeValue(int index);

	int GetAttributeValueInt(int index);

	Windows::Foundation::Collections::IVector<uint8>^GetBinaryContent(Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password);

	Xml ^GetChild(int index);

	Boolean GetChild2(int index);

	Boolean GetChildBoolValue(Platform::String ^tag);

	Platform::String ^GetChildContent(Platform::String ^tag);

	Platform::String ^GetChildContentByIndex(int index);

	Xml ^GetChildExact(Platform::String ^tag, Platform::String ^content);

	int GetChildIntValue(Platform::String ^tag);

	Platform::String ^GetChildTag(int index);

	Platform::String ^GetChildTagByIndex(int index);

	Xml ^GetChildWithAttr(Platform::String ^tag, Platform::String ^attrName, Platform::String ^attrValue);

	Xml ^GetChildWithContent(Platform::String ^content);

	Xml ^GetChildWithTag(Platform::String ^tag);

	Xml ^GetNthChildWithTag(Platform::String ^tag, int n);

	Boolean GetNthChildWithTag2(Platform::String ^tag, int n);

	Xml ^GetParent(void);

	Boolean GetParent2(void);

	Xml ^GetRoot(void);

	void GetRoot2(void);

	Xml ^GetSelf(void);

	Platform::String ^GetXml(void);

	Boolean HasAttrWithValue(Platform::String ^name, Platform::String ^value);

	Boolean HasAttribute(Platform::String ^name);

	Boolean HasChildWithContent(Platform::String ^content);

	Boolean HasChildWithTag(Platform::String ^tag);

	Boolean HasChildWithTagAndContent(Platform::String ^tag, Platform::String ^content);

	void InsertChildTreeAfter(int index, Xml ^tree);

	void InsertChildTreeBefore(int index, Xml ^tree);

	Xml ^LastChild(void);

	Boolean LastChild2(void);

	Boolean LoadXml(Platform::String ^xmlData);

	Boolean LoadXml2(Platform::String ^xmlData, Boolean autoTrim);

	Boolean LoadXmlFile(Platform::String ^fileName);

	Boolean LoadXmlFile2(Platform::String ^fileName, Boolean autoTrim);

	Xml ^NewChild(Platform::String ^tag, Platform::String ^content);

	void NewChild2(Platform::String ^tag, Platform::String ^content);

	Xml ^NewChildAfter(int index, Platform::String ^tag, Platform::String ^content);

	Xml ^NewChildBefore(int index, Platform::String ^tag, Platform::String ^content);

	void NewChildInt2(Platform::String ^tag, int value);

	Xml ^NextSibling(void);

	Boolean NextSibling2(void);

	int NumChildrenHavingTag(Platform::String ^tag);

	Xml ^PreviousSibling(void);

	Boolean PreviousSibling2(void);

	Boolean QEncodeContent(Platform::String ^charset, Windows::Foundation::Collections::IVector<uint8>^inData);

	Boolean RemoveAllAttributes(void);

	void RemoveAllChildren(void);

	Boolean RemoveAttribute(Platform::String ^name);

	void RemoveChild(Platform::String ^tag);

	void RemoveChildByIndex(int index);

	void RemoveChildWithContent(Platform::String ^content);

	void RemoveFromTree(void);

	Boolean SaveBinaryContent(Platform::String ^filename, Boolean unzipFlag, Boolean decryptFlag, Platform::String ^password);

	Boolean SaveXml(Platform::String ^fileName);

	Xml ^SearchAllForContent(Xml ^afterPtr, Platform::String ^contentPattern);

	Boolean SearchAllForContent2(Xml ^afterPtr, Platform::String ^contentPattern);

	Xml ^SearchForAttribute(Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern);

	Boolean SearchForAttribute2(Xml ^afterPtr, Platform::String ^tag, Platform::String ^attr, Platform::String ^valuePattern);

	Xml ^SearchForContent(Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern);

	Boolean SearchForContent2(Xml ^afterPtr, Platform::String ^tag, Platform::String ^contentPattern);

	Xml ^SearchForTag(Xml ^afterPtr, Platform::String ^tag);

	Boolean SearchForTag2(Xml ^afterPtr, Platform::String ^tag);

	Boolean SetBinaryContent(Windows::Foundation::Collections::IVector<uint8>^inData, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password);

	Boolean SetBinaryContentFromFile(Platform::String ^filename, Boolean zipFlag, Boolean encryptFlag, Platform::String ^password);

	void SortByAttribute(Platform::String ^attrName, Boolean ascending);

	void SortByAttributeInt(Platform::String ^attrName, Boolean ascending);

	void SortByContent(Boolean ascending);

	void SortByTag(Boolean ascending);

	void SortRecordsByAttribute(Platform::String ^sortTag, Platform::String ^attrName, Boolean ascending);

	void SortRecordsByContent(Platform::String ^sortTag, Boolean ascending);

	void SortRecordsByContentInt(Platform::String ^sortTag, Boolean ascending);

	Boolean SwapNode(Xml ^node);

	Boolean SwapTree(Xml ^tree);

	Platform::String ^TagContent(Platform::String ^tag);

	Boolean TagEquals(Platform::String ^tag);

	Boolean UnzipContent(void);

	Boolean UnzipTree(void);

	Boolean UpdateAttribute(Platform::String ^attrName, Platform::String ^attrValue);

	Boolean UpdateAttributeInt(Platform::String ^attrName, int value);

	void UpdateChildContent(Platform::String ^tag, Platform::String ^value);

	void UpdateChildContentInt(Platform::String ^tag, int value);

	Boolean ZipContent(void);

	Boolean ZipTree(void);



};





}


