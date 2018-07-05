/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_with_capacity
*/

#include "hmap.h"

hmap_t *lhmap_with_capacity(size_t capacity)
{
	hmap_t *this = calloc(1, sizeof(hmap_t));

	if (this == 0)
		return (0);
	this->key_table = lvec_with_capacity(capacity);
	this->value_table = lvec_with_capacity(capacity);
	if (this->key_table == 0 || this->value_table == 0) {
		lvec_drop(this->key_table);
		lvec_drop(this->value_table);
		free(this);
		return (0);
	}
	return (this);
}
