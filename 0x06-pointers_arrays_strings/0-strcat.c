#include "main.h"
#include <string.h>

/**
 * _strcat -appends two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int des_len = strlen(dest);

	while (*src != '\0')
	{
		dest[des_len] = src[i];
		i++;
		des_len++;
	}
	dest[des_len] = '\0';

	return (dest);
}
