#include "main.h"

/**
 * _isupper - function to check if a character is uppercase
 * @c: input
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
