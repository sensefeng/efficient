========================================================================
    ACTIVE TEMPLATE LIBRARY : Simple_atl Project Overview
========================================================================

AppWizard has created this Simple_atl project for you to use as the starting point for
writing your Dynamic Link Library (DLL).


This file contains a summary of what you will find in each of the files that
make up your project.

Simple_atl.vcproj
    This is the main project file for VC++ projects generated using an Application Wizard. 
    It contains information about the version of Visual C++ that generated the file, and 
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Simple_atl.idl
    This file contains the IDL definitions of the type library, the interfaces
    and co-classes defined in your project.
    This file will be processed by the MIDL compiler to generate:
        C++ interface definitions and GUID declarations (Simple_atl.h)
        GUID definitions                                (Simple_atl_i.c)
        A type library                                  (Simple_atl.tlb)
        Marshaling code                                 (Simple_atl_p.c and dlldata.c)

Simple_atl.h
    This file contains the C++ interface definitions and GUID declarations of the
    items defined in Simple_atl.idl. It will be regenerated by MIDL during compilation.

Simple_atl.cpp
    This file contains the object map and the implementation of your DLL's exports.

Simple_atl.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.

Simple_atl.def
    This module-definition file provides the linker with information about the exports
    required by your DLL. It contains exports for:
        DllGetClassObject  
        DllCanUnloadNow    
        GetProxyDllInfo    
        DllRegisterServer	
        DllUnregisterServer

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Simple_atl.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file that defines resource IDs.

/////////////////////////////////////////////////////////////////////////////
Proxy/stub DLL project and module definition file:

Simple_atlps.vcproj
    This file is the project file for building a proxy/stub DLL if necessary.
	The IDL file in the main project must contain at least one interface and you must 
	first compile the IDL file before building the proxy/stub DLL.	This process generates
	dlldata.c, Simple_atl_i.c and Simple_atl_p.c which are required
	to build the proxy/stub DLL.

Simple_atlps.def
    This module definition file provides the linker with information about the exports
    required by the proxy/stub.

/////////////////////////////////////////////////////////////////////////////
