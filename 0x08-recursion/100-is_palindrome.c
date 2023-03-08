#include "main.h"

/**
 * is_palindrome - function that checks if a string is a palindrome.
 * @s: string to be checked
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int number = 0;
	int z = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, z, number));
}
