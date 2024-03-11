#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
