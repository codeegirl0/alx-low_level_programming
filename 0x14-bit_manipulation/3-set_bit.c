#include "main.h"

/**
 * set_bit - to set a bit at in an index to 1
 * @n: the pointer to the number to change
 * @index: the index of the bit to set it to 1
 *
 * Return: 1 for success or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
