#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the multiplication of two integers
 * @argc: Argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		return (0);
	}
	printf("Error\n");
	return (1);
}
