/* List.h */

#ifndef _LIST_H_
#define _LIST_H_

#include "Types.h"

typedef struct List List;

PUBLIC List * List_new();
PUBLIC void List_delete(List* this);
PUBLIC List * List_copy(List* this);
PUBLIC unsigned int List_isEqual(List * this, List * compared);
PUBLIC void List_print(List * this);
PUBLIC void List_insertHead(List* this, void* item);
PUBLIC void List_insertTail(List* this, void* item);
PUBLIC void List_merge(List* this, List* l1);
PUBLIC void List_forEach(List* this, void (*method)(void* o, void *p), void * object);
PUBLIC void * List_getNext(List* this);
PUBLIC void * List_removeHead(List * this);
PUBLIC void * List_getHead(List * this);
PUBLIC unsigned int List_getSize(List * this);
PUBLIC void List_resetIterator(List * this);

#endif /* _LIST_H_ */
