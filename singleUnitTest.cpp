#include "singleUnitTest.h"

void unit_test(Kinds_of_roots correct_number_of_roots, const double a, const double b, const double c, const double correct_x1, const double correct_x2, double* x1, double* x2, int* number)
{
	assert(x1     != nullptr);
	assert(x2     != nullptr);
	assert(number != nullptr);
	assert(x1 != x2);

	Kinds_of_roots number_of_roots = ROOTS_ERROR;

	number_of_roots = solve_quadratic(a, b, c, x1, x2);

	if ((correct_number_of_roots == ROOTS_ZERO and number_of_roots == ROOTS_ZERO) or (correct_number_of_roots == ROOTS_INF and number_of_roots == ROOTS_INF)) {
		*number += 1;
	}
	else if (correct_number_of_roots == ROOTS_SINGLE and number_of_roots == ROOTS_SINGLE) {
		if (is_float_a_zero((*x1) - correct_x1)) {
			*number += 1;
		}
		else {
			printf("FAILURE: coefficients a = %lg, b = %lg, c = %lg\n", a, b, c);
			printf("Correct: number of roots = %d, x1 = %lg, x2 = %lg\n", correct_number_of_roots, correct_x1, correct_x2);
			printf("Given: number of roots = %d, x1 = %lg, x2 = %lg\n", number_of_roots, x1, x2);
		}
	}
	else if (correct_number_of_roots == ROOTS_TWO and number_of_roots == ROOTS_TWO) {
		if (is_float_a_zero((*x1) - correct_x1) and is_float_a_zero((*x2) - correct_x2)) {
			*number += 1;
		}
		else {
			printf("FAILURE: coefficients a = %lg, b = %lg, c = %lg\n", a, b, c);
			printf("Correct: number of roots = %d, x1 = %lg, x2 = %lg\n", correct_number_of_roots, correct_x1, correct_x2);
			printf("Given:   number of roots = %d, x1 = %lg, x2 = %lg\n", number_of_roots, x1, x2);
		}
	}
}