#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter
 * Return: 1 if c is a letter, lowercase or uppercase.
 *         0 if c is not a letter, lowercase or uppercase       
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
