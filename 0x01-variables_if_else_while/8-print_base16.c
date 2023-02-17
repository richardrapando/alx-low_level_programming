#include<stdio.h>
/**main - Entry point
 * base sixteen
 * Return:0 on success
 */
int main(void){
	int a=0;
	while(a<=9){
		putchar("%x\n", a);
		a++;
	}
	return (0);
}
