/*
** EPITECH PROJECT, 2018
** libhmap-c
** File description:
** intern_lhmap_find_key
*/

#include "intern_hmap.h"

bool intern_lhmap_find_key(char *to_find, char *cur, size_t idx)
{
    (void)(idx);
    return (cur != 0 && strcmp(to_find, cur) == 0);
}
