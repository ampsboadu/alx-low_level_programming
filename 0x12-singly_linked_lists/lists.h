#ifndef _LIST_H
#define _LIST_H

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
