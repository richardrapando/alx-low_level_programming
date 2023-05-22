#include "main.h"

/**
* print_s - function that prints string (%s)
* @ar_list: list of characters
* Return: parameters
*/
int print_s(va_list ar_list)
{
        int i, count = 0;
        char *str;

        str = va_arg(ar_list, char *);
        if (str == NULL)
                str = "(null)";

        for (i = 0; str[i]; i++)
                count += _putchar(str[i]);

        return (count);
}
