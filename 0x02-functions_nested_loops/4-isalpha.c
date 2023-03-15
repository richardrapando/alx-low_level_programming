#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: alphabetic character/number
 * 
 * Return: 1 if c is a letter. 0 if c is otherwise
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
