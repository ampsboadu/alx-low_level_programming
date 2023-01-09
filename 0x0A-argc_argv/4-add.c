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
 * main -print addition of int args
 * @argc: count of args
 * @argv: array of args
 * Return: 0 on success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_int(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
