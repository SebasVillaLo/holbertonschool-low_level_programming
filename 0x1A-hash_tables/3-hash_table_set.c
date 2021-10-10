#include "hash_tables.h"

/**
  * hash_table_set - Add element
  * @ht: hash table
  * @key: char
  * @value: value
  * Return: 1
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *elemt = NULL, *newnode = NULL;

	if (ht == NULL || key == NULL || value == NULL || (strlen(key) == 0))
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	elemt = ht->array[idx];

	if (elemt && strcmp(key, elemt->key) == 0)
	{
		free(elemt->value);
		elemt->value = strdup(value);
		return (1);
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;
	return (1);
}
