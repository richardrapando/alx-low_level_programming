#include "main.h"

/**
 * main - Entry point
 * print_alphabet_x10 
 *
 * Return: Always 0 on success
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
