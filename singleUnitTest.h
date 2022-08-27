#ifndef _SINGLEUNITTEST_HEADER__
#define _SINGLEUNITTEST_HEADER__

#include <stdio.h>
#include <math.h>
#include "isFloatAZero.h"
#include "solving.h"

/*!
@brief test_parameters is a structure that holds all necessary parameters for the unit test

test_parameters consists of cor_num_of_roots, which is the number of roots the equation should have,
first_coefficient, which is the coefficient a in the equation a*x^2 + b*x + c = 0, second_coefficient,
which is the coefficient b in the equation a*x^2 + b*x + c = 0, third_coefficient, which is the
coefficient c in the equation a*x^2 + b*x + c = 0, first_root, which is the first root the equation should have
(if it does not exist, the parameter should be declared NAN), second_root, which is the second root the equation
should have (if it does not exist, the parameter should be declared NAN)
*/

struct test_parameters {
	Kinds_of_roots cor_num_of_roots;
	const double first_coefficient;
	const double second_coefficient;
	const double third_coefficient;
	const double first_root;
	const double second_root;
};

/*!
@brief respond_to_error prints the report about a failed test

@param[in] t structure with all test parameters
@param[in] number_of_roots the number of roots the program decided the equation has
@param[in] x1 the first root the program decided the equation has; if the program
decided the equation has no roots, it is NAN
@param[in] x2 the second root the program decided the equation has; if the program
decided the equation has not got the second root, it is NAN
*/

void respond_to_error(struct test_parameters t, Kinds_of_roots number_of_roots, double x1, double x2);

/*!
@brief unit_test makes a single unit test with given parameters

unit_test takes the structure with all the necessary information for a single unit test
and checks whether the program solves the given equation correctly. It prints the information about
a mistake if there is such during testing

@param[in] t the structure with all parameters

@return true if the test passed successfully and false if the answer did not coincide with the correct one
*/

bool unit_test(struct test_parameters t);

#endif