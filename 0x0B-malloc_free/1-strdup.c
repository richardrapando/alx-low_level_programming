#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *z;
	int number, length = 0;

	if (str == NULL)
		return (NULL);

	for (number = 0; str[number]; number++)
		length++;

	z = malloc(sizeof(char) * (length + 1));

	if (z == NULL)
		return (NULL);

	for (number = 0; str[number]; number++)
		z[number] = str[number];

	z[length] = '\0';

	return (z);
}
