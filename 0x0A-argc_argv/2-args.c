#include <stdio.h>
#include "main.h"

/**
 * main - print name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Alwas 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variable*/
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
}
