#include "holberotn.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diaonals of a square
 * @a: pointer to array
 * @size: size of aarray
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sixe1;
	unsigned  sumDiag1, sumDiaf2;

	size1 = 0;
	sumDiag1 = 0;
	sumDiag = 0;

	size = (size * size) - 1;
	for (i = 0; i <= size2; i = i +(size - 1))
	{
		sumDiag1 = sumDiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiag2 = sumDiag2 + a[i];
	}
	printf("%d, %d\n", sumDiag1, sumDiag2);
}
