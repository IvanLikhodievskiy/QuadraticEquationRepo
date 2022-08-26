#include "io.h"

void cleaning_buff()
{
	while (getchar() != '\n')
		continue;
}

void input_of_coefficients(double* a, double* b, double* c)
{
	assert(a != nullptr);
	assert(b != nullptr);
	assert(c != nullptr);
	assert(a != b);
	assert(a != c);
	assert(b != c);

	printf("Suppose we have an equation a * x^2 + b * x + c = 0\n");
	printf("Enter coefficients a, b and c respectively separated by space:\n");
	while (scanf("%lf %lf %lf", a, b, c) != 3) {
		printf("Try again, your coefficients are ivalid\n");

		cleaning_buff();
	}
}

void output_of_the_result(Kinds_of_roots number_of_roots, const double x1, const double x2, char* cond)
{
	assert(cond != nullptr);

	switch (number_of_roots) {
		case ROOTS_ZERO:
			printf("No real roots\n");
			break;
		case ROOTS_SINGLE:
			printf("The root is %lg\n", x1);
			break;
		case ROOTS_TWO:
			printf("The roots are %lg and %lg\n", x1, x2);
			break;
		case ROOTS_INF:
			printf("Every real number is a root\n");
			break;
		default:
			assert(0 && "Unexpected number of roots\n");
	}

	cleaning_buff();

	printf("Would you like to try again?\n");
	printf("If you would, please, enter c\n");
	printf("Elsewhere, please, press any other key\n");

	*cond = getchar();
}