#include "main.h"

/**
 * times_table - function to print 9 times table
 *
 * @void: prints the 9 times table
 *
 * Return: void
 *
 */


void times_table(void)
{
	int y = 0;
	int z = 0;

	while (z <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			if ((z * y) > 9)
			{
				_putchar(' ');
				_putchar(((z * y) / 10) + '0');
				_putchar(((z * y) % 10) + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((z * y) + '0');
			}
			if (y != 9)
				_putchar(',');
			y++;
		}
		_putchar('\n');
		z++;
	}
}
