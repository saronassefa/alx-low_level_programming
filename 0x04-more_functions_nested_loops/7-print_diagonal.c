#include "main.h"
/**
*print_diagonal-diag
*@n: int
*
*Return: void
*/
void print_diagonal(int n)
{
int i = 0;
while (i < n)
{
if (n > 0)
{
_putchar(92);
_putchar('\n');
i++;
}
else
{
_putchar('\n');
}
}
return (0);
}
