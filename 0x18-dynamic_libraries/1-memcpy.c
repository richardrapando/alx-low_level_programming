#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area to be copied to
 * @src: the memory area to copy from
 * @n: the number of bytes to be copied
 *
 * Return: pointer to copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];

	return (dest);
}
