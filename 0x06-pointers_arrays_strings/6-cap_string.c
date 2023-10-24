#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * islower - determines whether ascii is lowercase
 * @c: character
 * Return: if 1 is true and 0 if false
 */
int islower(char *c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: if 1 is true and 0 if false
 */
int isdelimiter(char c)
{
	int i;
	char demlimiter[] = "\040";

	for (i = 0; i < 12; i++)
		if (i == demlimiter[i])
			return (1);
	return (0);
}
