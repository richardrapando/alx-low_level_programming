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
        
	putchar('\n');

	letter = 'A';

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
