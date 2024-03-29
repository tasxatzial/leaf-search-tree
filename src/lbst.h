#ifndef _LBST_H_
#define _LBST_H_

#include <stdio.h>

typedef void* lbst_T;


/* Inserts a new (key, val) into the dictionary. If key is already in the
dictionary, its val is updated.

Returns:
* 1 If key was added/updated.
* -1 On error. */
int lbst_insert(lbst_T root, char *key, void *val);


/* Deletes a key from the dictionary.

Returns:
* 1 If the key is found and deleted.
* 0 If the key is not found. */
int lbst_delete(lbst_T root, char *key);


/* Searches for a key in the dictionary.

If found, it returns the a pointer to its val, else it returns NULL. */
void *lbst_lookup(lbst_T root, char *key);


/* Returns 1 if dictionary has no keys, 0 otherwise */
int lbst_is_empty(lbst_T root);


/* Creates and returns an empty dictionary. Its (key, val) pairs have
type (char*, void*).

Returns NULL on fail.*/
lbst_T lbst_create();


/* Clears the dictionary. The function lbst_is_empty() returns 1 after
calling this one. */
void lbst_clear(lbst_T root);


/* Deletes the dictionary. */
void lbst_free(lbst_T root);


/* Prints (key, val) that satisfy first <= key <= last. */
void lbst_range_query(lbst_T root, char *first, char *last, void (*print)(char *key, void *val));


/* Prints the dictionary. (key, val) pairs are sorted by key (ascending). */
void lbst_print(lbst_T root, void (*print)(char *key, void *val));

#endif