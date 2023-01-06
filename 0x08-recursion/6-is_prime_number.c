#include "main.h"

/**
 * prime -function checks if number is prime
 * @n: number
 * @i: divisor
 * Return: 0 and 1
 */

int prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (n == i)
		return (1);

	return (prime(n, i + 1));
}

/**
 * is_prime_number -prime number checker
 * @n: number
 * Return: 1 for prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (prime(n, 3));
}
