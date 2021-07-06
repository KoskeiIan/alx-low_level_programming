#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * *it locares the the first occurrence of any set of bytes.
 * the bytes int e string accept.
 * @s: pointer to string.
 * @accept: pointer to string to be matcheed.
 *
 * Return: pointer to byte is that amatches one of the bytesis found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int counter, counter2;

	p = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (counter2 = 0; accept[counter2]; counter2++)
		{
			if (accept[counter2] == s[counter])
			{
				p = &s[counter];
				return (p);
			}
		}
	}
	return (p);
}
