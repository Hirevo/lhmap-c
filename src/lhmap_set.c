/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_set
*/

#include "hmap.h"

bool lhmap_set(hmap_t *this, void *key, void *value)
{
	ssize_t idx;
	bool ret = true;

	if (this == 0)
		return (0);
	idx = lvec_index_of(this->key_table, key);
	if (idx == -1) {
		ret = ret && lvec_push_back(this->key_table, 1, key);
		ret = ret && lvec_push_back(this->value_table, 1, value);
		this->size += ret;
		return (ret);
	}
	return (lvec_set(this->value_table, idx, value));
}
