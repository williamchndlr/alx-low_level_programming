#include "main.h"

/**
 * rev_string - Entry point
 * @s: Takes a pointer to a string as argument
 *
 * Return: Void
 */

void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
int c = 0;
char rev[i];
while (s[c] != '\0')
{
rev[i] = s[c];
i--;
c++;
}
}
