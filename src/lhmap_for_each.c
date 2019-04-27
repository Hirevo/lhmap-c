/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** lhmap_for_each
*/

#include "hmap.h"

void lhmap_for_each(hmap_t *this,
    void (*callback)(void *context, char *key, void *elem), void *context)
{
    if (this == 0 || callback == 0)
        return;
    for (size_t idx = 0; idx < this->size; idx++)
        callback(
            context, this->key_table->arr[idx], this->value_table->arr[idx]);
}