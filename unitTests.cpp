#include "unitTests.h"

void test()
{
	int counter = 0;

	struct test_parameters test_p[TESTS] =
	{
		{ROOTS_INF,    0.0, 0.0,  0.0, NAN,  NAN},
		{ROOTS_ZERO,   0.0, 0.0,  1.0, NAN,  NAN},
		{ROOTS_SINGLE, 0.0, 1.0,  0.0, 0,    NAN},
		{ROOTS_SINGLE, 0.0, 1.0,  1.0, -1.0, NAN},
		{ROOTS_SINGLE, 1.0, 0.0,  0.0, 0,    NAN},
		{ROOTS_ZERO,   1.0, 0.0,  1.0, NAN,  NAN},
		{ROOTS_TWO,    1.0, 1.0,  0.0, 0,   -1.0},
		{ROOTS_SINGLE, 1.0, 2.0,  1.0, -1.0, NAN},
		{ROOTS_TWO,    1.0, -3.0, 2.0, 2,      1},
		{ROOTS_ZERO,   1.0, 1.0,  1.0, NAN,  NAN}
	};

	for (int i = 0; i < TESTS; i++)
		counter += unit_test(test_p[i]);

	printf("The number of successful tests: %d/%d\n", counter, TESTS);
}