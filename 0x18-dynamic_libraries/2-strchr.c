#include "main.h"
/**
 * _strchr - locates charater in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to first occurence. NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0 ; b <= a ; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
