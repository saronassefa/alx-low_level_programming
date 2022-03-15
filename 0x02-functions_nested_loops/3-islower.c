#include "main.h"
/**
*_islower-checks lower case
*
*Return: 1 & 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (0);
}
return (0);
}
