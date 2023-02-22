#include <unistd.h>
#include "main.h"
/**
 *main  _putchar writes _putchar
 *to the stdout
 * Return: On success 0.
 * defines the _putchar function
 */

int main (void)
{

char str[] = {'_','p','u','t','c','h','a','r','\0'};
for (int i = 0; i <=7; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);

}
