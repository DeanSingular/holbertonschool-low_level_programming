#include "main.h"
/**
 * *_strcpy - copy the string pointed to by src
 * @src: the string need to copy
 * @dest: the buff pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
des[i] = src[i];
}
dest[i++] = src[i];
return (dest);
}
