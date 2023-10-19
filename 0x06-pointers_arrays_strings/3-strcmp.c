#include "main.h"

/**
 * _strcmp - Comparespointers of two strings
 * @s1: a pointer of the first string to be compared
 * @s2: a pointer of the second string to be compared
 * Return: if str1 < str2 the negative difference first umatched character
 * if str1 == str2, 0.
 * if str1 > str2 the positive difference of first umatched characters
 */
int _strcmpy(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
