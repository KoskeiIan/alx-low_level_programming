#include "holberton.h"
#include <stdio.h>
/**
 *isLower - determines whether ascii id lowercase
 *@c: character
 *Return: 1 if true, 0 if false
 */

int isLower(char c)
{
return (c >= 97 && c <= 122);
}

/**
*isDelimiter - determines whether ascii is a delimiter
*@c: character
*Return: 1 if true, 0 if false
*/
int isDelimiter(cahr c)
{
int i;
char delimiter[] = " \t\n,.!?\'(){}";

for (i = 0; i < 12; i++)
if (c == delimiter[i])
return (i);
return (0);
}


/**
* cap_string - capitalises all wordsof a string
*@s: input string
*Return: string with capitalized words
*/
char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;
s++;
}
return (ptr);
}
