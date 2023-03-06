#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial segment
 * @accept:  prefix
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int y = 0;
        int z;

        while (*s)
        {
                for (z = 0; accept[z]; z++)
                {
                        if (*s == accept[z])
                        {
                                y++;
                                break;
                        }

                        else if (accept[z + 1] == '\0')
                                return (y);
                }

                s++;
        }

        return (y);
}
