#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 * @key: key represented as a string
 * @size: size of the array of hash table
 * Return: final_index (index of the key)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, final_index;

	index = hash_djb2(key);
	final_index = index % size;

	return (final_index);
}
