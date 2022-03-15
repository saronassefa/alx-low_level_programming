#include "main.h"
/**
*_abs- absoulute value
*@n: notation
*
*Return: int
*/
int _abs(int n)
{
if (n < 0)
{
n = -1 * n;
return (n);
}
else if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
return (0);
}
