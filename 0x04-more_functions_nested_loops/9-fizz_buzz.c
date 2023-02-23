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
	int a;

	for (a = 1; a <= 100; a++)
	{

		if ((a % 3) == 0 && (a % 5) != 0)

			printf("Fizz");

		else if ((a % 3) != 0 && (a % 5) == 0)

			printf("Buzz");

		else if ((a % 3) == 0 && (a % 5) == 0)

			printf("FizzBuzz");

		else
			printf("%d", a);

		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
