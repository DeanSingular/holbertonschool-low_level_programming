#include <stdio.h>

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
