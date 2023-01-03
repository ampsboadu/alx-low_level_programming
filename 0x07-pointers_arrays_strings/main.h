#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar -blueprnt to put char func
 */

int _putchar(char c);

/**
 * _memset -blueprint to memset func
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy -blueprint to memory copy func
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr -blueprint to char locate func
 */

char *_strchr(char *s, char c);

/**
 * -strspn -blueprint to len of sustring func
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk -blueprint to s locate func
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr -blueprint to find occurance func
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard -blueprint to chess func
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums -func blueprint
 */

void print_diagsums(int *a, int size);

#endif
