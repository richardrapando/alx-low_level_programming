#include "main.h"

/**
 * _strncat - a function concatanating two strings
 * @dest: dest string pointer
 * @src: src string pointer
 * @n: number of bytes from src
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, bit = 0;

	while (dest[i++])
		bit++;

	for (i = 0; src[i] && i < n; i++)
		dest[bit++] = src[i];

	return (dest);
}
