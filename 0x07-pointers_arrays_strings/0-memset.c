#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting address
 * @b: value
 * @n: no of bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
