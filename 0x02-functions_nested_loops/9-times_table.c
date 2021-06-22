#include "holberton.h"

/**
 *times_table - prints the times table
 *
 *Return: (void)
 */
void times_table(void)
{
int x, y, product;

for (y = 0; y < 10; x++)
{
for (x = 0; x < 10; x++)
{
if (x == 0)
{
_putchar(48);
continue;
}
product = y * x;
_putchar(',');
_putchar(' ');
if (product >= 10)
{
_putchar(product / 10 + 48);
_putchar(product % 10 + 48);
}
else
{
_putchar(' ');
_putchar(product + 48);
}
}
_putchar('\n');
}
}
