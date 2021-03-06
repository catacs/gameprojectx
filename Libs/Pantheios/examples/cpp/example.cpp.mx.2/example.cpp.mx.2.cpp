/* /////////////////////////////////////////////////////////////////////////
 * File:        example.cpp.mx.2.cpp
 *
 * Purpose:     Implementation file for the example.cpp.mx.2 project.
 *
 * Created:     19th September 2008
 * Updated:     1st January 2009
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008-2009, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */



/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>
#include <pantheios/inserters/args.hpp>

#include <pantheios/frontends/fe.simple.h>
#include <pantheios/backends/be.N.h>
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <pantheios/backends/bec.fprintf.h>
# include <pantheios/backends/bec.syslog.h>
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# include <pantheios/backends/bec.WindowsConsole.h>
# include <pantheios/backends/bec.WindowsSyslog.h>
#else /* ? OS */
# error Platform not discriminated
#endif /* OS */

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>

/* Standard C++ Header Files */
#include <exception>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

extern "C" const char PANTHEIOS_FE_PROCESS_IDENTITY[]    =   "example.cpp.mx.2";

/* /////////////////////////////////////////////////////////////////////////
 * Logging management
 */

enum
{
    Console =   1,
    Syslog  =   2
};

pan_be_N_t  PAN_BE_N_BACKEND_LIST[] =
{
#if defined(PLATFORMSTL_OS_IS_UNIX)
    PANTHEIOS_BE_N_STDFORM_ENTRY(Console, pantheios_be_fprintf, PANTHEIOS_BE_N_F_IGNORE_NONMATCHED_CUSTOM28_ID),
    PANTHEIOS_BE_N_STDFORM_ENTRY(Syslog, pantheios_be_syslog, PANTHEIOS_BE_N_F_ID_MUST_MATCH_CUSTOM28),
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
    PANTHEIOS_BE_N_STDFORM_ENTRY(Console, pantheios_be_WindowsConsole, PANTHEIOS_BE_N_F_IGNORE_NONMATCHED_CUSTOM28_ID),
    PANTHEIOS_BE_N_STDFORM_ENTRY(Syslog, pantheios_be_WindowsSyslog, PANTHEIOS_BE_N_F_ID_MUST_MATCH_CUSTOM28),
#else /* ? OS */
# error Platform not discriminated
#endif /* OS */

    PANTHEIOS_BE_N_TERMINATOR_ENTRY
};

/* ////////////////////////////////////////////////////////////////////// */

static int main_(int argc, char** argv)
{
    // This goes only to debugger
    pantheios::log_NOTICE("main(", pantheios::args(argc, argv), ")");

    // This goes to console and debugger
    pantheios::log(pantheios::notice(Syslog), "Isn't targeted multiplexing great?!");

    return EXIT_SUCCESS;
}

int main(int argc, char** argv)
{
    try
    {
        return main_(argc, argv);
    }
    catch(std::exception& x)
    {
        pantheios::log_ALERT("Unexpected general error: ", x, ". Application terminating");
    }
    catch(...)
    {
        pantheios::logputs(pantheios::emergency, "Unhandled unknown error");
    }

    return EXIT_FAILURE;
}

/* ////////////////////////////////////////////////////////////////////// */
