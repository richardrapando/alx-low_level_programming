#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a string
 * @c: the string to be printed
 *
 * Return: 1 and 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
