#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 * @n: number to determine the last digit
 * Description: prints the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
	{
	      m  = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
