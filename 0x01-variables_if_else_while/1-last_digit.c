#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastnum = strlen(n - 1);

if (n[lastnum] > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n[lastnum]);
}
else if (n[lastnum] == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n[lastnum]);
}
else if (n[lastnum < 6 && n[lastnum] > 0)
{
printf("Last digit of %d is %d and is less than  and not 0\n", n, n[lastnum]);
}
return (0);
}
