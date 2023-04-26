#include "main.h"

/**
 * print_c - function that prints characters (%c)
 * @ar_list: list of characters
 * Return: parameters
 */

int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}
