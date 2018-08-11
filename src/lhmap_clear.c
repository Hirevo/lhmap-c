/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_clear
*/

#include "hmap.h"

void lhmap_clear(hmap_t *this, bool free_payloads)
{
	if (this == 0)
		return;
	lvec_clear(this->key_table, free_payloads);
	lvec_clear(this->value_table, free_payloads);
	this->size = 0;
}
