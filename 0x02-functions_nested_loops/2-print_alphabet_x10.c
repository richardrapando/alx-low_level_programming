#include "main.h"
/**
 * main - Entry point
 * lowercase
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int number = 0;
	char letter = 'a';
	for(number = 0; number <=9; number++)
	{
		for(letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
