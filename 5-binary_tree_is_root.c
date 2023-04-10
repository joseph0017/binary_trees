#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: is a pointer to the node for checking
 * Return: 1 if node is a root,0 if it is not a node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
