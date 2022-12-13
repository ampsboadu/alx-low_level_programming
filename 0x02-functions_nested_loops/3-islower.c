#include "mian.h"
/**
 * _islower -checks if character is lower or upper
 */

int _islower(int c)
{
	char a = 'a';
	int isL = 0;

	while (a <= 'z')
	{
		if (a == c)
		{
			isL = 1;
			break;
		}
		a++;
	}
	return (isL);
}
