#include "main.h"

/**
 * get_endianness - checking if a machine is little or big endian
 * Return: a 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
