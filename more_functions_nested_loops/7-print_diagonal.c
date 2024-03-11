#include "main.h"

/**
* print_diagonal - Draws a diagonal lines according parameter
* @n: The number of times to print diagonal times
* Return: empty
*/
void print_diagonal(int n)
{
int i;
int m = 0;
if (n > 0)
{
while (m != n)
{
for (i = 0; i < m; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
m++;
}
}
else
_putchar('\n');
}
