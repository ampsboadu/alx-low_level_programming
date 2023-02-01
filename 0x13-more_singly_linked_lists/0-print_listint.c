#include "lists.h"

/**
 * printnumber -print integer with _putchar
 * @n: integer to print
 */

void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		/* printf("%d\n", h->n);  autofills 0 if no int value given */
		printnumber(h->n);
		_putchar('\n');

		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
