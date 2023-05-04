#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 *             would need to flip to get from one number to another
 * @n: number
 * @m: value to flip to
 *
 * Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        unsigned long int jina = n ^ m, yangu = 0;

        while (jina > 0)
        {
                yangu += (jina & 1);
                jina >>= 1;
        }

        return (yangu);
}

