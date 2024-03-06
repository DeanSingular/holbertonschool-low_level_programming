#include <stdio.h>

/**
 * main - Entrey point
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
putchar('\n');
return (0);
}
