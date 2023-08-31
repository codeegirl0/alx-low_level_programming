#include "main.h"

/**
 * flip_bits - to count a number of bits to 
 * change to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}
