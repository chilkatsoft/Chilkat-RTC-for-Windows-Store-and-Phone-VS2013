
# Chilkat v9.5.0.55 Runtime Component for VS2013 Windows Store and Windows Phone Apps

This repo is the full version (and trial) of the Chilkat Runtime Component for Windows Store and Windows Phone applications using Visual Studio 2013.  The Chilkat API contains both commercial and freeware classes.  Commercial classes must be licensed for use beyond 30 days.  The "Chilkat Bundle" provides licenses to all existing Chilkat commercial classes.


## Build the Chilkat RTC and Samples

1. Download the ZIP and unzip.
2. Start Microsoft Visual Studio 2013 and select **File** \> **Open** \> **Project/Solution**.  Open one of the sample projects, such as **csSample.sln** solution located in the **csSample** subdirectory.
4. Build and run.  Building the sample will automatically cause the referenced Chilkat runtime component to be built if necessary.  The purpose of the sample is to show how to reference the Chilkat Runtime Component and to do something simple.  The sample downloads a file from an HTTP web server.

## Subdirectory Contents


- **Chilkat**: Contains the Chilkat Windows Runtime Component (Universal Apps) project. It is referenced by each of the sample application projects. This is effectively a wrapper around the static native libs. The source for these wrappers are included, which allows for classes to be selectively removed if reducing the size of the DLL is desired.
- **csSample**: Contains a Windows Store C# sample application that demonstrates using Chilkat HTTP to download a file from chilkatsoft.com and monitor the progress. This project has build configurations for both Windows and Windows Phone. The "Chilkat" runtime component project is referenced and is automatically built as needed when building the application.
- **vbPhoneSample**: A sample application identical to csSample, but written in VB.NET and for Windows Phone.
- **vbSample**: A sample application identical to csSample, but written in VB.NET and for Windows.


## Important Notes

- The purpose of the sample projects is only to get a first-time user "off the ground" by providing a project that references the Chilkat RTC, instantiates an object, and interacts with a few methods and properties.  
- Chilkat C# examples are located at [Chilkat C# WinRT Examples](http://www.example-code.com/csharp_winrt/default.asp "Chilkat C# WinRT Examples").
- Chilkat VB.NET examples are located at [Chilkat VB.NET WinRT Examples](http://www.example-code.com/vbnet_winrt/default.asp "Chilkat VB.NET WinRT Examples")
- Reference documentation: [Chilkat C# WinRT Reference Docs](http://www.chilkatsoft.com/refdoc/csharp_winrt.asp) and [Chilkat VB.NET Reference Docs](http://www.chilkatsoft.com/refdoc/vbnet_winrt.asp).



## The Underlying Chilkat Binary Libs

Located in the **chilkatBinaryLibs** directories are the pre-compiled underlying C++ implementations.  Chilkat does not provide source code for the contents of these libraries.  The **Chilkat** project links with these binary libs.  The C++ headers required by the **Chilkat** project are located in the **include** subdirectory.  Your application will never include these headers.


