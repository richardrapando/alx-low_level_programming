#include "main.h"

/**
 * _strcpy - Copies a str pointed to by @src, plus the terminating null byte,
 *  the buffer pointed to by dest
 * @dest:  buffer
 * @src: string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
