#include "main.h"

/**
 * print_line - function printing straight line
 *
 * @n: lines printed
 *
 * Return: -
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)

		_putchar('_');

	_putchar('\n');
}
