#include "main.h"
/**
*jack_bauer-prints minutes
*
*Return: void
*/
void jack_bauer(void)
{
  int i,j;
  for (i = 0; i < 24; i++)
    {
      if (i < 10)
	{
	  _putchar('0');
	  _putchar(i);
	}
      else if (i >= 10)
	{
	  _putchar(i);
	}
      _putchar(':');
      for (j = 0; j < 60; j++)
	{
	  if (j < 10)
	    {
	      _putchar('0');
	      _putchar(j);
	    }
	  else if (j >= 10)
	    {
	      _putchar(j);
	    }
	}
    }
  return;
}
