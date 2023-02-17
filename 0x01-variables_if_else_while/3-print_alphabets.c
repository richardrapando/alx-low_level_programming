#include<stdio.h>
/**
 * main - Entry point
 * lower/upper case
 * Return: 0 on success
 */
int main(void){
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while( letter <= 'A')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
