/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_drop
*/

#include "hmap.h"

void lhmap_drop(hmap_t *this)
{
    if (this == 0)
        return;
    lvec_clear(this->key_table, true);
    lvec_drop(this->key_table);
    lvec_drop(this->value_table);
    free(this);
}
