#ifndef _IO_HEADER__
#define _IO_HEADER__
//guards defense
#include <stdio.h>
#include <assert.h>
#include "solving.h"

/*!
@brief input_of_coefficients takes three coefficients (a, b and c)
*/

/*!
input_of_coefficients takes three coefficients (a, b and c), which are
the coefficientsfor a quadratic equation a*x^2 + b*x + c = 0;
*/

/*!
@param[out] a coefficient a for a quadratic equation
@param[out] b coefficient b for a quadratic equation
@param[out] c coefficient c for a quadratic equation
*/

void input_of_coefficients(double* a, double* b, double* c);

/*!
@brief output_of_the_result prints the solution

output_of_the_result is a function that prints the roots of the quadratic equation based on
the given number of roots and asks whether you would like to start the program again

@param[in] number_of_roots number of roots of the equation
@param[in] x1 the first root of the equation given if it exists
@param[in] x2 the second root of the equation given if it exists
@param[out] cond the symbol that shows whether a user would like to solve another equation
*/

void output_of_the_result(Kinds_of_roots number_of_roots, const double x1, const double x2, char* cond);

void cleaning_buff();

#endif
