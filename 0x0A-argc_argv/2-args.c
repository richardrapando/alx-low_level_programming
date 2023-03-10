#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: arguments
 * @argv: pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	printf("%s\n", argv[z]);

	return (0);
}
