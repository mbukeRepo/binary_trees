#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf node
 * @node: the node to check
 * Return: 1 if leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->right != NULL || node->left != NULL)
return (0);

return (1);
}
