#include "main.h"

/**
 * _islower - a function checking  a letter is in lowercase
 * ASCII numbers equivalent
 * ranges from 97 to 122
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
