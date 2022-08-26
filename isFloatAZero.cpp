#include "isFloatAZero.h"

bool is_float_a_zero(const double x)
{
	return (fabs(x) < MACHINE_ZERO);
}