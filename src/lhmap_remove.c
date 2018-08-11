/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_remove
*/

#include "hmap.h"

hmap_tuple_t lhmap_remove(hmap_t *this, void *key)
{
    ssize_t idx;
    hmap_tuple_t ret = {0, 0};

    if (this == 0)
        return (ret);
    idx = lvec_index_of(this->key_table, key);
    if (idx == -1)
        return (ret);
    ret.key = lvec_remove(this->key_table, idx);
    ret.value = lvec_remove(this->value_table, idx);
    return (ret);
}
