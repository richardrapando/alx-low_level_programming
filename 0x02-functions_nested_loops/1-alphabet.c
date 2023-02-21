#include "main.h"
/**
 * main - Entry point
 * print lowercase
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char letter='a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
