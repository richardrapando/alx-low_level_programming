#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letter;
	char *z;
	unsigned int number;

	va_start(letter, n);

	for (number = 0; number < n; number++)
	{
		z = va_arg(letter, char *);

		if (z == NULL)
			printf("(nil)");
		else
			printf("%s", z);

		if (number != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(letter);
}
