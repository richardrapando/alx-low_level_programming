#include "main.h"

/**i
 * print_to_98 - function to print numbers from n to 98
 *
 * @n: number
 *
 * Return: numbers
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
