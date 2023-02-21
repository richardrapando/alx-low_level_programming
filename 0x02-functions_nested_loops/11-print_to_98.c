#include<stdio.h>
#include "main.h"
/**main - Entry point
 * zero to 98
 * Return: 0 on success
 */

void print_to_98(int a)
{
	while(a < 98)
	{
		printf("%d, ", a);
		a++;
	}
	printf("\n");
}
