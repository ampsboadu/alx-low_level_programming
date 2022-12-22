#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar -blueprnt to put char func
 */

int _putchar(char c);

/**
 * _strcat -Blueprint for append function
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat -blueprint for concat func
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy -blueprint for copy string func
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp -blueprint to string compare func
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array -blueprint to array reverse func
 */

void reverse_array(int *a, int n);

/**
 * string_toupper -blueprint to upper case func
 */

char *string_toupper(char *);

/**
 * cap_string -blueprint to capital word func
 */

char *cap_string(char *);

/**
 * leet -blueprint to convert func
 */

char *leet(char *);

/**
 * rot13 -blueprint to rot13 func
 */

char *rot13(char *);

/**
 * print_number -blueprint to print int func
 */

void print_number(int n);

/**
 * infinite_add -blueprint to infinite add func
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
