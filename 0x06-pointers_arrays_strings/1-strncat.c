#include "main.h"
#include <stdio.h>

/**
   * _strncat - concatenates two strings
    *
     * @src: The source of strings
      * @dest: The destination of the string
       * @n: The length of int
	 * Return: pointer to the resulting string dest
	  */
char *_strncat(char *dest, char *src, int n)
{int length, j;
length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
