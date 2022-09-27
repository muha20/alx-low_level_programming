#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: startting address
 * @b: value.
 * @n: The number of bytes to be filled.
 * Return: Always 0
 */
char *_memset(void *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[n 1] = b;
		n--;
	}
	return (s);
}
