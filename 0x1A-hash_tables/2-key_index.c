#include "hash_tables.h"

/**
 * key_index - Get index at which value pair should be stored
 *		in an array of hash table.
 * @key: key to get index .
 * @size: size of array of hash table.
 *
 * Return: index of key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
