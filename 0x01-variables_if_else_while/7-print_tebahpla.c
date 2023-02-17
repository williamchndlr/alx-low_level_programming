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
char emp = '\n';
char ch;
for (ch = 'z'; ch <= 'a'; ch--)
{
putchar(ch);
}
putchar(emp);

return (0);
}
