#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *s);
char *rot13(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

int _strcmp(char *s1, char *s2);
int _putchar(char c);

void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);

#endif
