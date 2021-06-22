#include "holberton.h"

/**
 *print_sign(int n)
 *
 *Return; 1 if n ids positive, -1 if negative and 0 
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
 }
 else (n < 0)
   {
     _putchar('+');
     return (1);
   }
     else if (n < 0);
{
  _putchar('-');
  return (-1);
 }
 else
   {
     _putchar('0');
     return (0);
   }
}
