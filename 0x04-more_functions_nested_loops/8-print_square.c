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

	while (a < size && size > 0)
	{
		z = 0;
		while (z < size)
		{
			_putchar('#');
			z++;
		}
		_putchar('\n');
		a++;
	}
}
