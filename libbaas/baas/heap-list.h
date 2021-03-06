#ifndef _HEAP_LIST_H_
#define _HEAP_LIST_H_

#include "heap.h"
#include "list.h"

/* create a heap from a list in log time.
 * the heap won't free element's data uppon destruction */
heap_t * heap_heapify_list(list_t *l);

#endif /* _HEAP_LIST_H_ */

/* vim: set sw=2 sts=2 : */
