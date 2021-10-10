#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: char
 * @size: int
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == 0 || size == 0)
		return (0);
	idx = hash_djb2(key) % size;
	return (idx);
}
