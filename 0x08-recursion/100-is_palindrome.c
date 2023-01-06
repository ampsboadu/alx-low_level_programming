#include "main.h"
#include "2-strlen_recursion.c"

/**
 * checker -checks if value in indexes match
 * @first: value in first index
 * @last: value in last index
 * Return: 1 or 0
 */

int checker(char *first, char *last)
{
	if (first >= last)
		return (1);

	if (*first == *last)
		return (checker(first + 1, last - 1));

	return (0);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, (s + len - 1)));
}
