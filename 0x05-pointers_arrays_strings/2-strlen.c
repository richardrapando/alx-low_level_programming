#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
