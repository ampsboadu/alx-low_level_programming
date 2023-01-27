#ifndef _LIST_H
#define _LIST_H

#include <stdio.h> /* size_t, printf */
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/**
 * _putchar -blueprnt to put char func
 */

int _putchar(char c);

/**
 * print_list -func prototype
 */

size_t print_list(const list_t *h);

/**
 * list_len - func prototype
 */

size_t list_len(const list_t *h);

/**
 * add_node -func prototype
 */

list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end -func prototype
 */

list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list -func prototype
 */

void free_list(list_t *head);

#endif
