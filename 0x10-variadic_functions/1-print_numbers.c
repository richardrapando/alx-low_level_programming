#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list z;
	unsigned int number;

	va_start(z, n);

	for (number = 0; number < n; number++)
	{
		printf("%d", va_arg(z, int));

		if (number != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(z);
}
