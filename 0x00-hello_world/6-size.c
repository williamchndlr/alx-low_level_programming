#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of an Int: %2d bytes \n", sizeof(short int));
printf("Size of a Long Int: %2d bytes \n", sizeof(long int));
printf("Size of a Float: %2d bytes \n", sizeof(float));
printf("Size of a Long Double: %2d bytes \n", sizeof(long double));
printf("Size of a Char: %2d bytes \n", sizeof(char));
return (0);
}
