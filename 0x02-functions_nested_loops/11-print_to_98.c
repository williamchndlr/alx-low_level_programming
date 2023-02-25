#include "main.h"
/**
 *print_to_98 - Entry point
 *@a: Integer argument
 *
 *Return: void
*/
void print_to_98(int n)
{
  if (n < 98)
    {
      while (n <= 98)
        {
          printf("%d", n);
          printf(", ");
          n++;
	}
    }
  else if (n > 98)
    {
      while (n >= 98)
	{
	  printf("%d", n);
          printf(", ");
	  n--;
	}
    }	  
  printf("\n");  
}
