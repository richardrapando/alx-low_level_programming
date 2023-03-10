#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that program that adds positive numbers.
 * @argc: arguments
 * @argv:  pointers to strings
 * Return: 1 one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int y, z, length, sum;
	char *pointer;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (y = 1; y < argc; y++)
		{
			pointer = argv[y];
			length = strlen(pointer);

			for (z = 0; z < length; z++)
			{
				if (isdigit(*(pointer + z)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[y]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
