#include "main.h"

/**
 * _pow_recursion - function that raises a number
 * @x: number
 * @y: power.
 *
 * Return: -1 If y is lower than 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
