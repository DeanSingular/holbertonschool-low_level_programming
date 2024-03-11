#include "main.h"
#include <unistd.h>

/**
* print_diagonal - Draws a diagonal lines according parameter
* @n: The number of times to print diagonal times
* Return: empty
*/
void print_diagonal(int n)
{
        int i;
        int j;

if (n <= 0)
{       
_putchar('\n');
return; 
}       

for (i = 1; i <= n; i++) 
{       
for (j = 1; j < i; j++) 
{       
_putchar(' ');
}       
_putchar('\\');
_putchar('\n');
}       
