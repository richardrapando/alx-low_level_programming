#include "main.h"

/**
 * print_most_numbers - function to  print numbers in the range  0 - 9 excluding 2, 3
 * *
 * @void: nothing
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int m = '0';

	while (m <= '9')
	{
		if (!(m == '2' || m == '4'))
			_putchar(m);

		m++;
	}
	_putchar('\n');
}
