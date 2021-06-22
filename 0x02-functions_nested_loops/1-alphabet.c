#include "holberton.h"
/**
 *print_alphabet - Print Alphabet
 *
 *Return: (void)
 */
void print_alphabet(void)
{
char  sh = 'a';
while (sh <= 'z')
{
putchar(sh);
sh++;
}
putchar('\n');
}
