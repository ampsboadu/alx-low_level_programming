#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_int -checks if str is int
 * @str: value to check
 * Return: true or false
 */

bool is_int(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}

	return (1);
}

/**
 * main -prints multiplication of two nums
 * @argc: count of args
 * @argv: array of args
 * Return: 0 for success or 99 for Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || is_int(argv[1]) || is_int(argv[2]))
	{
		printf("%s\n", "Error");
		return (98);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
