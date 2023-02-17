#include<stdio.h>
/**
 * main - Entry point
 * lowercase
 * Return: 0 on success
 */
int main(void)
{
	char letter='a';
	while(letter<='z'){
		putchar("%c\n", letter);
		letter++;
	}
	return (0);
}
