#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer
 *
 * Return: the converted number
 *         Otherwise - 0 if there is one or more chars in
 *                           the string b that is not 0 or 1
 *                       if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int yangu = 0;
        int jina = 0;

        if (b[jina] == '\0')
                return (0);

        while ((b[jina] == '0') || (b[jina] == '1'))
        {
                yangu <<= 1;
                yangu += b[jina] - '0';
                jina++;
        }

        return (yangu);
}
