#include "binary_trees.h"
/**
 * binary_tree_depth - finds the depth of certain node
 * @tree: the pointer to the node
 * Return: depth of certain node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree->parent)
{
depth = 1 + binary_tree_depth(tree->parent);
return (depth);
}

return (0);
}
