#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - function that prints a character.
 * @arg: arguments
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - function that prints an integer.
 * @arg: arguments
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - function that prints a floating point number.
 * @arg: arguments
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - function that prints a string.
 * @arg: arguments
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
