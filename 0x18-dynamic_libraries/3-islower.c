#include "main.h"
/**
 * _islower - checks for a lower case letter
 * @c: character to check
 *
 * Return: 1 if is lower. 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
