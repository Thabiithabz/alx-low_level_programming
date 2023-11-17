#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Function of the task
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	for (i = "a"; i <= "z"; i++)
		putchar(i);

	for (i = "A"; i <= "Z"; i++)
		putchar (i);
	putchar("\n");
	return (0);
