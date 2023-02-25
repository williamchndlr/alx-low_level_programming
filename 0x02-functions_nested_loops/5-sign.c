#include "main.h"
/**
 *print_sign - Entry point
 *@n: Integer argument
 *
 *Return: 1 if n > 0, 0 of n == 0 and -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
