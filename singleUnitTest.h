#ifndef _SINGLEUNITTEST_HEADER__
#define _SINGLEUNITTEST_HEADER__

#include <stdio.h>
#include <assert.h>
#include "isFloatAZero.h"
#include "solving.h"

void unit_test(Kinds_of_roots correct_number_of_roots, const double a, const double b, const double c, const double correct_x1, const double correct_x2, double* x1, double* x2, int* number);

#endif