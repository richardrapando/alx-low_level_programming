#include "main.h"

/**
 * print_diagonal - function to print diagonals
 * @n:  \ to be printed
 * Return: void
 */


void print_diagonal(int n)
{
	int a = 0, z;

	while (a < n && n > 0)
	{
		z = 0;
		while (z < a)
		{
			_putchar(' ');
			z++;
		}

		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
