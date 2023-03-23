#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameters
 *
 * Return: 0 If n == 0 or sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list z;
	unsigned int number, add = 0;

	va_start(z, n);

	for (number = 0; number < n; number++)
		add += va_arg(z, int);

	va_end(z);

	return (add);
}
