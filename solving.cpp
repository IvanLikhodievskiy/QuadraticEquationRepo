#include "solving.h"
#include "isFloatAZero.h"

Kinds_of_roots solve_linear(const double b, const double c, double* x)
{
	assert(x != nullptr);

	if (is_float_a_zero(b)) {
		if (is_float_a_zero(c))
			return ROOTS_INF;
		else
			return ROOTS_ZERO;
	}
	else {
		*x = -c / b;
		return ROOTS_SINGLE;
	}
}

Kinds_of_roots solve_quadratic(const double a, const double b, const double c, double* x1, double* x2)
{
	assert(x1 != nullptr);
	assert(x2 != nullptr);
	assert(x1 != x2);

	if (is_float_a_zero(a)) {
		return solve_linear(b, c, x1);
	}
	else {
		double Discriminant = b * b - 4 * a * c;
		if (Discriminant < 0)
			return ROOTS_ZERO;
		if (is_float_a_zero(Discriminant)) {
			*x1 = -b / (2 * a);
			return ROOTS_SINGLE;
		}
		*x1 = (-b + sqrt(Discriminant)) / (2 * a);
		*x2 = (-b - sqrt(Discriminant)) / (2 * a);
		return ROOTS_TWO;
	}
}