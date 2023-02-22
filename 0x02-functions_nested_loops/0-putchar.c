#include <unistd.h>
#include "main.h"

/**
 * main Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
int i;
for (i = 0; i <= 7; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);

}
