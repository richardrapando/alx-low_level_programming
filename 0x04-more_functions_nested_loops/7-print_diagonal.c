#include "main.h"

/**
 * print_line - function that prints  diagonal lines
 *
 * @n: lines printed out
 *
 * Return: \
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
}
