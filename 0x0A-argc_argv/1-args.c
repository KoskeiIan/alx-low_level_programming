#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry ppoint
 * @argc: arguments
 * @argv: array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (--argc)
	{
		i++;
	}
	printf("%i\n", i);
	return (0);
}
