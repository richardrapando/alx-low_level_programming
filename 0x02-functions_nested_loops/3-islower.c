#include "main.h"

/**
 * _islower - function to check if a letter is in lowercase
 * ASCII numbers equivalent
 * @c: character value
 * Return: 0 or 1
 *
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
