#ifndef H_ITMLOG
#define H_ITMLOG

#include <windows.h>
#include <iostream>
#include <streambuf>
#include <fstream>
#include <sstream>
#include <string>
#include <assert.h>
#include <vector>

/** --------------------------------------------------------------------------------
    --------------------------------------------------------------------------------
 * @name    : iLog Library
 * @author  : Ying
 * @date    : 28,6,2008
 * @Description:
    This is a library specifically for Game Loging, and works as follows.

    * Preparation for use:
        - Copy all the files to your project folder. All the .h must be in the
          same folder
        - In Code::Blocks right click on the project name, "build options" and there
          click on the project name, NOT debug or release. Go to "linker settings"
          and in "Link Libraries" add iLog.
        - Now go to "Search Directories"->"Linker" and add the path where the
          dll and .h are
        - Include the iLog.h in your project.

    * Actual use:
        - In the file you want to use it #include "iLog.h" at the top of the file
        - There are 3 levels of debug, but basically we'll be working with 2,
          LOGGL1 and LOGGL2, the first one corresponds to release builds and will
          show the messages on both debug and release builds, and the second one
          is only for debugging purposes and will not show up on release.

        - To LOG you use either:

            LOGGL1 << "Text to be logged and will show alwais" << WRITEL1( LOG_XXXXXXX );
            LOGGL2 << "This var: " << someVar << "shows only on debug" << WRITEL2( LOG_XXXXXXX );

          where XXXXXXX is one of 7 different logg messages:
            LOG_Unknown, Message that doesnt fit in any cathegory
            LOG_Error, Errors that generate during execution
            LOG_Warning, Warnings that dont necesarilly affect the execution
            LOG_Comment, General style coments for the engines
            LOG_Event, Scheduled game events, not Engine
            LOG_Debug, For specific bug tracking (this one will be the most used)
            LOG_Message, Messages sent by entities.

          This will generate a XMLOutputWithComplexXSLT.xml file, wich can then
          be viewed with the LogView.html file. So go ahead and double click on
          LogView ;)

        - To ASSERT you use:

            ASSERT << XXXXX << ENDASSERT( condition );

          where XXXXXX is any kind of output you want to associate with the assert
          macro, and the condition is the assert condition, for example:

            ASSERT << "Two was discovered to be unequal to 2" << ENDASSERT(2!=2);

    * Optimal use:
        In Code::Blocks go to Settings->Editor->Abreviations and there add the
        folowing:

        Name one "l1" and for code put:  "LOGGL1 << | << WRITEL1( LOG_$(Log Type) );"
        and another "l2" and  the code:  "LOGGL2 << | << WRITEL2( LOG_$(Log Type) );"

        This way you'll just type l1 and then press (cntrl) + (j) and a dialog box
        will ask the log type and then leave you ready to input the log data.

        Similarilly, name "ass" for the code:
        "ASSERT << | << ENDASSERT( $(Condition) );"

 --------------------------------------------------------------------------------
 -------------------------------------------------------------------------------- **/


using namespace std;



using namespace std;

#define PROCESSOR_UNKNOWN   0
#define PROCESSOR_AMD       1
#define PROCESSOR_INTEL     2




/** --------------------------------------------------------------------------------

 * @name    : Log Macros
 * @author  : Ying
 * @date    : 23,6,2008
 * @param   : -
 * @param   : -
 * @return  : -
 * @Description:
    These macros control the volume of output, based on the build.

 -------------------------------------------------------------------------------- **/


///Configure some basic precompilation defines
  //0 - no debugging wanted
  //1 - very basic debug output
  //2 - comprehensive debug output
  //3 - all output, and a transcript of all messages
#ifdef _DEBUG
  //Set the output level for 'DEBUG' builds
  #define SYSTEM_DEBUG_LEVEL 2
#else
  //Set the output level for 'RELEASE' builds
  #define SYSTEM_DEBUG_LEVEL 1
#endif


/** --------------------------------------------------------------------------------

 * @name    : LOGG
 * @author  : Ying
 * @date    : 25,6,2008
 * @param   : -
 * @param   : -
 * @return  : -
 * @Description:
    This is the opening part of the LOGG macro, it just gets the Message stream
    to wich we've got to write.

 -------------------------------------------------------------------------------- **/
#define LOGG (*GetLog().GetMessageStream())



/** --------------------------------------------------------------------------------

 * @name    : WRITEBASE
 * @author  : Ying
 * @date    : 25,6,2008
 * @param   : linetype, one of the enumerated options ofr the type of log made
 * @return  : void
 * @Description:
    This function is the closing part of the LOGG macro, it takes the MEssageStream
    and passes the string in it to the WriteLogEntry() function. Then it fushes the
    stream using the CleanMessageStream().

 -------------------------------------------------------------------------------- **/
#define WRITEBASE( linetype)\
        "."; GetLog().WriteLogEntry(\
        (linetype),  __FILE__,  __FUNCTION__, __LINE__,  ((*GetLog().GetMessageStream()).str()));\
		GetLog().CleanMessageStream()





/** --------------------------------------------------------------------------------
    --------------------------------------------------------------------------------
 * @name    : Log Enable Decision schema
 * @author  : Ying
 * @date    : 26,6,2008
 * @Description:
    The following macros define WRITE 1, 2 and 3 and their corresponding opening
    parts, LOGG 1, 2 and 3, as WRITEBASE and LOGG, if the debug level is enabled
    or as if(0) { cout <<user imput << "";} so it doesnt get compiled.

 --------------------------------------------------------------------------------
 -------------------------------------------------------------------------------- **/
#if SYSTEM_DEBUG_LEVEL == 3
  //enable all macros

  #define WRITEL1( linetype)  WRITEBASE( linetype)
  #define WRITEL2( linetype)  WRITEBASE( linetype)
  #define WRITEL3( linetype)  WRITEBASE( linetype)
  #define LOGGL1 LOGG
  #define LOGGL2 LOGG
  #define LOGGL3 LOGG


#elif SYSTEM_DEBUG_LEVEL == 2
  //enable levels 1..2 macros

  #define WRITEL1( linetype)  WRITEBASE( linetype)
  #define WRITEL2( linetype)  WRITEBASE( linetype)
  #define WRITEL3( linetype)  ""; }

  #define LOGGL1 LOGG
  #define LOGGL2 LOGG
  #define LOGGL3 if(0) { cout


#elif SYSTEM_DEBUG_LEVEL == 1
  //enable levels 1

  #define WRITEL1( linetype)  WRITEBASE( linetype)
  #define WRITEL2( linetype)  ""; }
  #define WRITEL3( linetype)  ""; }

  #define LOGGL1 LOGG
  #define LOGGL2 if(0) { cout
  #define LOGGL3 if(0) { cout


#else
  //disable macros
  #define WRITEL1( linetype) ""; }
  #define WRITEL2( linetype) ""; }
  #define WRITEL3( linetype) ""; }

  #define LOGGL1 if(0) { cout
  #define LOGGL2 if(0) { cout
  #define LOGGL3 if(0) { cout

#endif

#define LOGGDISABLED if(0) { cout



/** --------------------------------------------------------------------------------

 * @name    : ASSERT && ENDASSERT
 * @author  : Ying
 * @date    : 29,6,2008

 * @Description:
    This grabs the stream of text asociated to the ASSERT macro, and puts it in the
    log as a LOG_Error.

 -------------------------------------------------------------------------------- **/
#define ASSERT (*GetLog().GetAssertStream())
#define ENDASSERT(condition)\
            "";\
            if(!(condition)){\
            LOGGL1 << GetLog().GetAssertMsg() << WRITEL1( LOG_Error );\
            GetLog().CloseLog();}\
            assert(condition);






/** --------------------------------------------------------------------------------
    --------------------------------------------------------------------------------

 * @name    : ProfileData
 * @author  : Ying
 * @date    : 23,7,2008
 * @Description:
    A small data class to be used by the profiler part of the log to store a
    sample's time data.

 --------------------------------------------------------------------------------
 -------------------------------------------------------------------------------- **/
class ProfileData
{
    public:
        string m_sName;
        long int m_iTotalTime;
        int m_iTimesCalled;
        int m_iMinTime;
        int m_iMaxTime;
        int m_iStartTime;
        int m_iEndTime;
        int m_iDepth;
        bool m_bIsSampleOpen;
};


/// Enum of different message types
enum{LOG_Unknown, LOG_Error, LOG_Warning, LOG_Comment, LOG_Event, LOG_Debug, LOG_Message};


/** --------------------------------------------------------------------------------
    --------------------------------------------------------------------------------

 * @name    : Simple iLogSingleton
 * @author  : Ying
 * @date    : 24,6,2008
 * @Description:
    This is a very basic singleton template for modular use with the Log Class

 --------------------------------------------------------------------------------
 -------------------------------------------------------------------------------- **/
template<typename T>  class iLogSingleton
{
  public:


    /** --------------------------------------------------------------------------------

     * @name    : Instance
     * @author  : Ying
     * @date    : 24,6,2008
     * @return  : theSingleInstance, is a instance to the lone object of wich we have a singleton.
     * @Description:
        This function just returns a reference to the class object.

     -------------------------------------------------------------------------------- **/

    static T& Instance()
    {
        // assumes T has a protected default constructor
        static T theSingleInstance;
        return theSingleInstance;
    }




};




/** --------------------------------------------------------------------------------
    --------------------------------------------------------------------------------
 * @name    : iTmLog
 * @author  : Ying
 * @date    : 24,6,2008
 * @Description:
    This Class is responsible for creating and constantly writing to the log file wich
    takes imput from all the code in the project.

    The way to usually use this class is calling the
        #define Log_Write_L1( linetype, linetext )
        #define Log_Write_L2( linetype, linetext )
        #define Log_Write_L3( linetype, linetext )
    functions, being L1, 2 and 3 the debug level wich we want the message to show in.
    The rest is all internal work of the Log system.

 --------------------------------------------------------------------------------
 -------------------------------------------------------------------------------- **/

class iTmLog : public iLogSingleton<iTmLog>
{
  private:
    friend class iLogSingleton<iTmLog>;

    // Buffers we need to use
    ofstream           *ofsXMLDatabase;
    ofstream           *ofsProfileData;

	// Variable to check if initialized or not
	bool bLogInitialized;


    // A id to keep track of the messages
    int                 m_iID;

    // Variables for time track
    int m_iMiliseconds ;
    int m_iTotalseconds ;
    int m_iSeconds;
    int m_iMinutes;

    //Vector of profile samples
    vector<ProfileData*> ProfileVector;

    // Auxiliary flag
    bool DataExists;
  //  int  m_iActualSample;
    bool m_bErrorExit;



  public:
    // A string buffer to put the message in.
    stringstream        *m_sMessageStream;

    // Another string buffer, this one for asserts
    stringstream        *m_sAssertStream;

    /** --------------------------------------------------------------------------------

     * @name    : WriteLogEntry
     * @author  : Ying
     * @date    : 24,6,2008
     * @param   : iEntryType, A enum variable used to group the message into a genre.
     * @param   : strSourceFile, Compiler generated, the file of the message.
     * @param   : strFunction, Compiler generated, the function we're calling from.
     * @param   : iSourceLine, Compiler generated, the line.
     * @param   : strMessage, The actual message to be relayed.
     * @param   : ..., Extra parameters for the function.
     * @return  :  void
     * @Description:
        This function is used by the real working macros, and therefore internal to the
        class. It's responsible of calling the ofsXMLDatabase file and inserting the
        message data, and flushing it when it's done writing the message.

        NOTE: Create the iEntryType enum

     -------------------------------------------------------------------------------- **/
    void  WriteLogEntry( int iEntryType,
                        string strSourceFile,
                        string strFunction,
                        int iSourceLine,
                        string strMessage );


    /** --------------------------------------------------------------------------------

     * @name    : GetHumanTime
     * @author  : Ying
     * @date    : 24,6,2008
     * @param   : ticks, the internal clock's time ticks
     * @return  : A string in the format XXmin, XXsecs, XXms
     * @Description:
        Used internally to translate ticks to human readable time.


     -------------------------------------------------------------------------------- **/
    string  GetHumanTime(int ticks);



    /** --------------------------------------------------------------------------------

     * @name    : GetType
     * @author  : Ying
     * @date    : 24,6,2008
     * @param   : type, the type name we want
     * @return  : A string with the name of the enum value "type"
     * @Description:
        Returns the name of a enum variable, of the LogMessageType enum.

        NOTE: Implement said enum, and override the dummy value.

     -------------------------------------------------------------------------------- **/
    string  GetType(int type);



    /** --------------------------------------------------------------------------------

     * @name    : WriteHeader
     * @author  : Ying
     * @date    : 24,5,2008
     * @param   : -
     * @param   : -
     * @return  : -
     * @Description:
        This Function writes the initial data of the xml log, something like this:
            <LogHeader>
            <OutputLevel>Comprehensive debugging information (Level 2)</OutputLevel>
            <Session>
            <Started>
            <Time>23:00:56</Time>
            <Date>Wednesday 23rd March 2005</Date>
            ...
            <Memory>
            <Total>1023MB 464KB </Total>
            <Available>590MB 360KB </Available>
            </Memory>
            </Configuration>
            </Session>
            </LogHeader>

        NOTE: Not implemented yet.

     -------------------------------------------------------------------------------- **/
    void  WriteHeader();




    /** --------------------------------------------------------------------------------

     * @name    : GetMessageStream
     * @author  : Ying
     * @date    : 25,6,2008
     * @return  : m_sMessageStream, the log's internal stream with the current message.
     * @Description:
        An accesor for the message stream.

     -------------------------------------------------------------------------------- **/
    stringstream*  GetMessageStream();



    /** --------------------------------------------------------------------------------

     * @name    : GetAssertStream
     * @author  : Ying
     * @date    : 29,6,2008
     * @return  : m_sAssertStream, the logs string buffer for asserts
     * @Description:
        An accessor for the assert stream.

     -------------------------------------------------------------------------------- **/
    stringstream* GetAssertStream();




    /** --------------------------------------------------------------------------------

     * @name    : getAssertMsg
     * @author  : Ying
     * @date    : 29,6,2008
     * @param   : -
     * @param   : -
     * @return  : A const char* with the content of the assert stream
     * @Description:


     -------------------------------------------------------------------------------- **/
    const char* GetAssertMsg();



    /** --------------------------------------------------------------------------------

     * @name    : CleanMessageStream
     * @author  : Ying
     * @date    : 25,6,2008
     * @return  : void
     * @Description:
        Cleans out the m_sMessageStream stream

     -------------------------------------------------------------------------------- **/
    void  CleanMessageStream();




    /** --------------------------------------------------------------------------------

     * @name    : CleanAssertStream
     * @author  : Ying
     * @date    : 29,6,2008
     * @param   : -
     * @param   : -
     * @return  : void
     * @Description:
        Cleans out the m_sAssetStream stream

     -------------------------------------------------------------------------------- **/
    void CleanAssertStream();



    /** --------------------------------------------------------------------------------

     * @name    : ErrorBox
     * @author  : Evil Steve
     * @date    : 26,6,2008
     * @param   : strError, Error to be displayed.
     * @return  : void
     * @Description:
        Uses the windows api to show a error message box

     -------------------------------------------------------------------------------- **/
    void  ErrorBox(const string& strError);




    /** --------------------------------------------------------------------------------

     * @name    : ReadCPUSpeedFromRegistry
     * @author  : Evil Steve
     * @date    : 26,6,2008
     * @param   : dwCPU, The reference to the CPU we want the speed of.
     * @return  : A DWORD with the speed of the processor
     * @Description:
        Calculates the speed of a given procesor of the computer.

     -------------------------------------------------------------------------------- **/
    //DWORD  ReadCPUSpeedFromRegistry(DWORD dwCPU);





    /** --------------------------------------------------------------------------------

     * @name    : LogCPU
     * @author  : Evil Steve
     * @date    : 27,6,2008
     * @param   : -
     * @param   : -
     * @return  : void
     * @Description:
        Logs the cpu values to a xml file.

     -------------------------------------------------------------------------------- **/
    //void  LogCPU();



    /** --------------------------------------------------------------------------------

     * @name    : LogOS
     * @author  : Evil Steve
     * @date    : 27,6,2008
     * @return  : void
     * @Description:
        The function writes into the log the OS specifications of the machine it's
        running in.

     -------------------------------------------------------------------------------- **/
    //void  LogOS();




    /** --------------------------------------------------------------------------------

     * @name    : LogRam
     * @author  : Evil Steve
     * @date    : 27,6,2008
     * @return  : void
     * @Description:
        Logs the RAM values into the log file

     -------------------------------------------------------------------------------- **/
    //void  LogRAM();




    /** --------------------------------------------------------------------------------

     * @name    : CloseLog
     * @author  : Ying
     * @date    : 29,6,2008
     * @return  : void
     * @Description:
        Auxuliary function that closes the XML log file

     -------------------------------------------------------------------------------- **/
    void CloseLog();




    ///  constructor & destructor
    iTmLog();
    ~iTmLog();


    /** --------------------------------------------------------------------------------

     * @name    : Init & End
     * @author  : Ying
     * @date    : 24,6,2008
     * @return  : void
     * @Description:
        Void functions that initialize and destroy anything the function needs. They are
        used instead of the default constructor and destructor for flexibility.

     -------------------------------------------------------------------------------- **/
    void  Init();
    void  End();


        /** --------------------------------------------------------------------------------

         * @name    : ActivateErrorExit
         * @author  : Ying
         * @date    : 10,8,2008
         * @return  : void
         * @Description:
            Activates the error flag so the lof knows it has to do a fast exit

         -------------------------------------------------------------------------------- **/
    void ActivateErrorExit() {m_bErrorExit= true;}


        /** --------------------------------------------------------------------------------

         * @name    : Profile
         * @author  : Ying
         * @date    : 10,8,2008
         * @param   : sample, a string with the name of the sample to profile
         * @return  : void
         * @Description:
            This function starts the profile of a particular sample. It's called every loop
            to calculate the average, max and min times the encapsulated code consumes.
            The first time it is called it will automatically set up a new sample.

         -------------------------------------------------------------------------------- **/
    void  Profile(string sample);


    /** --------------------------------------------------------------------------------

     * @name    : EndProfile
     * @author  : Ying
     * @date    : 10,8,2008
     * @param   : sample, a string wich indicates the sample to end
     * @return  : void
     * @Description:
        This function goes over the vector of samples, and finding the one passed as
        a param, it calculates the corresponding times since the partner "profile()"
        function was called.

     -------------------------------------------------------------------------------- **/
    void  EndProfile(string sample);


    /** --------------------------------------------------------------------------------

     * @name    : WriteProfile
     * @author  : Ying
     * @date    : 10,8,2008
     * @return  : void
     * @Description:
        This function encapsulates the code of writing the profiled data to a html file,
        it's called internally from CloseLog().

     -------------------------------------------------------------------------------- **/
    void  WriteProfile();

};

#define GetLog() iTmLog::Instance()





#endif // H_ITMLOG
