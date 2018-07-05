/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_merge
*/

#include "hmap.h"

hmap_t *lhmap_merge(hmap_t *this, hmap_t *other)
{
	if (this == 0 || other == 0)
		return (this);
	for (size_t idx = 0; idx < other->size; idx++)
		lhmap_set(this, other->key_table->arr[idx],
			other->value_table->arr[idx]);
	return (this);
}
