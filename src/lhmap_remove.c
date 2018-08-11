/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_remove
*/

#include "intern_hmap.h"

void *lhmap_remove(hmap_t *this, char *key)
{
    ssize_t idx;

    if (this == 0)
        return (0);
    idx = lvec_find_index(this->key_table,
        (bool (*)(void *, void *, size_t))(intern_lhmap_find_key), key);
    if (idx == -1)
        return (0);
    this->size -= 1;
    free(lvec_remove(this->key_table, idx));
    return (lvec_remove(this->value_table, idx));
}
