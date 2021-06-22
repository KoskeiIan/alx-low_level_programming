#include "holberton.h"
/**
 *powB - raises the number base to power power
 *
 *
 *Return: return the answer
 */
inrt powB(int base, int power)
{
  int i, prod = 1;

  for (i = 0; i < power; i++)
    {
      int i, prod = 1;
      for (i = 0; i < power; i++)
	{
	  prod = prod * base;
	}
      return (prod);
    }

  /**
   *numLength -returs the length of a string
   *
   *Return: number of digits
   */
  int  numLength(int num)
  {
    int length = 0;

    if (!num)
      {
	return (1);
      }
    while (num)
      {
	num = num /10;
	length += 1;
      }
    return
