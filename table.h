#ifndef INCLUDE__TABLE_H
#define INCLUDE__TABLE_H

typedef struct table_s *table_t;

table_t tab_empty(void);
void tab_enter(table_t tab, void *key, void *value);
void *tab_lookup(table_t tab, void *key);
void *tab_pop(table_t tab);
void tab_dump(table_t tab, void (*show)(void *key, void *value));

#endif
