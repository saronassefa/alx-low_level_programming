#include <stdio.h>
/**
*main- hexadecimal
*
*Return:zero
*/
int main(void)
{
char n;
for (n = '1'; n <= '9'; n++)
{
putchar(n);
}
for (n='a'; n < 'g'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
