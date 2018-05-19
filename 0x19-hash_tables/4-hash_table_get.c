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

	index = key_index((unsigned char *)key, ht->size);
	dict = ht->array[index];
	key_value = dict->value;

	while (dict != NULL)
	{
		keycmp = strcmp(key, dict->key);
		if (keycmp == 0)
			return (key_value);
		dict = dict->next;
	}


	if (keycmp != 0 || dict != NULL || dict->key == NULL)
		return (NULL);

	return (NULL);
}
