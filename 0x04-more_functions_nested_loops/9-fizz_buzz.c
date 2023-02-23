#include <stdio.h>
#include "main.h"

/**
 * main - Fizz buzz
 *
 * Description:  Fizz to replace multiples of 3, Buzz for multiples of 5 and FizzBuzz for multiples of both 3 and 5
 *
 * Return: void
 */

int main(void)
{
	int z = 1;

	while (z <= 100)
	{
		if (z % 3 == 0 && z % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			_putchar("Fizz");
		}
		else if (z % 5 == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar( z);
		}
		z++;
	}
	_putchar('\n');
	return (0);
}
