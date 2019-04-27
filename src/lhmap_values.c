/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_values
*/

#include "hmap.h"

vec_t *lhmap_values(hmap_t *this)
{
    return (this ? this->value_table : 0);
}
