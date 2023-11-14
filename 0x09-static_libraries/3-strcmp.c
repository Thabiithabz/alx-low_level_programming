#include "main.h"

/**
 * _strcmp - Compares pointers of two strings
 * @s1: a pointer of the first string to be compared
 * @s2: a pointer of the second string to be compared
 * Return: 1 if true , 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
