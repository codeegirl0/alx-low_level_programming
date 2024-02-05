#include "search_algos.h"

/**
  * advanced_binary_recursive - binary search.
  * @array: first element 
  * @left:  start index 
  * @right:  end index 
  * @value:  value
  *
  * Return: the -1.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;
	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - do advanced binary search.
  * @array: first element 
  * @size: elements num
  * @value: search 
  * Return:  NULL, or -1.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
