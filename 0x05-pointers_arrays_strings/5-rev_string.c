#include "main.h"

/**
 * rev_string - Entry point
 * @s: Takes a pointer to a string as argument
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char tmp;

	while (s[count] != '\0')
		count++;

	count--;
	while (rev < count)
	{
		tmp = s[rev];
		s[rev] = s[count];
		s[count] = tmp;
		rev++;
		count--;
	}
}
