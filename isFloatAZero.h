#ifndef _ISFLOATAZERO_HEADER__
#define _ISFLOATAZERO_HEADER__

#include <stdbool.h>
#include <math.h>

const double MACHINE_ZERO = 1e-7;
// THRESHOLD
// EPSILON
// PRECISION

/*!
@brief Shows whether a floating point number can beconsidered a zero

@param[in] x the number the function compares with zero

@return true or false whether the number can be considered a zero or not
*/

bool is_float_a_zero(const double x);

#endif
