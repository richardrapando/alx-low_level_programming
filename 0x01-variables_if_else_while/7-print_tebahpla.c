#include<stdio.h>
/**main - Entry point
 * reverse
 * Return:0 on success
 */
int main (void){
	char letter='z';
	while(letter>='a'){
		putchar("%c\n", letter);
		letter--;
	}
	return (0);
}
