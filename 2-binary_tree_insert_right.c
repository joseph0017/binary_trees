#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
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
	new_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;
	parent->right = new_node;

	return (new_node);
}
