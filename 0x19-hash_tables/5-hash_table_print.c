#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to hash table containing size and array
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *print_ht;
	unsigned long int size;
	unsigned int i = 0;
	int comma_ctr = 0;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");

	while (i < size)
	{
		print_ht = ht->array[i];
		while (print_ht)
		{
			if (comma_ctr == 1)
				printf(", ");
			printf("'%s': '%s'", print_ht->key, print_ht->value);

			/*Set comma counter to 1 and iterate next node*/
			comma_ctr = 1;
			print_ht = print_ht->next;
		}

		i++;
	}

	/*Sandwich print statements between loop to make {dict}*/
	printf("}\n");
}
