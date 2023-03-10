#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: arguments
 * @argv: pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (z = 0; *argv; z++, argv++)
			;

		printf("%d\n", z - 1);
	}

	return (0);
}
