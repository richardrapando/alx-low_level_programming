#include "main.h"
/**
 * _isalpha - checks for any letter of the alphabet
 * @c: value to chck
 *
 * Return: 1 if is a letter.if not return 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
