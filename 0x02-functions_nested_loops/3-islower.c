#include "main.h"
/**
 * _islower -checks if character is lower or upper
 * @c: input alphabet
 * Return: 1 for lower and 0 for upper
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
