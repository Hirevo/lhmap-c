/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_shrink_to_fit
*/

#include "hmap.h"

void lhmap_shrink_to_fit(hmap_t *this)
{
	if (this == 0)
		return;
	lvec_shrink_to_fit(this->key_table);
	lvec_shrink_to_fit(this->value_table);
}
