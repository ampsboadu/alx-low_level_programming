#include <stdio.h>
/**
 * main -print numbers base 16
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';
	char apha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (apha <= 'f')
	{
		putchar(apha);
		apha++;
	}
	putchar('\n');
	return (0);
}
