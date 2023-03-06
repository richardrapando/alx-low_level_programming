#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
        int z = 0;

        for (; n > 0; z++)
        {
                s[z] = b;
		n--;
        }

        return (s);
}
