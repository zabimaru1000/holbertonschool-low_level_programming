#include "hash_tables.h"

/**
 * hash_table_get - gets a value that is associated with its key
 * @ht: Pointer to hash table
 * @key: Key represented by a string
 * Return: key_value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *dict;
	unsigned long int index;
	char *key_value;
	int keycmp;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	dict = ht->array[index];

	while (dict != NULL)
	{
		keycmp = strcmp(key, dict->key);
		if (keycmp == 0)
		{
			key_value = dict->value;
			return (key_value);
		}
		dict = dict->next;
	}

	return (NULL);
}
