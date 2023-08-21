#include "main.h"
/**
 * _isupper - checks for an upper case character
 * @c: the character to check
 *
 * Return: 1 if is upper.if not return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
