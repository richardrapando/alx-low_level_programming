#include "main.h"

/**
 * print_alphabet_x10 - x10 times alphabet
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	int number = 0;
	char letter = 'a';

	for (number = 0; number < 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

}
