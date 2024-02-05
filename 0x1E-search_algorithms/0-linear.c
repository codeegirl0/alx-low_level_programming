#include "search_algos.h"

/**
  * linear_search - searching in an array a value
  * @array: First element pointer
  * @size: elements num
  * @value: value
  *
  * Return:  NULL, -1.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
