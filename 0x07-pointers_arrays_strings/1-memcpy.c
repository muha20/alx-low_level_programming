#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: no of bytes
 * Returns: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; < n; i++)
		dest[i] = src[i];
	
	return (dest);
}
