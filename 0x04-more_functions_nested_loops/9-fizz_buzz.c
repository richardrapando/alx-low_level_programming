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
	int m;

	for (m = 1; m <= 100; m++)
	{

		if ((m % 3 == 0)

			printf("Fizz");

		else if (m % 5 == 0)

			printf("Buzz");

		else if (m % 3 == 0 && m % 5 == 0)

			printf("FizzBuzz");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
