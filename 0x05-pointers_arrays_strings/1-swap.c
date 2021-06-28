#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swap two integers
 *
 *Return 
 */

void swap_int(int *a, int *b)
{
  int local;

  local = *a;
  *a = *b;
  *b = local;
}
