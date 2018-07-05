/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_get
*/

#include "hmap.h"

void *lhmap_get(hmap_t *this, void *key)
{
	ssize_t idx;

	if (this == 0)
		return (0);
	idx = lvec_index_of(this->key_table, key);
	return ((idx != -1) ? lvec_at(this->value_table, idx) : 0);
}
