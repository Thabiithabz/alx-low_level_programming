#include "main.h"

/**
 * _strcmp - Compares pointers of two strings
 * @s1: a pointer of the first string to be compared
 * @s2: a pointer of the second string to be compared
 * Return: 1 if true , 0 if false
 */
int *_strcmpy(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (s1 != s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
