#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size : perimeter
 * 
 */

void print_triangle(int size)
{
	int a=0 , z;

	while (a <= size && size > 0)
	{
		z = 0;
		while (z < size - a)
		{
			_putchar(' ');
			z++;
		}
		z = 0;
		while (z < a)
		{
			_putchar('#');
			z++;
		}

		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}

