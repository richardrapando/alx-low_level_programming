#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string that stores string copy
 * @src: source string
 * @n: number of bytes to be copied from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0, z = 0;

	while (src[z])
	{
		z++;
	}

	while (y < n && src[y])
	{
		dest[y] = src[y];
		y++;
	}

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
