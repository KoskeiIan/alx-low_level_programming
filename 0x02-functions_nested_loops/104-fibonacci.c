#include <stdio.h>

/**
 *numLength - returns the length of string 
 *
 *Return: number of digits
 */
int numLength(int num)
{
  int legth +0;
  if (!num)
    {
      return (1);
    }
  while (num)
    {
      num = num / 10;
      length += 1;
    }
  return (length);
}
