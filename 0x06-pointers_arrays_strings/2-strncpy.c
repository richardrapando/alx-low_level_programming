#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: dest string pointer
 * @src: src string pointer
 * @n: number of bytes from src
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, bit = 0;

	while (src[index++])
		bit++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = bit; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
