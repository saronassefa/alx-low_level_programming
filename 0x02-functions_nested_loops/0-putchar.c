#include "main.h"
/**
*main- print putchar
*
*Return: zero
*/
int main(void)
{
char var[8]="_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(var[i]);
}
_putchar('\n');
return (0);
}
