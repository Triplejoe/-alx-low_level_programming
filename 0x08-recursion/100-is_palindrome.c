#include "main.h"
/**
* _strlen_recursion - Prints the length of a string
* @s: the string to be printed
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

