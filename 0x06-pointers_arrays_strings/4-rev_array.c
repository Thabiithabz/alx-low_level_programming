#include "main.h"

/**
 * rev_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
