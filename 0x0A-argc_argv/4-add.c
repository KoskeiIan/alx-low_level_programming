#include <stdlib.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - adds numbers supplied
 * @argc: number of arguments
 * @argv: array of pointers  to string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
					{
					printf("Error\n");
					return (1);
					}
		}
	}
	for (i = 1; i < argc; i++)
	{
	x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}				
