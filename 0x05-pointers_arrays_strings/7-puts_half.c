#include "main.h"

/**
 * puts_half - Entry point
 * @str: a pointer to a string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;

	for (i ; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
