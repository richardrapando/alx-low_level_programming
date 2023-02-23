#include "main.h"

/**
 * print_square - function to print a square 
 *
 * @size: # characters
 *
 */

void print_square(int size)
{
	int a = 0, z;

	while (a < n && n > 0)
	{
		z = 0;
		while (z < n)
		{
			_putchar('#');
			z++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
