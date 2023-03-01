#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string pointer
 * @n: array elements
 */

void reverse_array(int *a, int n)
{
	int zee, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		zee = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = zee;
	}
}
