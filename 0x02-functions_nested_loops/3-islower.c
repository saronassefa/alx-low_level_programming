
#include "main.h"
/**
*int _islower-checks lower case
*
*Return: 1 & 0
*/
int _islower(int c)
{
int c;
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
