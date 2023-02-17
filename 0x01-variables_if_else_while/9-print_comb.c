#include<stdio.h>
/**main - Entry point
 * single digit with commas
 * Return:0 on success
 */
int main(void){
	int a=0;
	while(a<=9){
		putchar("%d, ", a);
		a++;
	}
	return (0);
}
