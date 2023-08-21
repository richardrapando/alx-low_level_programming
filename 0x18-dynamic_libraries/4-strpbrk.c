#include "main.h"
/**
 * _strpbrk - searches string for a set of bytes
 * @s: the source string
 * @accept: the accepted characters
 *
 * Return: string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
