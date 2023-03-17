#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using
 malloc and free
 * @ptr:  pointer to the memory previously allocated with 
 a call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: ptr if new_size == old_size 
 * NULL if new_size is equal to zero, and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *z;
	char *same, *brim;
	unsigned int number;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		z = malloc(new_size);

		if (z == NULL)
			return (NULL);

		return (z);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	same = ptr;
	z = malloc(sizeof(*same) * new_size);

	if (z == NULL)
	{
		free(ptr);
		return (NULL);
	}

	brim = z;

	for (number = 0; number < old_size && number < new_size; number++)
		brim[number] = *same++;

	free(ptr);
	return (z);
}
