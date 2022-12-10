#include <stdio.h>
/**
 * main -print pairs of numbers
 *
 * Return: 0
 */

int main(void)
{
	int num2;
	int num1;
	int n1;
	int n2;

	for (num2 = '0'; num2 <= '9'; num2++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			for (n2 = num2; n2 <= '9'; n2++)
			{
				for (n1 = (num1 + 1); n1 <= '9'; n1++)
				{
					putchar(num2);
					putchar(num1);
					putchar(' ');
					putchar(n2);
					putchar(n1);

					if (!((num2 == '9' && num1 == '8') && (n1 == '9' && n2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				n1 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
