#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Parent node of the node to be inserted
 * @value: Value of node
 * Return: Pointer to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);
	new_node->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}
