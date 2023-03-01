#include "main.h"

/**
 * reset_to_98 - Entry point
 * @str: Takes a pointer to a char as argument
 *
 * Return: Void
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
