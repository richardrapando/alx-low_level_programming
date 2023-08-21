#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: digit to check
 *
 * Return: 1 if it is a digit. otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
