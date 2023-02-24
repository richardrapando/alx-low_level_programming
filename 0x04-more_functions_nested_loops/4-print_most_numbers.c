#include "main.h"

/**
 * print_most_numbers - function that prints  numbers from 0 to 9 omitting 2 and 4
 *
 * @void: nothing
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(" ");
		}

		else
                {
                        _putchar(c);
                }
		c++;
	}
	_putchar('\n');
}
