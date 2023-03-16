#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 * @min: minimum array value
 * @max: maximum array value
 *
 * Return: NULL If min > max
 * NULL If malloc fails
 */

int *array_range(int min, int max)
{
	int *arr, number, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (number = 0; number < size; number++)
		arr[number] = min++;

	return (arr);
}
