#include <stdio.h>

/**
 * main - Entry point
 *lowercase
 * Return: 0 on success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;

	}
	putchar('\n');

	return (0);
}
