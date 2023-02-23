#include "main.h"

/**
 * _isdigit - function to check for a digit in the range  0 - 9
 *
 * @c: digit
 *
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
