#include<stdio.h>
/**
 * main - Entry point
 * except q and e
 * Return: 0 on success
 */
int main(void){
	char letter='a';
	while(letter<='z'){
		if(letter !='q' && letter !='e'){
			putchar("%c\n", letter);
			letter++;
		}
	}
	return (0);
}
