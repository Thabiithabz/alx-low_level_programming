#include <stdlib.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - this is the function of the task
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{

	char i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	for (i = "a"; i <= "z"; i++)
		putchar(i);
	putchar ("\n");
	return (0);
}
