#include "main.h"
/**
 *print_square - Entry point
 *@size: Integer argument
 *
 *Return: Void
 */

void print_square(int size)
int i;
int j;
for (i = 0; i < size; i++)
{
for (j = 0; j <= size; j++)
{
if (j == size)
_putchar('\n');
else
_putchar('#');
}
}
if (size <= 0)
_putchar('\n');
}
