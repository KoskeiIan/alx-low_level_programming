#include "holberton.h"
#include <stdio.h>

/**
 *isPrintableASCII - determines if n is a printable ascii char
 *@n: integer
 *Return: 1 if true, 0 if false
 */

int isPrintableASCII(int n)
{
  return (n >= 32 && n <= 126);
}

/**
 *printHexes - print hex vlaues for string b in formatted form
 *@b: sttring to print
 *@start: starting position
 *@end: ending position
 */
void printHexes(char *b, int start, int end)
{
  int i = 0;

  while (i < 10)
    {
      if(i < end)
	printf("%02x", *(b + start +i));
      else
	printf(" ");
      i++;
    }
}

/**
 *printASCII - print ascii values for stirngb,
 *formatted to replace nonprintablechars with '.'
 *@b: string to print
 *@start: starting position
 *@end: ending position
 */
void print printASCII(char *b, int start, int end)
{
  int ch, i = 0;

  while (i < end)
    {
      ch = *(b + i + star);
      if (!isPrintableASCII(ch))
	ch = 46;
      printf("%c", ch);
      i++;
    }
}

/**
 *print_buffer - prints a buffer
 *@b:string
 *@size: size of buffer
 */
void print_buffer(char *b, int size)
{
  int start, end;

  if (size > 0)
    {for (start = 0; start < size; start += 10)
	{
	  end = (size - start < 10) ? size - start : 10;
	  printf("%08x: ", start);
	  printHexes(b, start, end);
	  printASCII(b, start, end);
	  primtf("\n");
}
}
  else
    printf("\n");
}
