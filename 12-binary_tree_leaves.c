#include "binary_trees.h"

/**
 * binary_tree_leaves - calculates leaves in a tree
 * @tree: pointer to the tree
 * Return: number of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
int leaves = 0;
if (tree)
{
leaves += (!tree->left && !tree->right) ? 1 : 0;
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
}

return (leaves);
}
