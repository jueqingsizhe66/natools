#ifndef _BSTREE_H_
#define _BSTREE_H_

#include "common.h"

#define _BALANCED_TREE_

#ifdef _BALANCED_TREE_
typedef enum {
  red,
  black,
  double_black,
  negative_black
} bst_color_t;
#endif

typedef enum {
  preorder,     /* depth first, visit children after node */
  inorder,      /* depth first symmetric */
  postorder,    /* depth first, visit node after children */
  breadthfirst
} bst_traversal_t;

typedef struct _bst_node_t {
  struct _bst_node_t *parent;
  struct _bst_node_t *r;
  struct _bst_node_t *l;
  void *data;
#ifdef _BALANCED_TREE_
  bst_color_t color;
#endif
} bst_node_t;

typedef struct _bstree {
  struct _bst_node_t *root;
  size_t size;
  cmp_func_t cmp;
  free_func_t free;
} bstree_t;

/* constructor / destructor */
bstree_t * bstree_init(free_func_t f, cmp_func_t c);
void bstree_destroy(bstree_t *t);

/* remove a node (previously find with bstree_find */
void bstree_remove(bstree_t *t, bst_node_t *n);
bst_node_t * bstree_insert(bstree_t *t, void *data);

bst_node_t * bstree_find(bstree_t *t, void *data);
void bstree_foreach(bstree_t *t, void (*f)(void *), bst_traversal_t order);

#endif /* _BSTREE_H_ */

/* vim: set sw=2 sts=2 : */
