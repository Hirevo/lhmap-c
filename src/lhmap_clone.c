/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_clone
*/

#include "hmap.h"

hmap_t *lhmap_clone(hmap_t *orig)
{
    hmap_t *this = calloc(1, sizeof(hmap_t));

    if (this == 0)
        return (0);
    this->key_table = lvec_clone(orig->key_table);
    this->value_table = lvec_clone(orig->value_table);
    if (this->key_table == 0 || this->value_table == 0) {
        lvec_drop(this->key_table);
        lvec_drop(this->value_table);
        free(this);
        return (0);
    }
    this->size = orig->size;
    return (this);
}
