#include "search_algos.h"

/**
  * binary_search_recursive - search in sorted array
  * @array: first element 
  * @left: index of array
  * @right: end index.
  * @value: value
  *
  * Return: returning -1 or index of value
  */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;
	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}

/**
  * binary_search - serach in sorted array
  * @array: first element 
  * @size: elements num
  * @value: value
  *
  * Return: NULL,  or-1 
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
