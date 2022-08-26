#include "singleUnitTest.h"

void respond_to_error(struct test_parameters t, Kinds_of_roots number_of_roots, double x1, double x2)
{
	printf("FAILURE: coefficients  a = %lg, b  = %lg, c  = %lg\n", t.first_coefficient,
		t.second_coefficient,t.third_coefficient);
	printf("Correct: number of roots = %d, x1 = %lg, x2 = %lg\n", t.cor_num_of_roots,
		t.first_root, t.second_root);
	printf("Given:   number of roots = %d, x1 = %lg, x2 = %lg\n", number_of_roots, x1, x2);
}

bool unit_test (struct test_parameters t)    
{
	Kinds_of_roots number_of_roots = ROOTS_ERROR;
	double x1 = NAN;
	double x2 = NAN;
	
	number_of_roots = solve_quadratic(t.first_coefficient, t.second_coefficient, t.third_coefficient, &x1, &x2);

	if ((t.cor_num_of_roots == ROOTS_ZERO and number_of_roots == ROOTS_ZERO) 
	or  (t.cor_num_of_roots == ROOTS_INF  and number_of_roots == ROOTS_INF)) {
		return true;
	}
	else if (t.cor_num_of_roots == ROOTS_SINGLE and number_of_roots == ROOTS_SINGLE) {
		if (is_float_a_zero(x1 - t.first_root)) {
			return true;
		}
		else {
			respond_to_error(t, number_of_roots, x1, x2);
			return false;
		}
	}
	else if (t.cor_num_of_roots == ROOTS_TWO and number_of_roots == ROOTS_TWO) {
		if (is_float_a_zero(x1 - t.first_root) and is_float_a_zero(x2 - t.second_root)) {
			return true;
		}
		else {
			respond_to_error(t, number_of_roots, x1, x2);
			return false;
		}
	}
	else {
		return true;
	}
}