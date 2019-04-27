/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_clear
*/

#include "hmap.h"

void lhmap_clear(hmap_t *this, bool free_values)
{
    if (this == 0)
        return;
    lvec_clear(this->key_table, true);
    lvec_clear(this->value_table, free_values);
    this->size = 0;
}
