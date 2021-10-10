#include "hash_tables.h"
/**
  * hash_table_get - get
  * @ht: trable
  * @key: char
  * Return: The value associated with the element
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *elemt = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	elemt = ht->array[idx];

	if (elemt == NULL)
		return (NULL);

	while (strcmp(key, elemt->key) != 0)
		elemt = elemt->next;

	return (elemt->value);
}
