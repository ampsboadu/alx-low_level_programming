#include "main.h"

/**
 * cap_string -Capital first chars
 * @s: string
 * Return: format string
 */

char *cap_string(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((i != 0) && (s[i - 1] == ' ' || s[i - 1] == '.' || s[i - 1] == ';' || s[i - 1] == '!'))
				s[i] = s[i] - 'a' + 'A';
			if ((i != 0) && (s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'))
				s[i] = s[i] - 'a' + 'A';
			if ((i != 0) && (s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\n'))
				s[i] = s[i] - 'a' + 'A';
			if (i == 0)
				s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}
