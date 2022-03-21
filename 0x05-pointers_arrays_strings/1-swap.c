#include "main.h"
/**
*swap_int-swap
*@a:int
*@b:int
*Return:0
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = *a;
*b = t;
}
