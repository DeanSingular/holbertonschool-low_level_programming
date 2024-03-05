#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase, 
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
char uppercase;

lowercase = 'a';
uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}
