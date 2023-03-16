#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *join;
	unsigned int length = n, number;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (number = 0; s1[number]; number++)
		length++;

	join = malloc(sizeof(char) * (length + 1));

	if (join == NULL)
		return (NULL);

	length = 0;

	for (number = 0; s1[number]; number++)
		join[length++] = s1[number];

	for (number = 0; s2[number] && number < n; number++)
		join[length++] = s2[number];

	join[length] = '\0';

	return (join);
}
