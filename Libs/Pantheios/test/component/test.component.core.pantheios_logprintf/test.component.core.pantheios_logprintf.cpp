/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.core.pantheios_logprintf/test.component.core.pantheios_logprintf.cpp
 *
 * Purpose:     Implementation file for the test.component.core.pantheios_logprintf project.
 *
 * Created:     31st October 2005
 * Updated:     14th October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2005-2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <pantheios/util/test/compiler_warnings_suppression.first_include.h>

/* xTests Header Files */
#include <xtests/xtests.h>

/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>
#include <pantheios/backends/bec.test.h>

/* Standard C++ Header Files */
#include <exception>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Macros
 */

#define PANTHEIOS_SEV_LEVELS_EQUAL(x, y)    XTESTS_TEST_INTEGER_EQUAL(static_cast<int>(x), static_cast<int>(y))

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static void test_1_01();
static void test_1_02();
static void test_1_03();
static void test_1_04();
static void test_1_05();
static void test_1_06();
static void test_1_07();
static void test_1_08();
static void test_1_09();

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.component.core.pantheios_logprintf";

static const int    s_severities[] =
{
        PANTHEIOS_SEV_DEBUG
    ,   PANTHEIOS_SEV_INFORMATIONAL
    ,   PANTHEIOS_SEV_NOTICE
    ,   PANTHEIOS_SEV_WARNING
    ,   PANTHEIOS_SEV_ERROR
    ,   PANTHEIOS_SEV_CRITICAL
    ,   PANTHEIOS_SEV_ALERT
    ,   PANTHEIOS_SEV_EMERGENCY
};

/* /////////////////////////////////////////////////////////////////////////
 * main
 */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.component.core.pantheios_logprintf", verbosity))
    {
        XTESTS_RUN_CASE(test_1_01);
        XTESTS_RUN_CASE(test_1_02);
        XTESTS_RUN_CASE(test_1_03);
        XTESTS_RUN_CASE(test_1_04);
        XTESTS_RUN_CASE(test_1_05);
        XTESTS_RUN_CASE(test_1_06);
        XTESTS_RUN_CASE(test_1_07);
        XTESTS_RUN_CASE(test_1_08);
        XTESTS_RUN_CASE(test_1_09);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

static void test_1_01()
{
    { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(s_severities); ++i)
    {
        const int severity = s_severities[i];

        // 1. Setup

        pantheios::be::test::reset();


        // 2. Create test data

        pantheios::pantheios_logprintf(severity, "abc");


        // 3. Verification

        pantheios::be::test::Results  results = pantheios::be::test::results();

        if(!results.empty()) // Do test here, so will work with any back-end
        {
            XTESTS_TEST(1 == results.size());
            PANTHEIOS_SEV_LEVELS_EQUAL(severity, results[0].severity);
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("abc", results[0].statement);
        }
    }}
}

static void test_1_02()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::pantheios_logprintf(pantheios::error(1), "abc");


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(1 == results.size());
    PANTHEIOS_SEV_LEVELS_EQUAL(PANTHEIOS_SEV_ERROR | (1 << 4), results[0].severity);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("abc", results[0].statement);
}

static void test_1_03()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::pantheios_logprintf(pantheios::error(0x01234567), "abc");


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(1 == results.size());
    PANTHEIOS_SEV_LEVELS_EQUAL(PANTHEIOS_SEV_ERROR | (0x01234567 << 4), results[0].severity);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("abc", results[0].statement);
}

static void test_1_04()
{
    { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(s_severities); ++i)
    {
        const int severity = s_severities[i];

        // 1. Setup

        pantheios::be::test::reset();


        // 2. Create test data

        pantheios::pantheios_logprintf(severity, "abc");
        pantheios::pantheios_logprintf(severity, "def");
        pantheios::pantheios_logprintf(severity, "int=%d, char=%c", 10, 'c');
        pantheios::pantheios_logprintf(severity, "int=%d, char=%c", -10, '%');


        // 3. Verification

        pantheios::be::test::Results  results = pantheios::be::test::results();

        if(!results.empty()) // Do test here, so will work with any back-end
        {
            XTESTS_TEST(4 == results.size());

            PANTHEIOS_SEV_LEVELS_EQUAL(severity, results[0].severity);
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("abc", results[0].statement);

            PANTHEIOS_SEV_LEVELS_EQUAL(severity, results[1].severity);
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("def", results[1].statement);

            PANTHEIOS_SEV_LEVELS_EQUAL(severity, results[2].severity);
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("int=10, char=c", results[2].statement);

            PANTHEIOS_SEV_LEVELS_EQUAL(severity, results[3].severity);
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("int=-10, char=%", results[3].statement);
        }
    }}
}

static void test_1_05()
{
}

static void test_1_06()
{
}

static void test_1_07()
{
}

static void test_1_08()
{
}

static void test_1_09()
{
}

/* ////////////////////////////////////////////////////////////////////// */
