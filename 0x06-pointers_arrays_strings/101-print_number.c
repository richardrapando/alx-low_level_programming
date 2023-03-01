#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int z = n;

	if (n < 0)
	{
		_putchar('-');
		z = -z;
	}

	if ((z / 10) > 0)
		print_number(z / 10);

	_putchar((z % 10) + '0');
}
