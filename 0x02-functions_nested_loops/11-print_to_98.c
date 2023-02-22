#include "main.h"
#include <stdio.h>

/**i
 * print_to_98 - function to print numbers from n to 98
 *
 * @n: maximum value\minimum value for which the function starts
 *
 * Description:printing from n to 98
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n--;
	}
	printf("98\n");
}
