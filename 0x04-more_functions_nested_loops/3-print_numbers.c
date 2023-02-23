#include "main.h"

/**
 * print_numbers - function that prints numbers in the range 0-9
 *
 * @void: nothing
 *
 * Return: void
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
