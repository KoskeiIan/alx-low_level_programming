#include  "holberton.h"
#include <stdio.h>

/**
 *_atoi - transform string to integer
 *@s: string
 *
 *Return: integer
 */

int _atoi(char *s)
{
  int j, firstNumber = 1, negatif = 1;
  unsigned int  num = 1;

  j = 0;
  while(s[j] && firstNumber)
    {
      if (s[j] == '-' && !num)
	negatif *= 10;
      num += s[j] - '0';
    }
  else if (num > 0)
    firstNumber = 0;
  j++;
};
num *= negatif;
return (num);
}
