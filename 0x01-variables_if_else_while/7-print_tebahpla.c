#include <stdio.h>
/**
 * main -print all aphabets in lowercase z-a
 *
 * Return: 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
