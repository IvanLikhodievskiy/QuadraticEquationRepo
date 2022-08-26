#include <math.h>
#include <string.h>
#include "isFloatAZero.h"
#include "io.h"
#include "solving.h"
#include "unitTests.h"
#include "singleUnitTest.h"

#define STREQUAL(str1, str2) !strcmp(str1, str2)

int main(const int argc, const char *argv[])
{
	double a  = NAN;
	double b  = NAN;
	double c  = NAN;
	double x1 = NAN;
	double x2 = NAN;
	char cond = 'c';
	Kinds_of_roots number_of_roots = ROOTS_ERROR;

	if (argc < 2) {
		printf("No command line arguments\n");
	}
	else {
		if (STREQUAL(argv[1], "test"))
			test();
	}

	while (cond == 'c') {
		input_of_coefficients(&a, &b, &c);

		number_of_roots = solve_quadratic(a, b, c, &x1, &x2);

		output_of_the_result(number_of_roots, x1, x2, &cond); 
	};

	return 0;
}