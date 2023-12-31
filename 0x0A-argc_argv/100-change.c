#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: the number of argument supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: the the number of arguments is not exactly one -1 otherwise -0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if(argc != 2)
	{
		printf("error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 10;
			continue;
		}
		if (( cents - 5) >= 0)
		{
			cents -= 5)
