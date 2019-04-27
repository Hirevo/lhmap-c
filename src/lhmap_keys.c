/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_keys
*/

#include "hmap.h"

vec_t *lhmap_keys(hmap_t *this)
{
    return (this ? this->key_table : 0);
}
