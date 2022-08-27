#ifndef _UNITTESTS_HEADER__
#define _UNITTESTS_HEADER__

#include <stdio.h>
#include <math.h>
#include "singleUnitTest.h"

const int TESTS = 10;

/*!
@brief test makes several tests, the nmber of which is declared in the constant TEST
and prints the information about the number of successful tests

test includes the information about tests in the array of structures test_parameters,
it calls the function unit_test to run all these tests; then it returns the number of
successful tests
*/

void test();

#endif