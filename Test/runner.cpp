/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <fstream>
#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XUnitPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    std::ofstream ofstr("TEST-cxxtest.xml");
    CxxTest::XUnitPrinter tmp(ofstr);
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XUnitPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "MyTestSuite.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "MyTestSuite.h", 7, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_test_equal_roots : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_equal_roots() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 11, "test_equal_roots" ) {}
 void runTest() { suite_MyTestSuite.test_equal_roots(); }
} testDescription_suite_MyTestSuite_test_equal_roots;

static class TestDescription_suite_MyTestSuite_test_linear : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_linear() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 22, "test_linear" ) {}
 void runTest() { suite_MyTestSuite.test_linear(); }
} testDescription_suite_MyTestSuite_test_linear;

static class TestDescription_suite_MyTestSuite_test_constant : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_constant() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 31, "test_constant" ) {}
 void runTest() { suite_MyTestSuite.test_constant(); }
} testDescription_suite_MyTestSuite_test_constant;

static class TestDescription_suite_MyTestSuite_test_square : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_square() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 40, "test_square" ) {}
 void runTest() { suite_MyTestSuite.test_square(); }
} testDescription_suite_MyTestSuite_test_square;

static class TestDescription_suite_MyTestSuite_test_5 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_5() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 49, "test_5" ) {}
 void runTest() { suite_MyTestSuite.test_5(); }
} testDescription_suite_MyTestSuite_test_5;

static class TestDescription_suite_MyTestSuite_test_zero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_zero() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 58, "test_zero" ) {}
 void runTest() { suite_MyTestSuite.test_zero(); }
} testDescription_suite_MyTestSuite_test_zero;

static class TestDescription_suite_MyTestSuite_test_negative_discriminant : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negative_discriminant() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 68, "test_negative_discriminant" ) {}
 void runTest() { suite_MyTestSuite.test_negative_discriminant(); }
} testDescription_suite_MyTestSuite_test_negative_discriminant;

static class TestDescription_suite_MyTestSuite_test_negative : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_negative() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 77, "test_negative" ) {}
 void runTest() { suite_MyTestSuite.test_negative(); }
} testDescription_suite_MyTestSuite_test_negative;

static class TestDescription_suite_MyTestSuite_test_golden_ratio : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_golden_ratio() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 86, "test_golden_ratio" ) {}
 void runTest() { suite_MyTestSuite.test_golden_ratio(); }
} testDescription_suite_MyTestSuite_test_golden_ratio;

static class TestDescription_suite_MyTestSuite_test_close_to_zero_all : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_close_to_zero_all() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 99, "test_close_to_zero_all" ) {}
 void runTest() { suite_MyTestSuite.test_close_to_zero_all(); }
} testDescription_suite_MyTestSuite_test_close_to_zero_all;

static class TestDescription_suite_MyTestSuite_test_close_to_zero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_close_to_zero() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 112, "test_close_to_zero" ) {}
 void runTest() { suite_MyTestSuite.test_close_to_zero(); }
} testDescription_suite_MyTestSuite_test_close_to_zero;

static class TestDescription_suite_MyTestSuite_test_huge_all : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_test_huge_all() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 132, "test_huge_all" ) {}
 void runTest() { suite_MyTestSuite.test_huge_all(); }
} testDescription_suite_MyTestSuite_test_huge_all;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
