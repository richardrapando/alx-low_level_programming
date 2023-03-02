#include "main.h"

/**
 * print_most_numbers - function that prints  numbers from 0 to 9 omitting 2 and 4
 *
 * Description: print numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int z = 0;

	while (a <= 9)
	{
		if (z != 2 && z != 4)
		{
			_putchar(z + '0');
		}
		z++;
	}
	_putchar('\n');
}
