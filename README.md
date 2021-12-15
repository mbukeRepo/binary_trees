## BINARY TREES
---

This repository contains code that implements binary trees in c. Binary trees is
a tree datastructure in which each node has two children atmost.

![alt binary-tree](https://media.geeksforgeeks.org/wp-content/cdn-uploads/2009/06/tree12.gif)
![alt important-terms-in-binary-tree](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_tree.jpg)

** some important terms in binary trees **

** size ** : this is the number of nodes it has.
** root ** : The node at the top of tree.
** child ** : The node below a given node.
** leaf ** : The node which has no children.


Binary trees will be of this structure in our implementation.

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

These are some simple functions that are implemented on binary tree.

| prototype | Description |
| binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); | create a new node and set left and right child to null and its parent to **parent** pointer |
| binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); | inserts a node as the left-child of another node |
| binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); | inserts a node as the right-child of another node |
| void binary_tree_delete(binary_tree_t *tree); | deletes binary tree |
| int binary_tree_is_leaf(const binary_tree_t *node); | checks if a node is leaf |
| int binary_tree_is_root(const binary_tree_t *node); | checks if a node is a root node |


** traversing binary trees **

