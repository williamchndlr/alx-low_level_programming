#include "main.h"
/**
 * _strcat - entry point
 * @dest - takes a char
 * @src - takes a char
 * Return: a pointer value.
 */
char *_strcat(char *dest, char *src)
{
int d = 0, int s = 0;
while (dest[d] != "\0")
{
d++;
}
while (src[s] != "\0")
{
dest[d] = src[s];
s++;
}
dest[s] = "\0";
  
return (&dest);
}
