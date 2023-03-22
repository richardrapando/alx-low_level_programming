#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array.
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 If no element matches or -1 if size <= 0 .
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int number;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (number = 0; number < size; number++)
	{
		if (cmp(array[number]) != 0)
			return (number);
	}

	return (-1);
}
