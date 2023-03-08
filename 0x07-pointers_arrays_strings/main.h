#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

unsigned int _strspn(char *s, char *accept);

void print_chessboard(char (*a)[8]);

int _putchar(char c);

#endif
