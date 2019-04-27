/*
** EPITECH PROJECT, 2018
** hmap
** File description:
** hmap
*/

#pragma once

#include "vec.h"

typedef struct hmap_s {
    size_t size;
    vec_t *key_table;
    vec_t *value_table;
} hmap_t;

/*
** Construction
*/
hmap_t *lhmap_new(void);
hmap_t *lhmap_with_capacity(size_t capacity);
hmap_t *lhmap_clone(hmap_t *orig);
hmap_t *lhmap_merge(hmap_t *this, hmap_t *other);

/*
** Destruction
*/
void lhmap_clear(hmap_t *this, bool free_values);
void lhmap_drop(hmap_t *this);

/*
** Property access
*/
vec_t *lhmap_keys(hmap_t *this);
vec_t *lhmap_values(hmap_t *this);
size_t lhmap_size(hmap_t *this);

/*
** Value access
*/
void *lhmap_get(hmap_t *this, char *key);
bool lhmap_set(hmap_t *this, char *key, void *value);
void *lhmap_remove(hmap_t *this, char *key);
bool lhmap_reserve(hmap_t *this, size_t capacity);
void lhmap_shrink_to_fit(hmap_t *this);

/*
** Value iteration
*/
void lhmap_for_each(hmap_t *this,
    void (*callback)(void *context, char *key, void *elem), void *context);
