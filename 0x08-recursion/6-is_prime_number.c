#include "main.h"

/**
 * is_prime_number - function that checks for a prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number
 *         0 if the input integer is not a prime number
 */
int is_prime_number(int n)
{
	int a=n;

	if (n % 2 == 0)
	{
		return (1);
	}

	else if (n % 2 != 0)
	{
		return (0);
	}

	return (a);
}
