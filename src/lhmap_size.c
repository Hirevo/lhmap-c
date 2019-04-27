/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_size
*/

#include "hmap.h"

size_t lhmap_size(hmap_t *this)
{
    return (this ? this->size : 0);
}
