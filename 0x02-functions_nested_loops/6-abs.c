#include "main.h"
/**
*int_abs- absoulute value
*
*Return: int
*/
int _abs( )
{
int n;
if (n < 1)
{
n = -1 * n;
return (n);
}
else if (n > 1)
{
return (n);
}
return (0);
}
