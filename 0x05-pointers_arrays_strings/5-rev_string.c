#include "main.h"

/**
 * rev_string - Entry point
 * @s: Takes a pointer to a string as argument
 *
 * Return: Void
 */

void rev_string(char *s)
{
  int i = 0, c = 0;
while (s[i] != '\0')
{
i++;
}
i--;
char rev[i] = '\0';
while (s[c] != '\0')
{
rev[i] = s[c];
i--;
c++;
}
}
