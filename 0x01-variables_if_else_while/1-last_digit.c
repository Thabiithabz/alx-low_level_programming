#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is a function
 * Return: number generated
 */

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

	if (10 > 5)
	{
		printf("Last digit of %d is int and is greater than 5\n", n % 10);
	}
	else if
		(m < 6 && m != 0)
	{
		printf("Last digit of %d is int and is less than 6\n and not n", n % 10);
	}
	else
	{
		printf("Last digit of %d is int and is 0\n", n % 10);
	}
	return (0);
}
