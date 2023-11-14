#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - a function given as a parameteron each array
 * @array: array to execute function on
 * @size: the size of array
 * @action: a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
