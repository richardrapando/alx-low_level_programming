#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *join_str;
	int number, join_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (number = 0; s1[number] || s2[number]; number++)
		length++;

	join_str = malloc(sizeof(char) * length);

	if (join_str == NULL)
		return (NULL);

	for (number = 0; s1[number]; number++)
		join_str[join_index++] = s1[number];

	for (number = 0; s2[number]; number++)
		join_str[join_index++] = s2[number];

	return (join_str);
}
