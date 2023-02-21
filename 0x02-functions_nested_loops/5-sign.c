#include "main.h"

/**
 * main - Entry point
 * Description: checking the sign of a number
 * Return: 1 if n>0, 0 if n == 0 and -1 if n<0
 */

int print_sign(int n)
{
    if (n > 0)
      { 
          _putchar('+');
          return (1);
      }
    else if (n == 0)
     {
         _putchar('0');
         return (0);
     }
    else
         _putchar('-1');
         return (-1);
     }
}
