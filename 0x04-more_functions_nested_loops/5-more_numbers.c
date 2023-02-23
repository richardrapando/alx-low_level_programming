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
	char c, b;
	int a = 0;

	while (a < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			b = c;
			if (c > 9)
			{
				_putchar('1');
				b = c % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		a++;
	}
}
