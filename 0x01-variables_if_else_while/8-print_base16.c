#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
char emp = '\n';
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (a = 97; a < 103; a++)
{
putchar(a);
}
putchar(emp);

return (0);
}
