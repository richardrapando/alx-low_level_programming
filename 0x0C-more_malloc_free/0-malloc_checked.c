#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
