#include <uninstd.h>

/**
 *_putchar - writes the character c to stdout
 *@c:The character to print
 *
 *Return: On success returns 1 if not, -1 is returned
 */
int _putchar(cahr c)
{
  return (write(1, &c, 1));
}
