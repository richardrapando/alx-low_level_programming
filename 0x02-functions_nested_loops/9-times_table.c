#include "main.h"
/**times_table - Entry point
 * Description: printing the  9 times table
 * Return: void on sucess
 */
void times_table(void)
{
	int a = 0;
	for(a =0; a <= 12; a++)
	{
		a = a * 9;
		_putchar(a);
	}
	_putchar('\n');
}
