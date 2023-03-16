#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements.
 * @size: byte size
 *
 * Return: NULL If nmemb or size is 0
 * NULL If malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int number;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	b = a;

	for (number = 0; number < (size * nmemb); number++)
		b[number] = '\0';

	return (a);
}
