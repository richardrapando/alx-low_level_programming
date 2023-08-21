#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the pointer to first string
 * @src: the pointer to second string
 * @n: the number of bytes from src
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0 ; src[index] && index < n ; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
