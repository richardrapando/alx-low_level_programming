#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

