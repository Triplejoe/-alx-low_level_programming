#ifndef MAIN_H                                              
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char **strtow(char *str)
char *argstostr(int ac, char **av);
#endif
