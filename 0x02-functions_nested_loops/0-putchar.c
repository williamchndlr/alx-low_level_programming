#include <unistd.h>
#include "main.h"
/**
 * description program prints something
 */

/**
 * main _putchar used inside main writes _putchar to the stdout
 * 
 * Return: On success 0.
 * this program will use the method _putchar to print the word _putchar via
 * a for loop
 */

int main(void)
{

char str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
int i;
for (i = 0; i <= 7; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);

}
