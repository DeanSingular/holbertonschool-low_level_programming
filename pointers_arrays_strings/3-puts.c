#include "main.h"
/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: the string that need to print
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
