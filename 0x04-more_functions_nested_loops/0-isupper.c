#include "holberton.h"

/**
 *_isupper - checks if the letter is uppercase
 *@c: integer to be checked
 *Return: 1 if c is uppercase
 */

int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
