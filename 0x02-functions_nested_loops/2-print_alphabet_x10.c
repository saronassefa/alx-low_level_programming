#include "main.h"
/**
*print_alphabet_x10-ten times alphabet
*
*Return: void
*/
void print_alphabet_x10(void)
{
char var[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 10; i++)
{ int j;
for ( j = 0; j < 26; J++)
{
_putchar(var[j]);
}
_putchar('\n');
}
return;
}
