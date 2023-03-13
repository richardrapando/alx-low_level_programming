#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: arguments
 * @av: pointers to the arguments.
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int argument, number, size = ac, byte;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			size++;
	}

	string = malloc(sizeof(char) * size + 1);

	if (string == NULL)
		return (NULL);

	number = 0;

	for (argument = 0; argument < ac; argument++)
	{
		for (byte = 0; av[argument][byte]; byte++)
			string[number++] = av[argument][byte];

		string[number++] = '\n';
	}

	string[size] = '\0';

	return (string);
}
