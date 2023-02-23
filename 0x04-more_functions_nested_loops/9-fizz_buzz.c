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
			printf("FizzBuzz");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", z);
		}
		if (z != 100)
		{
			putchar(' ');
		}

		z++;
	}
	putchar('\n');
	return (0);
}
