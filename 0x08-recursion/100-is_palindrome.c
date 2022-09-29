#include "main.h"

/**
 * is_palindrome - returns the 1 if s is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int find_strlen(char *s);
int is_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen Return the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
{
	 len++;
	 len += find_strlen(s + len);
}
return (len);
}
