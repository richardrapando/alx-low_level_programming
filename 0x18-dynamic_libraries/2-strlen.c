#include "main.h"
/**
 * _strlen - returns length of string
 * @s: characters
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
		length++;

	return (length);
}
