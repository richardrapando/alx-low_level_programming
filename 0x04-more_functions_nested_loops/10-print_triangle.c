#include "main.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size : perimeter
 * 
 */

void print_triangle(int size)
{
	int y, z;

	if (size <= 0)
		_putchar('\n');

	for (y = 1; y <= size; y++)
	{

		for (z = 1; z <= size; z++)

		{

			if (z <= (size - y))

				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
