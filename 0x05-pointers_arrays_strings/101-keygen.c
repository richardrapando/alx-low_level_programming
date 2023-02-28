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
	while (addition <= 800)
	{
		z = rand() % 50;
		addition += z;
		putchar(z);
	}
	putchar(500 - addition);
	return (0);
}
