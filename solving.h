#ifndef _SOLVING_HEADER__
#define _SOLVING_HEADER__

#include <stdio.h>
#include <math.h>
#include <assert.h>

/*!
@brief Kinds_of_roots is enum for kinds of solutions of linear or quadratic equation

Kinds_of_roots shows how many rooots does the equation have (no roots, single root,
two roots or infinite number of roots), it also includes a variant for possible errors during run;
*/

enum Kinds_of_roots
{
	ROOTS_ZERO,
	ROOTS_SINGLE,
	ROOTS_TWO,
	ROOTS_INF,
	ROOTS_ERROR
};

/*!
@brief solve_linear solves given linear equation

solve_linear takes two coefficients (b and c), which are the coefficients
for a linear equation b*x + c = 0, returns the number its of roots and changes
the value of the root x that should be initialized in the main program if the given
equation has only one root;

@param[in] b coefficient b for a linear equation
@param[in] c coefficient c for a linear equation
@param[out] x the pointer to the variable reserved for a root in main program

@return the number of roots of the given linear equation or the notification about error
*/

Kinds_of_roots solve_linear(const double b, const double c, double* x);

/*!
@brief solve_quadratic solves given quadratic equation

solve_quadratic takes three coefficients (a, b and c), which are the coefficients
for a quadratic equation a*x^2 + b*x + c = 0, returns the number its of roots and changes
the value of the roots x1 and x2 that should be initialized in the main program if the given
equation has two roots, changes the value of the root x1 that should be initialized in
the main program if the given equation has only one root or does not change the value of
x1 and x2 if the given equation has no roots

@param[in] a coefficient a for a quadratic equation
@param[in] b coefficient b for a quadratic equation
@param[in] c coefficient c for a quadratic equation
@param[out] x1 the pointer to the variable reserved for the first root in main program
@param[out] x2 the pointer to the variable reserved for the second root in main program

@return the number of roots of the given linear equation or the notification about error
*/
Kinds_of_roots solve_quadratic(const double a, const double b, const double c, double* x1, double* x2);

#endif
