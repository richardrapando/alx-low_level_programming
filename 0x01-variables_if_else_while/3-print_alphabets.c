#include<stdio.h>
/**
 * main - Entry point
 * lower/upper case
 * Return: 0 on success
 */
int main(void){
	char letter='a';
	while(letter<='z'){
		putchar("%c\n", letter);
		letter++;
	}
	letter='A';
	while(letter<='Z'){
		putchar("%c\n", letter);
		letter++;
	}
	return (0);
}
