#include "main.h"

/**
 * print_rev - Entry point
 * @s: Takes a pointer to a stringof char as argument
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
