#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
char *_memset(char *dest, char c);
char *_memcpy(char *dest, char b, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strpbk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
