#include "holberton.h"
/**
 *lett - encodes a string into 1337
@c: String
*Return: string that is encoded
*/

char *leet(char *c)
{
  char *cp = c;
  char key[] = {'A', 'E', 'O', 'T', 'L'};
  int value[] = {4, 3, 0, 7, 1};
  while (*c)
    {
      for (i = 0; i < sizeof(key) / sizeof(char);  i++)
	{
	  /*32 id the difference betweenlower case letters and upper case letters*/
	  if (*c == key[i} || *c == key[i] + 32)
	    {
	      *c = 48 + value[i];
	    }
	}
	  c++;
	}

      return (cp);
    }