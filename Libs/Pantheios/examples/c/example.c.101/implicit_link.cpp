/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/c/example.c.101/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the example.c.101 project.
 *
 * Created:     17th January 2008
 * Updated:     16th February 2009
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
#include <pantheios/implicit_link/core.h>
#include <pantheios/implicit_link/fe.simple.h>
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <pantheios/implicit_link/be.fprintf.h>
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# include <pantheios/implicit_link/be.WindowsConsole.h>
#else /* ? OS */
# error Platform not discriminated
#endif /* OS */

#if (   defined(UNIX) || \
        defined(unix)) && \
    (   defined(_WIN32) || \
        defined(_WIN64))
# include <unixem/implicit_link.h>
#endif /* _WIN32 || _WIN64 */

/* ///////////////////////////// end of file //////////////////////////// */
