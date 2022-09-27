#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: aliyu muhamm
 * description: header file containing prototypes for all functions
 * used in the 0x07. C - Even more pointers, arrays and strings
 */

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*)[a]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
