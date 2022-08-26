#include "unitTests.h"

void test(double* x1, double* x2)
{
	assert(x1 != nullptr);
	assert(x2 != nullptr);
	assert(x1 != x2);

	int counter = 0;

	double coefficients[TESTS][3] = {
		{0.0, 0.0, 0.0},
		{0.0, 0.0, 1.0},
		{0.0, 1.0, 0.0},
		{0.0, 1.0, 1.0},
		{1.0, 0.0, 0.0},
		{1.0, 0.0, 1.0},
		{1.0, 1.0, 0.0},
		{1.0, 2.0, 1.0},
		{1.0, -3.0, 2.0},
		{1.0, 1.0, 1.0}
	};

	Kinds_of_roots cor_num_of_roots[TESTS] = {ROOTS_INF, ROOTS_ZERO, ROOTS_SINGLE, ROOTS_SINGLE, ROOTS_SINGLE,
		ROOTS_ZERO, ROOTS_TWO, ROOTS_SINGLE, ROOTS_TWO, ROOTS_ZERO};

	double roots[TESTS][2] = {
		{NAN,  NAN},
		{NAN,  NAN},
		{0,    NAN},
		{-1.0, NAN},
		{0,    NAN},
		{NAN,  NAN},
		{0,   -1.0},
		{-1.0, NAN},
		{2,      1},
		{NAN,  NAN}
	};

	for (int i = 0; i < TESTS; i++) {
		unit_test(cor_num_of_roots[i], coefficients[i][0], coefficients[i][1], coefficients[i][2], roots[i][0], roots[i][1], x1, x2, &counter);
	}

	printf("The number of successful tests: %d/%d\n", counter, TESTS);
}