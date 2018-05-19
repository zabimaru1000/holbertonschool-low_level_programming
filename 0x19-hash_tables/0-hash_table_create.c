#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *make_ht = NULL;

	if (size < 1)
		return (NULL);

	make_ht = malloc(sizeof(hash_table_t));
	if (make_ht == NULL)
		return (NULL);

	make_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (make_ht->array == NULL)
		return NULL;

	while (i < size)
	{
		make_ht->array[i] = NULL;
		i++;
	}

	make_ht->size = size;
	return (make_ht);
}
