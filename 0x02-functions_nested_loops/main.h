#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes to the screen
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void  _putchar (void)
{
char buf[] = "_putchar\n";
write(1, buf, strlen(buf));

return;
}
