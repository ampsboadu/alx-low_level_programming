#include "main.h"
#include <string.h>

/**
 * _atoi -extract integers from string
 * @s: string
 * Return: integers extracted
 */

int _atoi(char *s)
{
	int i;
	int len = strlen(s);
	int vals = 0;
	int neg = 0;

	for (i = 0; i < len; i++)
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			vals = vals * 10 + (s[i] - '0');
		}

		if (s[i] == '-')
			neg++;

		if ((vals != 0) && !((s[i] >= '0') && (s[i] <= '9')))
			break;
	}

	if (neg == 1 && s[0] == '-')
		vals = vals * -1;

	return (vals);
}
