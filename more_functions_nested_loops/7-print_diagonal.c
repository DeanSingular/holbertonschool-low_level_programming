#include "main.h"
#include <unistd.h>

/**
* print_diagonal - Draws a diagonal lines according parameter
* @n: The number of times to print diagonal times
* Return: empty
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int u, t;

for (u = 0; u; u++)
{
for (t = 0; t < n; t++)
{
if (t == u)
_putchar('\\');
else if (t < u)
_putcha(' ');
}
_putchar('\n');
}
}
}
