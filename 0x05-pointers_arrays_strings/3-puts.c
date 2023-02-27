#include "main.h"

/**
 * _puts - function that prints a string followed by a newline
 *
 * @str: string that is to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
