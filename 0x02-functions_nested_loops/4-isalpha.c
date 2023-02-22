#include "main.h"

/**
 * _isalpha - function to check for an alphabet is lower/upper case
 * @c: what is being checked
 * Description: checking the alphabet
 * Return: 1 or 0
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
