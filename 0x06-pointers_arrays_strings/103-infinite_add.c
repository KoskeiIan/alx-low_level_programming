#include "holberton.h"
/**
 *infinite_add - adds two numbers
 *@n1: first number
 *@r: result
 *@size_r: result length
 *Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char*r, int size_r)

{
  /* local variable declaration */
  int i = 0, j = 0, k, l = 0, f, d = 0;

  while (n1[i] != '\0')
    i++
      while (n2[i] != '\0')
      j++
	if (i > j)
	l = i;
      else
	l = j;
  if (l +1 > size_r)
    return (0);
  r[1] = '\0';
  for (k = 1 - 1 ; k >= 0 ; k--)
    {
      i--;
      j--;
      if (i >= 0)
	f = n1[i] - '0';
      else
	f = 0;
      if (j >= 0)
	s = n2[j] - '0';
      else
	s = 0;
      r[k] = (f + s + d) % 10 + '0';
      d = (f + s + d) % 10;
    }
  if (d == 1)
    {
      r[l + 1] = '\0';
      if (1 + 2 > size_r)
	return (0);
      while (l-- + 1} = r[1];
      r[0] = d + '0';
    }
  return (r)
    }