#include "main.h"

/**
 * _memcpy - function copies @n bytesfrom memory area @src
 * to memory @dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
