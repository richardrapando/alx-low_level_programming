#include "main.h"
/**main - Entry point
 * from ASCII lower=97-122
 * upper=65-90
 * Return:0 on success
 */
int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c<= 122))
	{
		return (1)
	}
	else
	{
		return (0)
	}
}
