#include "main.h"

/**
 * binary_to_uint - function to convert a binary number to unsigned int
 * @b: the string contain a binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value_dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value_dec = 2 * value_dec + (b[i] - '0');
	}

	return (value_dec);
}
