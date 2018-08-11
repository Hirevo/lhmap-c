/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_get
*/

#include "intern_hmap.h"

void *lhmap_get(hmap_t *this, char *key)
{
    ssize_t idx;

    if (this == 0)
        return (0);
    idx = lvec_find_index(this->key_table,
        (bool (*)(void *, void *, size_t))(intern_lhmap_find_key), key);
    return ((idx != -1) ? lvec_at(this->value_table, idx) : 0);
}
