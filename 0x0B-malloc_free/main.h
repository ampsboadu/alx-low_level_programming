#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar -print character
 */

int _putchar(char c);

/**
 * create_array -prototype to func
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup -protopype to func
 */

char *_strdup(char *str);

/**
 * str_concat -prototype to func
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid -prototype to func
 */

int **alloc_grid(int width, int height);

/**
 * free_grid -prototype to func
 */

void free_grid(int **grid, int height);

#endif
