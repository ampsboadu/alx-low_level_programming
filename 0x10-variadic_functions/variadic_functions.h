#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

/**
 * _putchar -blueprnt to put char func
 */

int _putchar(char c);

/**
 * sum_them_all -func blueprint
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers -func blueprint
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings -func blueprint
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all -func blueprint
 */

void print_all(const char * const format, ...);

#endif
