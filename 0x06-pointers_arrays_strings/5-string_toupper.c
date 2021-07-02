#include "holberton.h"

/**
 *string_toupper - changes all the lowercase letters of a string to uppercase
 *@s: string
 *Return: capitalised string
 */
char *string_toupper(char *s)
{
char *ptr = s;

while (*s)
{
if (*s >= 97 && *s <= 122)
{
*s -= 32;
}
s++;
}
return (ptr);
}
