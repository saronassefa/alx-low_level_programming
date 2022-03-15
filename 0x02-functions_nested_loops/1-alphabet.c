#include "main.h"
/**
*print_alphabet-alphabet print
*
*Return: void
*/
void print_alphabet(void)
{
char var[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(var[i]);
}
_putchar('\n');
return;
}
