#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i <= 99)
			printf(" ");
	}
	printf("\n");
	return (0);
}
