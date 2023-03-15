#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 * @n: number 
 * 
 * Return: value of the last digit
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
