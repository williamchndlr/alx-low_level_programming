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
char  emp = '\n';
int ch;
for (ch = 122; ch >= 97; ch--)
{
putchar(ch);
}
putchar(emp);

return (0);
}
