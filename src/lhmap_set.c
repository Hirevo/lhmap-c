/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_set
*/

#include "intern_hmap.h"

bool lhmap_set(hmap_t *this, char *key, void *value)
{
    ssize_t idx;
    bool ret = true;

    if (this == 0)
        return (0);
    idx = lvec_find_index(this->key_table,
        (bool (*)(void *, void *, size_t))(intern_lhmap_find_key), key);
    if (idx == -1) {
        ret = ret && lvec_push_back(this->key_table, 1, strdup(key));
        ret = ret && lvec_push_back(this->value_table, 1, value);
        this->size += ret;
        return (ret);
    }
    return (lvec_set(this->value_table, idx, value));
}
