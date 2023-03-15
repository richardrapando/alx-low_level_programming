#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that print numbers from n to 98
 * @n: integers printed
 *

 * Return: integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
