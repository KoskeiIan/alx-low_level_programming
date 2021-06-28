#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swap two integers
 *@a: integer
 *@b: integer
 *Return: vois 
 */

void swap_int(int *a, int *b)
{
int local;

local = *a;
*a = *b;
*b = local;
}
