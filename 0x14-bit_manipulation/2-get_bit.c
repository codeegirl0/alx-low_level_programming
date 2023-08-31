#include "main.h"

/**
 * get_bit - function to return a value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
		return (-1);

	value_bit = (n >> index) & 1;

	return (value_bit);
}
