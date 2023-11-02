#include "hash_tables.h"

/**
 * key_index - Get key/value pair index where should
 *             be stored in array hash table.
 * @key: The key of the index .
 * @size: The size array of  hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
