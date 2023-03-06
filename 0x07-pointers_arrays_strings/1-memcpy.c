#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: final memory area
 * @src: initial memory area
 * @n:  number of bytes
 * Return: pointer to final memory area(dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

        unsigned int i;

        for (i = 0; i < n; i++)
        {
                *(dest + i) = *(src + i);

        }

        return (dest);
}
