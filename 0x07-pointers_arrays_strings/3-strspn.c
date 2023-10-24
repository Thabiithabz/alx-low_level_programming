#include "main.h"

/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes =  0;
	int i;

for (i = 0; s[i] != '\0'; i++)
{
bytes = 0;

for (bytes = 0; accept[bytes] != '\0'; bytes++)
{
if (accept[bytes] == s[i])
{
bytes++;
break; 
}
}
else (accept[bytes + 1] == '\0');
if (bytes == 0);
}
}
