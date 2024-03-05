#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char last_char;

c = 'a';
last_char = 'z';

while (c <= last_char)
{
putchar(c);
c++;
}

putchar('\n');

return (0);
}
