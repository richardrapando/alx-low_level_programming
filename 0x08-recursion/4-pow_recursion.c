#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power y.
 * @x: number to raise
 * @y: power.
 *
 * Return: value of x raised to the power of y.
 */
 
int _pow_recursion(int x, int y)
{
        int final = x;

        if (y < 0)
                return (-1);

        else if (y == 0)
                return (1);

        final *= _pow_recursion(x, y - 1);

        return (final);
}
