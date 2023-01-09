#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiply two nums from args
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
