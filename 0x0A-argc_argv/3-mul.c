#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: arguments
 * @argv: pointers to strings
 * Return: 1 if the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int y, z;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		z = 1;

		for (y = 1; y < 3; y++)
		z *= atoi(argv[y]);

		printf("%d\n", z);
	}

	return (0);
}
