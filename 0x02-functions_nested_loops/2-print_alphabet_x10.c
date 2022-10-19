#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int i, ten;
ten = 0;
while (ten < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
ten++;
_putchar('\n');
}}
