#include "main.h"
/**
*main- print putchar
*
*Return: zero
*/
int main(void)
{
char put_char[8]="_putchar";
for (int i = 0; i < 8; i++)
{
_putchar(put_char[i]);
}
_putchar('\n');
return (0);
}
