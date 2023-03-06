#include "main.h"

/**
 * _strchr - function that locates a character in a strin
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
        int z;

        for (z = 0; s[z] >= '\0'; z++)
        {
                if (s[z] == c)
                        return (s + z);
        }

        return ('\0');
}
