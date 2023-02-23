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
	int b = 0;

	while (b <= 9)
	{
		if (b != 2 && b != 4)
		{
			_putchar(b + '0');
		}
		b++;
	}
	_putchar('\n');
}
