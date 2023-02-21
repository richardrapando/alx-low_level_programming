#include "main.h"
/**main - Entry point
 * sign of a number
 * Return:0 on sucess
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('a');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
