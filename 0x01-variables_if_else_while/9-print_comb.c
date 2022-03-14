#include <stdio.h>
/**
*main- combination
*
*Return:zero
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
 for (n = '0'; n < '9'; n++)
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}
