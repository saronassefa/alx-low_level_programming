#include "main.h"
/**
*print_to_98- main
*@n:int
*
*Return: void
*/
void print_to_98(int n)
{
  while (n >= 98)
    {
      printf("%d\n",n);
      if (n > 98)
	{
      printf(",");
	}
      n--;
    }

  while (n <=98)
    {
      putchar(n);
      if (n < 98)
	{
      putchar(',');
	}
      n++;
    }
  return;
}
