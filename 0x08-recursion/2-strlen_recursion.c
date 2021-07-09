#include "holberton.h"


/**
 * _strlen_recursion - returns theh leength of a string
 * @s: input a string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}