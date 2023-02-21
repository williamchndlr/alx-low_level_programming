#include <unistd.h>
#include "main.h"
/**
 * _putchar writes _putchar
 *
 * Return: On success 0.
 *
 */

int main (void)
{
_putchar();
return (0);
}

int _putchar(char c)
{
return (write(1, &c, 1));
}
