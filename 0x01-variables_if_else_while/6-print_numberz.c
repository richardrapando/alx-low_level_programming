#include<stdio.h>
/**main - Entry point
 * using putchar
 * Return:0 on success
 */
int main(void){
	int a=0;
	while(a<=9){
		putchar("%d\n", a);
		a++;
	}
	return (0);
}
