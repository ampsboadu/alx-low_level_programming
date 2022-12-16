#include <stdio.h>
/**
 * main -prints numbers with
 * 'fizz' for mutiples of 3
 * 'buzz' for multiples of 5
 * 'fizzbuzz' for multiples of 3 & 5
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			if ((i % 3) == 0)
			{
				printf("Fizz ");
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
		i++;
	}
	printf("\n");
}