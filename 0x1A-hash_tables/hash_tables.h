#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (string)
 * @value: The value corresponding to the key
 * @next: A pointer to the next node in the collision resolution
 */
typedef struct hash_node_s
{
  char *key;
  char *value;
  struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table
 * @size: The size of the array
 * @array: An array of size @size containing pointers to the first node
 *         of a linked list for each index.
 */
typedef struct hash_table_s
{
  unsigned long int size;
  hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif /* HASH_TABLES_H */
