#include <math.h>
#include "isFloatAZero.h"
#include "io.h"
#include "solving.h"
#include "unitTests.h"
#include "singleUnitTest.h"

int main(void)
{
	double a  = NAN;
	double b  = NAN;
	double c  = NAN;
	double x1 = NAN;
	double x2 = NAN;
	char cond = 'c';
	Kinds_of_roots number_of_roots = ROOTS_ERROR;
	
	test(&x1, &x2);

	while (cond == 'c') {
		input_of_coefficients(&a, &b, &c);

		number_of_roots = solve_quadratic(a, b, c, &x1, &x2);

		output_of_the_result(number_of_roots, x1, x2, &cond); 
	};

	return 0;
}