#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastnum = strlen - 1;

if (n[lastnum]>5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n[lastnum]);
}
else if(n[lastnum]==0)
{
printf("Last digit of %d is %d and is 0\n", n, n[lastnum]);
}
else if(n[lastnum<6 && n[lastnum]>0)
{
printf("Last digit of %d is %d and is less than  and not 0\n", n, n[lastnum]);
}
return (0);
}
