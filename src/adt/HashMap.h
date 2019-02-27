#ifndef _INCLUDED_HASHMAP
#define _INCLUDED_HASHMAP

#include "Int64.h"
#include "Iterator.h"
#include "MapEntry.h"

typedef struct HashMap HashMap;

HashMap * HashMap_malloc(int capacity, Int64_comparef * compareKey);

void HashMap_free(HashMap * self);

void HashMap_clear(HashMap * self);

int HashMap_size(HashMap * self);

boolean HashMap_containsKey(HashMap * self, int64 key);

void * HashMap_get(HashMap * self, int64 key);

void * HashMap_put(HashMap * self, int64 key, void * value);

void * HashMap_remove(HashMap * self, int64 key);

Iterator * HashMapIterator_malloc(HashMap * self);

boolean HashMapIterator_hasNext(Iterator *);

MapEntry * HashMapIterator_next(Iterator *);

void HashMapIterator_free(Iterator *);

#endif // _INCLUDED_HASHMAP
