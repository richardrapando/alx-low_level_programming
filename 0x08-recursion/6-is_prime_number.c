#include "main.h"

/**
 * is_prime_number -function that checks for a prime number
 * @n: input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int index = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, index));
}
