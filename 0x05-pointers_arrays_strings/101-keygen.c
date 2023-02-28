#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that generates random valid passwords for the program 101-crackme
 * Return: nothing
 */
int main(void)
{
	int addition;
	char z;

	srand(time(NULL));
	while (addition <= 2645)
	{
		z = rand() % 128;
		addition += z;
		putchar(z);
	}
	putchar(2772 - addition);
	return (0);
}
