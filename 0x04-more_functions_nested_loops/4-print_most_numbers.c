#include "holberton.h"

/**
 * print_most_numbers - func printing numbers in the range 0-9 excluding 2 and 4
 *
 * @void: nothing
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (!(a == '2' || a == '4'))
			_putchar(a);

		a++;
	}
	_putchar('\n');
}
