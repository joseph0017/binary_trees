#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf,0 if it is not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left)
		return (0);

	if (node->right)
		return (0);

	return (1);
}

