#include <stdio.h>
/**
 * main -print all aphabets exclude q & e
 *
 *  Return: 0
 */

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if ((a != 'q') && (a != 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
