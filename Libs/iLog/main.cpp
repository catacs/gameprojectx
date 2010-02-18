#include "iLog.h"

#include <iostream>
#include <streambuf>
#include <fstream>
#include <sstream>
#include <string>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
//#include "intrin.h"


using namespace std;



void iTmLog::Init()
{
	bLogInitialized = true;
    m_iID=0;
    m_bErrorExit = false;
    ofsXMLDatabase  = new ofstream("XMLOutputWithComplexXSLT.xml", ios::out);
    ofsProfileData  = new ofstream("HTMLOutputOfProfileData.html", ios::out);
    m_sMessageStream = new stringstream;
    m_sAssertStream = new stringstream;


    (*ofsXMLDatabase) << "<?xml version=\"1.0\"?>\n";
    (*ofsXMLDatabase) << "<?xml-stylesheet type=\"text/xsl\" href=\"ComplexXSLT.xsl\" ?>\n\n\n";
    (*ofsXMLDatabase) << "<RunTimeLog>"  << endl;
    CleanMessageStream();

    WriteHeader();
}

iTmLog::iTmLog()
{ 
	bLogInitialized = false;
	Init();
}

iTmLog::~iTmLog()
{
	End();
}


void iTmLog::CloseLog()
{
    // Sbsolutelly necesary, if we dont clse the xml, nothing will show in he log.
    (*ofsXMLDatabase) << "</RunTimeLog>"  << endl;

    // Only do extra stuff if not finishing on a error.
    if(!m_bErrorExit)
    {
        WriteProfile();
    }

}


void iTmLog::WriteProfile()
{
    // Write the profile data
    (*ofsProfileData) << "<html> <head></head> <body bgcolor=\"#FFFFFF\" > <font size=\"3\" face=\"Arial\" color=\"#2060AA\"> <center> <a href=\"LogView.html\">Back</a><br/> <br/> <table  border=\"5\" cellpadding=\"4\">" << endl;

    // Start the table header
    (*ofsProfileData) << "<tr>  <td> <b> ..:: Sample Name ::.. </b> </td> <td> .:: Average Time ::. </td> <td> .:: Max Time ::.</td> <td> .:: Min Time ::. </td> </tr>" << endl;

    int color=0x000000;

    // Write all the samples
    for(unsigned int i =0; i< ProfileVector.size(); i++)
    {
        color = (*ProfileVector.at(i)).m_iDepth * 1444;

        (*ofsProfileData) << "<tr>"<< endl;

        (*ofsProfileData) << "<td>"<< "<font color = \"#"<< color <<"\">" ;
        for(int j =0; j<(*ProfileVector.at(i)).m_iDepth; j++) (*ofsProfileData) << "--";
        (*ofsProfileData) << (*ProfileVector.at(i)).m_sName << "</font>" << "</td> ";

        (*ofsProfileData) << "<td align=\"center\">" << "<font color = \"#"<< color <<"\">" << (*ProfileVector.at(i)).m_iTotalTime /(*ProfileVector.at(i)).m_iTimesCalled <<"</font>" << "</td> "
                          << "<td align=\"center\">" << "<font color = \"#"<< color <<"\">" << (*ProfileVector.at(i)).m_iMaxTime << "</font>" << "</td> "
                          << "<td align=\"center\">" << "<font color = \"#"<< color <<"\">" << (*ProfileVector.at(i)).m_iMinTime<< "</font>" << "</td> " << endl;
        (*ofsProfileData) << "</tr>"<< endl;
        //(*ofsProfileData) << "</font>" << endl;
    }

    // Close all the open elements and the html document
    (*ofsProfileData) << "</table></center></font></body></html>" << endl;
}


stringstream*   iTmLog::GetMessageStream()
{
	if(!bLogInitialized) Init();
	return m_sMessageStream;
}

stringstream*   iTmLog::GetAssertStream(){CleanAssertStream();  return m_sAssertStream;}

const char*     iTmLog::GetAssertMsg(){return (*m_sAssertStream).str().c_str();}



void  iTmLog::CleanMessageStream()
{
    m_sMessageStream->flush();
    m_sMessageStream->str("");
}

void iTmLog::CleanAssertStream()
{
    m_sAssertStream->flush();
    m_sAssertStream->str("");
}



void  iTmLog::End()
{
	if(!bLogInitialized) return;
    //(*ofsXMLDatabase) << "</RunTimeLog>"  << endl;
	
	bLogInitialized = false;

    CloseLog();

    ofsXMLDatabase->close();
    ofsProfileData->close();
    delete m_sMessageStream;
    delete m_sAssertStream;
    for(unsigned int i =0; i <  ProfileVector.size(); i++) delete ProfileVector.at(i);
    //ofsXMLDatabase needs a delete?

}





string  iTmLog::GetHumanTime(int ticks)
{
    m_iMiliseconds = ticks % CLOCKS_PER_SEC;
    m_iTotalseconds = ticks / CLOCKS_PER_SEC;
    m_iSeconds = m_iTotalseconds % 60;
    m_iMinutes = m_iTotalseconds / 60;

    stringstream HumanTime;
    HumanTime << m_iMinutes << " min, " << m_iSeconds << " secs, " << m_iMiliseconds << " ms";

    return HumanTime.str();
}





string  iTmLog::GetType(int type)
{
    switch(type)
    {
        case LOG_Error:     return string("Error"); break;
        case LOG_Warning:   return string("Warning"); break;
        case LOG_Comment:   return string("Comment"); break;
        case LOG_Event:     return string("Event"); break;
        case LOG_Debug:     return string("Debug"); break;
        case LOG_Message:   return string("Message"); break;
        default:            return string("Unknown");

    }

}





void  iTmLog::WriteLogEntry( int iEntryType,
                            string strSourceFile,
                            string strFunction,
                            int iSourceLine,
                            string strMessage)
{

    (*ofsXMLDatabase) << "<LogEvent id=\""  << m_iID  << "\">"  << endl;
    (*ofsXMLDatabase) << "  <Type>"  << GetType(iEntryType)  << "</Type>"  << endl;
    (*ofsXMLDatabase) << "  <TimeIndex>"  << GetHumanTime( clock() )  << "</TimeIndex>"  << endl;
    (*ofsXMLDatabase) << "  <NameSpace>"  << " "  << "</NameSpace>"  << endl;

    size_t found = strSourceFile.find_last_of("\\");

    (*ofsXMLDatabase) << "  <File>"  << strSourceFile.substr(found+1)  << "</File>"   << endl;
    (*ofsXMLDatabase) << "  <Function>"  << strFunction  << "()</Function>"   << endl;
    (*ofsXMLDatabase) << "  <LineNumber>"  << iSourceLine  << "</LineNumber>"   << endl;
    (*ofsXMLDatabase) << "  <Message>"  << strMessage  << "</Message>"   << endl;

    (*ofsXMLDatabase) << "</LogEvent> \n"    << endl;

    ofsXMLDatabase->flush( );
    m_iID++;

}


void  iTmLog::WriteHeader()
{
    // Some XML Filling
   (*ofsXMLDatabase) << "<LogHeader>"  << endl;
   (*ofsXMLDatabase) << "<OutputLevel>" << "The Log Output Level is: " << SYSTEM_DEBUG_LEVEL << "</OutputLevel>" << endl;
   (*ofsXMLDatabase) << "<Session>"  << endl;
   (*ofsXMLDatabase) << "<Started>"  << endl;

   // Retrieving System time and date:
   SYSTEMTIME st;
   GetSystemTime(&st);
   stringstream timestream;
   stringstream datestream;
   datestream << "Year: " << st.wYear << " Month: " << st.wMonth << " Date: " << st.wDay;
   timestream << st.wHour << " : " << st.wMinute << " : " << st.wSecond;

    // Loging date & time
   (*ofsXMLDatabase) << "<Time>" << timestream.str() << "</Time>" << endl;
   (*ofsXMLDatabase) << "<Date>" << datestream.str() << "</Date>" << endl;

   (*ofsXMLDatabase) << "</Started>"  << endl;

   (*ofsXMLDatabase) << "<Configuration>"  << endl;

   //LogOS();

   //LogCPU();

   //LogRAM();

   (*ofsXMLDatabase) << "</Configuration>"  << endl;
   (*ofsXMLDatabase) << "</Session>"  << endl;
   (*ofsXMLDatabase) << "</LogHeader>\n\n"  << endl;

   CleanMessageStream();


}


/// ---------------- Following Code Curtesy of Evil Steve (GameDev.com) ------------------- ///


 void  iTmLog::ErrorBox(const string& strError)
{
	MessageBoxA(NULL, strError.c_str(), "Error", MB_ICONERROR);
}




//DWORD  iTmLog::ReadCPUSpeedFromRegistry(DWORD dwCPU)
//{
//HKEY hKey;
//DWORD dwSpeed;
//
//	// Get the key name
//	char szKey[256];
//	_snprintf(szKey, sizeof(szKey),"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\%d\\", dwCPU);
//
//	// Open the key
//	if(RegOpenKeyExA(HKEY_LOCAL_MACHINE,szKey, 0, KEY_QUERY_VALUE, &hKey) != ERROR_SUCCESS)
//	{
//		return 0;
//	}
//
//	// Read the value
//	DWORD dwLen = 4;
//	if(RegQueryValueExA(hKey, "~MHz", NULL, NULL, (LPBYTE)&dwSpeed, &dwLen) != ERROR_SUCCESS)
//	{
//		RegCloseKey(hKey);
//		return 0;
//	}
//
//	// Cleanup and return
//	RegCloseKey(hKey);
//    return dwSpeed;
//}



//
//
//void  iTmLog::LogCPU()
//{
//    (*ofsXMLDatabase) << "<Processor>"  << endl;
//
//    unsigned nHighestFeature;
//    unsigned nHighestFeatureEx;
//    int nBuff[4];
//    char szMan[13];
//    char szFeatures[256];
//    unsigned nProcessorType;
//
//	// Get CPU manufacturer and highest CPUID
//	__cpuid(nBuff, 0);
//	nHighestFeature = (unsigned)nBuff[0];
//	*(int*)&szMan[0] = nBuff[1];
//	*(int*)&szMan[4] = nBuff[3];
//	*(int*)&szMan[8] = nBuff[2];
//	szMan[12] = 0;
//	if(strcmp(szMan, "AuthenticAMD") == 0)
//		nProcessorType = PROCESSOR_AMD;
//	else if(strcmp(szMan, "GenuineIntel") == 0)
//		nProcessorType = PROCESSOR_INTEL;
//	else
//		nProcessorType = PROCESSOR_UNKNOWN;
//
//	// Get highest extended feature
//	__cpuid(nBuff, 0x80000000);
//	nHighestFeatureEx = (unsigned)nBuff[0];
//
//	// Get processor brand name
//	if(nHighestFeatureEx >= 0x80000004)
//	{
//		char szCPUName[49];
//		szCPUName[0] = 0;
//		__cpuid((int*)&szCPUName[0], 0x80000002);
//		__cpuid((int*)&szCPUName[16], 0x80000003);
//		__cpuid((int*)&szCPUName[32], 0x80000004);
//		szCPUName[48] = 0;
//		for(int i=(int)strlen(szCPUName)-1; i>=0; --i)
//		{
//			if(szCPUName[i] == ' ')
//				szCPUName[i] = '\0';
//			else
//				break;
//		}
//
//        (*ofsXMLDatabase) << "<Family>"  << szCPUName <<"</Family> " << endl;
//		(*ofsXMLDatabase) << "<Vendor> "  << szMan << "</Vendor>" << endl;
//
//
//	}
//	else
//	{
//	    (*ofsXMLDatabase) << "<Family></Family> " << endl;
//		(*ofsXMLDatabase) << "<Vendor> "  << szMan << "</Vendor>" << endl;
//	}
//
//	// Get CPU features
//	stringstream featurestream;
//	szFeatures[0] = 0;
//	if(nHighestFeature >= 1)
//	{
//		__cpuid(nBuff, 1);
//		if(nBuff[3] & 1<<0)
//			strcat(szFeatures, "FPU ");
//		if(nBuff[3] & 1<<23)
//			strcat(szFeatures, "MMX ");
//		if(nBuff[3] & 1<<25)
//			strcat(szFeatures, "SSE ");
//		if(nBuff[3] & 1<<26)
//			strcat(szFeatures, "SSE2 ");
//		if(nBuff[2] & 1<<0)
//			strcat(szFeatures, "SSE3 ");
//
//		// Intel specific:
//		if(nProcessorType == PROCESSOR_INTEL)
//		{
//			if(nBuff[2] & 1<<9)
//				strcat(szFeatures, "SSSE3 ");
//			if(nBuff[2] & 1<<7)
//				strcat(szFeatures, "EST ");
//		}
//
//		if(nBuff[3] & 1<<28)
//			strcat(szFeatures, "HTT ");
//	}
//
//	// AMD specific:
//	if(nProcessorType == PROCESSOR_AMD)
//	{
//		// Get extended features
//		__cpuid(nBuff, 0x80000000);
//		if(nHighestFeatureEx >= 0x80000001)
//		{
//			__cpuid(nBuff, 0x80000001);
//			if(nBuff[3] & 1<<31)
//				strcat(szFeatures, "3DNow! ");
//			if(nBuff[3] & 1<<30)
//				strcat(szFeatures, "Ex3DNow! ");
//			if(nBuff[3] & 1<<22)
//				strcat(szFeatures, "MmxExt ");
//		}
//
//		// Get level 1 cache size
//		if(nHighestFeatureEx >= 0x80000005)
//		{
//			__cpuid(nBuff, 0x80000005);
//
//			featurestream <<  "L1 cache size: " << (((unsigned)nBuff[2])>>24) << ". ";
//		}
//	}
//
//	// Get cache size
//	if(nHighestFeatureEx >= 0x80000006)
//	{
//		__cpuid(nBuff, 0x80000006);
//		featurestream <<  "L2 cache size: " << (((unsigned)nBuff[2])>>16) << ". ";
//	}
//
//	// Log features
//	(*ofsXMLDatabase) << "<Features>"<< szFeatures << ", " << featurestream.str() <<"</Features> " << endl;
//
//	// Get misc system info
//	SYSTEM_INFO theInfo;
//	GetSystemInfo(&theInfo);
//	stringstream cpuinfostream;
//
//	// Log number of CPUs and speeds
//	cpuinfostream<< " Number of CPUs: " << theInfo.dwNumberOfProcessors << ", of speeds: ";
//	for(DWORD i=0; i<theInfo.dwNumberOfProcessors; ++i)
//	{
//		DWORD dwCPUSpeed = ReadCPUSpeedFromRegistry(i);
//		cpuinfostream<< " CPU" << i <<"  speed:" << dwCPUSpeed<< " ~MHz, ";
//	}
//    (*ofsXMLDatabase) << "<ClockSpeed>"<< cpuinfostream.str() <<"</ClockSpeed> " << endl;
//
//	(*ofsXMLDatabase) << "</Processor>"  << endl;
//}
//
//
//void  iTmLog::LogRAM()
//{
//    (*ofsXMLDatabase) << "<Memory>"  << endl;
//	// Get memory status
//	MEMORYSTATUS theStatus;
//	ZeroMemory(&theStatus,sizeof(theStatus));
//	theStatus.dwLength = sizeof(theStatus);
//	GlobalMemoryStatus(&theStatus);
//
//	// Log it
//	DWORD dwRAM = (DWORD)(theStatus.dwTotalPhys/(1024*1024));
//	if(theStatus.dwTotalPhys != dwRAM*1024*1024)
//		++dwRAM;
//
//    (*ofsXMLDatabase) << "<Total>"<< dwRAM <<"Mb </Total>"  << endl;
//    (*ofsXMLDatabase) << "<Available>"<< theStatus.dwAvailPhys/(1024*1024) <<"Mb </Available>"  << endl;
//
//    (*ofsXMLDatabase) << "</Memory>"  << endl;
//}
//
//
//
//
//
//void  iTmLog::LogOS()
//{
//    char szOS[256];
//    OSVERSIONINFOEXA osInfo;
//    SYSTEM_INFO sysInfo;
//
//	// Get system info
//	ZeroMemory(&sysInfo, sizeof(sysInfo));
//	GetSystemInfo(&sysInfo);
//
//	// Get OS version
//	strcpy(szOS, " OS: ");
//	ZeroMemory(&osInfo, sizeof(osInfo));
//	osInfo.dwOSVersionInfoSize = sizeof(osInfo);
//	if(!GetVersionExA((OSVERSIONINFOA*)&osInfo))
//	{
//		ZeroMemory(&osInfo, sizeof(osInfo));
//		osInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOA);
//		GetVersionExA((OSVERSIONINFOA*)&osInfo);
//	}
//
//	// Win 9x
//	if(osInfo.dwPlatformId == 1)
//	{
//		if((osInfo.dwMajorVersion == 4) && (osInfo.dwMinorVersion == 0))
//			strcat(szOS, "Windows 95 ");
//		else if((osInfo.dwMajorVersion == 4) && (osInfo.dwMinorVersion == 10))
//			strcat(szOS, "Windows 98 ");
//		else if((osInfo.dwMajorVersion == 4) && (osInfo.dwMinorVersion == 90))
//			strcat(szOS, "Windows ME ");
//		else
//			strcat(szOS, "Unknown Windows OS ");
//	}
//
//	// Win NT
//	else if(osInfo.dwPlatformId == 2)
//	{
//		if((osInfo.dwMajorVersion == 4) && (osInfo.dwMinorVersion == 0))
//			strcat(szOS, "Windows NT 4.0 ");
//		else if((osInfo.dwMajorVersion == 5) && (osInfo.dwMinorVersion == 0))
//			strcat(szOS, "Windows 2000 ");
//		else if((osInfo.dwMajorVersion == 5) && (osInfo.dwMinorVersion == 1))
//			strcat(szOS, "Windows XP ");
//		else if((osInfo.dwMajorVersion == 5) && (osInfo.dwMinorVersion == 2))
//		{
//			if(GetSystemMetrics(89))	// SM_SERVERR2 == 89
//				strcat(szOS, "Windows Server 2003 R2 ");
//			else if((osInfo.wProductType == VER_NT_WORKSTATION) &&
//				(sysInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64))
//			{
//				strcat(szOS, "Windows XP Professional x64 Edition ");
//			}
//			else
//				strcat(szOS, "Windows Server 2003 ");
//		}
//		else if((osInfo.dwMajorVersion == 6) && (osInfo.dwMinorVersion == 0))
//			strcat(szOS, "Windows Vista ");
//		else
//			strcat(szOS, "Unknown WinNT OS ");
//	}
//
//	// Unknown
//	else
//		strcat(szOS, "Unknown Operating System ");
//
//	strcat(szOS, osInfo.szCSDVersion);
//
//	// Log
//	(*ofsXMLDatabase) << "<Environment> " << szOS << "</Environment>"  << endl;
//
//
//}

void iTmLog::Profile(string sample)
{
    DataExists = false;
    //Transverse the profile vector, if any matches found, modify it.
    for(unsigned int i=0; i< ProfileVector.size(); i++)
    {

        if(((*ProfileVector.at(i)).m_sName == sample))
        {
            // Match found
            (*ProfileVector.at(i)).m_iStartTime = clock();
            (*ProfileVector.at(i)).m_bIsSampleOpen = true;

            DataExists = true;
            //m_iActualSample++;
            break;
        }
    }
    // Else, create a new instance in the vector.
    if (!DataExists)
    {
        ProfileData * newdata = new ProfileData;
        (*newdata).m_sName = sample;
        (*newdata).m_iTimesCalled = 0;
        (*newdata).m_iTotalTime =0;
        (*newdata).m_iMinTime =100000;  // HACK
        (*newdata).m_iMaxTime =0;
        (*newdata).m_iStartTime = clock();
        (*newdata).m_iEndTime = 0;
        (*newdata).m_bIsSampleOpen = true;

        // Finding out what's the depth of the sample
        int numberOfAncestors = 0;
        for(unsigned int i=0; i< ProfileVector.size(); i++)
        {
            if((*ProfileVector.at(i)).m_bIsSampleOpen) numberOfAncestors++;
        }

        (*newdata).m_iDepth = numberOfAncestors;


        ProfileVector.push_back(newdata);
    }

}



void  iTmLog::EndProfile(string sample)
{
    int timelaps =0;

    DataExists = false;
    for(unsigned int i=0; i< ProfileVector.size(); i++)
    {

        if((*ProfileVector.at(i)).m_sName == sample)
        {
            timelaps = clock() - (*ProfileVector.at(i)).m_iStartTime;

            (*ProfileVector.at(i)).m_iTotalTime +=timelaps;
            (*ProfileVector.at(i)).m_iTimesCalled++;
            (*ProfileVector.at(i)).m_bIsSampleOpen = false;

            if( timelaps > (*ProfileVector.at(i)).m_iMaxTime ) (*ProfileVector.at(i)).m_iMaxTime = timelaps;
            if( timelaps < (*ProfileVector.at(i)).m_iMinTime ) (*ProfileVector.at(i)).m_iMinTime = timelaps;

            DataExists = true;

            break;
        }


    }




    // Expaned asert macro to avoid singleton problems.

     (*GetAssertStream()) << "No profile sample with that name was found" <<  ".";
     if(!(DataExists))
     {
         (*GetMessageStream()) << GetAssertMsg() << ".";
         WriteLogEntry( LOG_Error, __FILE__,  __FUNCTION__, __LINE__,  ((*GetMessageStream()).str()));
         CleanMessageStream();

         ActivateErrorExit();
         CloseLog();
     }
     assert(DataExists);




}




//BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
//{
//    switch (fdwReason)
//    {
//        case DLL_PROCESS_ATTACH:
//            // attach to process
//            // return FALSE to fail DLL load
//            break;
//
//        case DLL_PROCESS_DETACH:
//            // detach from process
//            break;
//
//        case DLL_THREAD_ATTACH:
//            // attach to thread
//            break;
//
//        case DLL_THREAD_DETACH:
//            // detach from thread
//            break;
//    }
//    return TRUE; // succesful
//}
