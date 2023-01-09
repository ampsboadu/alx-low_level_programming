#include <stdio.h>

/**
 * main -prints count of args
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
