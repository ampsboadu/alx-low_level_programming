#include <stdio.h>

/**
 * main -prints all args
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
