#include "main.h"

/**
 * _puts - puts the string
 * @str: The string to print
 * Returns: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
