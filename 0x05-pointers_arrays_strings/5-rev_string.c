#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s; string
 *return: string
 */
void rev_string(char *s)
{
int length = 0, i;
char tmp;

for (i = 0; s[i]; i++)
{
length++
}
for (i = 0; i < length / 2; i++)
{
tmp = s[length -1 -i];
s[length - 1 - i] = s[i];
s[i] = tmp;
}
}
  
