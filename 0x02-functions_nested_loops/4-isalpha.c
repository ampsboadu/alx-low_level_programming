#include "main.h"
/**
 * _isalpha -function checks if input is character
 */

int _isalpha(int c)
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

	if (isL == 0)
	{
		a = 'A';

		while (a <= 'A')
		{
			if (a == c)
			{
				isL = 1;
				break;
			}
			a++;
		}
	}
	return (isL);
}
