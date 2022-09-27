#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: startting address
 * @b: value.
 * @n: The number of bytes to be filled.
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
