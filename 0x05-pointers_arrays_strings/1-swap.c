#include "main.h"

/**
 * swap_int - Entry point
 * @a: Takes a pointer to an int as argument
 * @b: Takes a pointer to an int as argument
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
