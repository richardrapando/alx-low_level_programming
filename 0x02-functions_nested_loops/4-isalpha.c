#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks if a letter is in upper and lower case
 * Return: 1 if letter is upper/lower. 0 if letter is not upper/lower
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
        	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
