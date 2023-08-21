#include "main.h"
/**
 * _memset - fills the memory with constant byte
 * @s: the memory area to fill
 * @b: the consant byte to fill
 * @n: number of bytes of memory area to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		s[a] = b;

	return (s);
}
