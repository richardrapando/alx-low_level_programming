#include "main.h"

/**
 * _islower - function to check if a character is in lowercase
 * Description: checking for equivalence
 * @c: comparison
 * Return: 1 or 0
 */
int _islower(int c)
{
     int i = 'a';

     for (i = 'a'; i <= 'z'; i++)
     { 
          /* refer int c*/
          if (c == i)
          {
              return (1);
          }
          else
          {
              return (0);
          }
