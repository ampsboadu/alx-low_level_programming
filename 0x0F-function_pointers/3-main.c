#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "3-get_op_func.c"

/**
 * main -entry to the programe
 * @argc: arguments count
 * @argv: arguments list
 * Return: 0 on success or 98, 99, 100 on Error
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2));

	return (0);
}
