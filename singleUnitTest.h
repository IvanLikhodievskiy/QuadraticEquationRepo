#ifndef _SINGLEUNITTEST_HEADER__
#define _SINGLEUNITTEST_HEADER__

#include <stdio.h>
#include <math.h>
#include "isFloatAZero.h"
#include "solving.h"

struct test_parameters {
	Kinds_of_roots cor_num_of_roots;
	const double first_coefficient;
	const double second_coefficient;
	const double third_coefficient;
	const double first_root;
	const double second_root;
};

bool unit_test(struct test_parameters t);

void respond_to_error(struct test_parameters t, Kinds_of_roots number_of_roots, double x1, double x2);

#endif