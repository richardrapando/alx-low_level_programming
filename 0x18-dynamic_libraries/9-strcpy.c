#include "main.h"
/**
 * _strcpy - copies a string pointed to by @src
 * @dest: buffer to copy the string
 * @src: source string to copy
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
