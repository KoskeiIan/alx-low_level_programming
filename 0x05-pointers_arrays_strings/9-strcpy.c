#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - copy string at the end of another string including \0 
 *@dest: string
 *@src: string
 *
 *Return: print dest + src
 */char *_strcpy(char *dest, char *src)
{
int j;

for (j = 0; src[j]; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';

return (dest);
}
