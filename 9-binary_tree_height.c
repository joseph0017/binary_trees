#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return:  0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height += binary_tree_height(tree->left);
	if (tree->right)
		right_height += binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
