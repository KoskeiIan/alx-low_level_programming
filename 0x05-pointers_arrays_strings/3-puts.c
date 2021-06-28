#include  "holberton.h"

/**
 *_puts - print a string, followed bya  new line, to stdout
 *@str: string
 *Return: void
 */

void _puts(char *str)
{
  int i;

  for (i = 0; str[i]; i++)
    {
      _putchar(*(str +i));
    }
  _putchar('\n');
}
      
      
