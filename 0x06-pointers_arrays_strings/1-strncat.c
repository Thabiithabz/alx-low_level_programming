#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * an inputed number of bytes for src
 * @dest: the string to be appended upon.
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int  j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
