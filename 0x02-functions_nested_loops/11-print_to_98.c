#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - printing numbers from to 98
 * 
 *
 * Description: printing numbers from n to 98
 *
 * Return: void
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
	printf("\n");
}
