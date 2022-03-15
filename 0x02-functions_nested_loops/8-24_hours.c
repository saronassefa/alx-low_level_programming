#include "main.h"
/**
*jack_bauer-prints minutes
*
*Return: void
*/
void jack_bauer(void)
{
  int i,j;
  char var;
  for (i = 0; i < 24; i++)
    {
      if (i < 10)
	{

	  _putchar('0');
	  var=i + '0';
	  _putchar(var);
	}
      else if (i >= 10)
	{
	  var=i + '0';
	  _putchar(var);
	}
      _putchar(':');
      for (j = 0; j < 60; j++)
	{
	  if (j < 10)
	    {
	      _putchar('0');
	      var= j + '0';
	      _putchar(var);
	    }
	  else if (j >= 10)
	    {
	      var = j + '0';
	      _putchar(var);
	    }
	  _putchar('\n');
	}
    }
  return;
}
