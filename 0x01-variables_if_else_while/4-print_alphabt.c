#include <stdio.h>
/**
*main- exceptions
*
*Return: zero)
*/
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n != 'q' && n != 'e')
{
putchar(n);
}
}
putchar('\n');
}
