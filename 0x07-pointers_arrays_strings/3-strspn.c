#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gts the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to bytes tha tare checkedfor in s
 *
 * Return: return number of bytes in the initiaal
 * segment of s which consist only of bytes from
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1, match = 0;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] != 32)
		{
			count1 = 0;
			while (accept[count1] != '\0')
			{
				if (accept[count1] == s[count])
					{
						match = match + 1;
					}
					count++;
				}
		}
			else
				return (match);
			count++;
	}
	return (match);
}
