#include "main.h"
/**
 * _puts - prints string followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
