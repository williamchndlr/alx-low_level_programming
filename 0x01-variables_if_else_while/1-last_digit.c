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
int n, b, c = 0;
int numar[1];
srand(time(0));
n = rand() - RAND_MAX / 2;
b = n;
while (n != 0)
{
numar[c] = n % 10;
n /= 10;
c++;
}
if (numar[0] > 0 && numar[0] > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", b, numar[0]);
}
else if (numar[0] == 0)
{
printf("Last digit of %d is %d and is 0\n", b, numar[0]);
}
else if (numar[0] < 6 && numar[0] != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", b, numar[0]);
}
return (0);
}
