#include "main.h"

/**
 * *_strcat - function appending src to the dest string
 * @src: source string
 * @dest: destination string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int bit = 0;

	while (dest[index++])
		bit++;
	for (index = 0; src[index]; index++)
		dest[bit++] = src[index];
	return (dest);
}
