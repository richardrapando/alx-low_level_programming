#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: main string
 * @needle: minor string
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
        int z;

        if (*needle == 0)
                return (haystack);

        while (*haystack)
        {
                z = 0;

                if (haystack[z] == needle[z])
                {
                        do {
                                if (needle[z + 1] == '\0')
                                        return (haystack);

                                z++;

                        } while (haystack[index] == needle[z]);
                }

                haystack++;
        }

        return ('\0');
}
