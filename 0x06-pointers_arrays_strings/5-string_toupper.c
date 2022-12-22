#include "main.h"
#include <string.h>

/**
 * string_toupper -converts string to upper
 * @s: string to convert
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = toupper((unsigned char) s[i]);
		i++;
	}

	return (s);
}
