#include <unistd.h>
#include "main.h"
/**
 *main  _putchar writes _putchar
 *to the stdout
 * Return: On success 0.
 * defines the _putchar function
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

int main (void)
{
_putchar("_putchar");

return (0);

}
