#include "main.h"
/**main - Entry point
 * from ASCII lower = 97-122
 * Return:0 on successs
 */
int _islower(int c)
{
	if((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
