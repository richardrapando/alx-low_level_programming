#include <stdio.h>

/**
 * main - Entry point
 * q and e are ommitted
 * Return: 0 on success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
			letter++;
		}
		else
		{
			letter++;
		}
	}

	putchar('\n');

	return (0);
}
