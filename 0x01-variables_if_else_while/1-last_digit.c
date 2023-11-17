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
	n = n % 10;
	if (m > 5)
		printf("Last digit of 98 is 8 and is greater than 5", n, m);
	else if (m !  == 0)
		printf("Last digit of 980 is 0 and is 0", n, m);
	 if(m < 6 && m ! = 0)
		printf("Last digit of -98 is -8 and is less than 6 and not 0", n, m);

	printf("\n");

	return (0);
}
