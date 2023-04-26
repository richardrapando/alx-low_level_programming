#include "main.h"

/**
* print_d - functions that prints decimal numbers (%d)
* @ar_list: list of arguments
* Return: count
*/

int print_d(va_list ar_list)
{
	unsigned int num_Absolute, aux_Num, count_Zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(ar_list, int);

	if (numbers < 0)
	{
		num_Absolute = (numbers * -1);
		count += _putchar(45);
	}
	else
		num_Absolute = numbers;

	aux_Num = num_Absolute;
	count_Zero = 1;
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		count += _putchar(((num_Absolute / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);
}
