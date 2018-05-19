#include "hash_tables.h"

/**
 * hash_table_set - Adds element to hash table
 * @ht: Pointer to hash table struct
 * @key: Key represented by string
 * @value: string value that is associated with key and duplicated
 * Return: 1 (success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *new;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);

	if (ht->size == 0 || *key == '\0')
		return (0);

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	new = ht->array[index];
	index = key_index((unsigned char *)key, ht->size);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);

	while (new != NULL)
	{
		if (strcmp(key, new->key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
