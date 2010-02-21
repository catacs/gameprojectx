/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.bec.fprintf/test.unit.bec.fprintf.cpp
 *
 * Purpose:     Implementation file for the test.unit.be.file project.
 *
 * Created:     3rd August 2008
 * Updated:     14th October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <pantheios/util/test/compiler_warnings_suppression.first_include.h>

/* Pantheios Header Files */
#include <pantheios/backends/bec.fprintf.h>
#include <pantheios/init_codes.h>
#include <pantheios/util/system/threadid.h>

/* STLSoft Header Files */
#include <stlsoft/conversion/integer_to_string.hpp>
#include <platformstl/filesystem/file_lines.hpp>

/* xTests Header Files */
#include <xtests/xtests.h>

/* Standard C++ Header Files */
#include <exception>                    // for std::exception
#include <new>                          // for std::bad_alloc

/* Standard C Header Files */
#include <stdio.h>                      // for fprintf(), remove()
#include <stdlib.h>                     // for exit codes

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Constants and definitions
 */

namespace
{

    const char  STDERR_FILE_NAME[] = "stderr.txt";

} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * Macros
 */

#define PANTHEIOS_SEV_LEVELS_EQUAL(x, y)    XTESTS_TEST_INTEGER_EQUAL(static_cast<int>(x), static_cast<int>(y))

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.unit.be.file";

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

namespace
{

static void test_1_00();
static void test_1_01();
static void test_1_02();
static void test_1_03();
static void test_1_04();
static void test_1_05();
static void test_1_06();
static void test_1_07();
static void test_1_08();
static void test_1_09();
static void test_1_0a();
static void test_1_0b();
static void test_1_0c();
static void test_1_0d();
static void test_1_0e();
static void test_1_0f();

} // anonymous namespace

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER_WITH_STREAM("test.unit.be.file", verbosity, stdout))
    {
        XTESTS_RUN_CASE(test_1_00);
        XTESTS_RUN_CASE(test_1_01);
        XTESTS_RUN_CASE(test_1_02);
        XTESTS_RUN_CASE(test_1_03);
        XTESTS_RUN_CASE(test_1_04);
        XTESTS_RUN_CASE(test_1_05);
        XTESTS_RUN_CASE(test_1_06);
        XTESTS_RUN_CASE(test_1_07);
        XTESTS_RUN_CASE(test_1_08);
        XTESTS_RUN_CASE(test_1_09);
        XTESTS_RUN_CASE(test_1_0a);
        XTESTS_RUN_CASE(test_1_0b);
        XTESTS_RUN_CASE(test_1_0c);
        XTESTS_RUN_CASE(test_1_0d);
        XTESTS_RUN_CASE(test_1_0e);
        XTESTS_RUN_CASE(test_1_0f);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

namespace
{

static FILE* reopen_file(char const* fileName, char const* mode, FILE* stm)
{
#ifdef STLSOFT_USING_SAFE_STR_FUNCTIONS
    FILE*   f;

    if(0 != ::freopen_s(&f, fileName, mode, stm))
    {
        f = NULL;
    }
#else /* ? STLSOFT_USING_SAFE_STR_FUNCTIONS */
    FILE*   f = ::freopen(fileName, mode, stm);
#endif /* STLSOFT_USING_SAFE_STR_FUNCTIONS */

    return f;
}

static std::string gettidstr_()
{
    char        num[21];
    size_t      n;// = 0; STLSOFT_SUPPRESS_UNUSED(n); // Suppress Borland C/C++ warning (which is correct)
    char const* p = stlsoft::integer_to_string(&num[0], STLSOFT_NUM_ELEMENTS(num), pantheios::util::getCurrentThreadId(), n);

    return std::string(p, n);
}

static char const* strings[] =
{
        "abc"
    ,   "ABC"
    ,   "abcdefghijklmnopqrstuvwxyz"
    ,   "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    ,   "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    ,   "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    ,   "00000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111222222222222222222222222222222222222222223333333333333333333333333"
};

static void test_1_00()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_01()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_02()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + gettidstr_() + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(resultPrefix + strings[i], lines[i]);
                }}
            }
        }
    }
}

static void test_1_03()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_04()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_05()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_06()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_07()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
                |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_08()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_09()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_0a()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_0b()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
                |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
                }}
            }
        }
    }
}

static void test_1_0c()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_0d()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
                |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_0e()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

    init.flags  |=  0
                |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

static void test_1_0f()
{
    pan_be_fprintf_init_t  init;

    pantheios_be_fprintf_getDefaultAppInit(&init);

//  init.flags  |=  0
//              |   PANTHEIOS_BE_INIT_F_NO_PROCESS_ID
//              |   PANTHEIOS_BE_INIT_F_NO_THREAD_ID
//              |   PANTHEIOS_BE_INIT_F_NO_DATETIME
//              |   PANTHEIOS_BE_INIT_F_NO_SEVERITY
//                ;

    void*   token;
    int     res = pantheios_be_fprintf_init(PANTHEIOS_FE_PROCESS_IDENTITY, PANTHEIOS_BEID_ALL, &init, NULL, &token);

    if(PANTHEIOS_INIT_RC_SUCCESS != res)
    {
        XTESTS_FAIL_WITH_QUALIFIER("failed to initialise bec.fprintf", pantheios::getInitErrorString(res));
    }
    else
    {
        stlsoft::scoped_handle<void*>   uninit_(token, pantheios_be_fprintf_uninit);

        // create the output file
        FILE* f = reopen_file(STDERR_FILE_NAME, "w", stderr);

        if(NULL == f)
        {
            XTESTS_FAIL_WITH_QUALIFIER("failed to reopen standard output stream", strerror(errno));
        }
        else
        {
            { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
            {
                pantheios_be_fprintf_logEntry(NULL, token, PANTHEIOS_SEV_ERROR, strings[i], ::strlen(strings[i]));
            }}

            ::fclose(f);

            // close the output file
            platformstl::file_lines lines(STDERR_FILE_NAME);
            const std::string       resultPrefix = "[" + std::string(PANTHEIOS_FE_PROCESS_IDENTITY) + "." + gettidstr_() + "; " + std::string(pantheios::getSeverityString(PANTHEIOS_SEV_ERROR)) + "]: ";

            ::remove(STDERR_FILE_NAME);

            // Start the tests
            XTESTS_TEST_INTEGER_EQUAL(STLSOFT_NUM_ELEMENTS(strings), lines.size());

            if(STLSOFT_NUM_ELEMENTS(strings) == lines.size())
            {
                { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(strings); ++i)
                {
#if 0
                    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL((resultPrefix + strings[i]), lines[i]);
#endif /* 0 */
                }}
            }
        }
    }
}

} // anonymous namespace

/* ////////////////////////////////////////////////////////////////////// */
