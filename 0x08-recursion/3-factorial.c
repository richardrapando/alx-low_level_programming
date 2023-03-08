#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial integer
 *
 * Return: -1 to indicate an error If n is lower than 0
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
