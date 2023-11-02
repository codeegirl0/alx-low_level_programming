#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated of
 *                  a key in thz hash table.
 * @ht: A pointer of hash table.
 * @key: The key to take value of.
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated of key in.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
