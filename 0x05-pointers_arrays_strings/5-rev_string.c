#include "main.h"

/**
 * rev_string -reverse string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int c = 0;
	int rev = s[0];

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
