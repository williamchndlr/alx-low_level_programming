#include "main.h"

/**
 * print_rev - Entry point
 * @s: Takes a pointer to a stringof char as argument
 *
 * Return: Void
 */

void print_rev(char *s)
{
int i = (_strlen(s) - 1);
while (i >= 0)
{
_putchar(str[i]);
}
_putchar('\n');
  
}
