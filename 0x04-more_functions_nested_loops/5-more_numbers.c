#include "main.h"

/**
 * more_numbers - function that prints numbers in the range 0 - 14 ten times
 *
 * @void: nothing
 *
 * Return: void
 */

void more_numbers(void)
{
	int b;
	int a = 0;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}
