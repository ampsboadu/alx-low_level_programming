#include <stdio.h>
/**
 * main -print two digit combination
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		num3 = num2 + 1;
		for (num1 = num3; num1 <= '9'; num1++)
		{
			putchar(num2);
			putchar(num1);

			if ((num1 != '9') || (num2 != '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
