#include <stdio.h>

/**
 * main - Entry point
 *Base 16 numbers
 * Return: 0 on success
 */

int main(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}

	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}

	putchar('\n');

	return (0);

}
