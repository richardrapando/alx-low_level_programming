#include <stdio.h>

/**
 * main - Entry point
 *possible comibations
 * Return: 0 on success
 *
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}

		a++;
	}
	putchar('\n');

	return (0);
}
