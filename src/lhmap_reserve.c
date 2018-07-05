/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_reserve
*/

#include "hmap.h"

bool lhmap_reserve(hmap_t *this, size_t capacity)
{
	bool ret = true;

	ret |= ret && (this != 0);
	ret |= ret && lvec_reserve(this->key_table, capacity);
	ret |= ret && lvec_reserve(this->value_table, capacity);
	return (ret);
}
