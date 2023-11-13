#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "redescribed", "urites");
	hash_table_set(ht, "dram", "vivency");

	/* Print the hash table for verification */
	hash_table_print(ht);

	/* Cleanup: Free memory used by the hash table */
	hash_table_delete(ht);

	return (EXIT_SUCCESS);
}
