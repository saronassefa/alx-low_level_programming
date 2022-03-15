#include "main.h"
/**
*print_last_digit- prints last dig
*@n: new
*
*Return: int
*/
int print_last_digit(int n)
{
  int first = n % 10;
  int fix = first * 10;
  int last = fix + first;
  if (last < 0)
{
last = last * -1;
return (last);
}
return (last);
}
