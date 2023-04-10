#include "binary_trees.h"

/**
 * bst_insertion - insert new node into correct location in binary search tree
 * @tree: double pointer to root of tree
 * @value: value of new node
 * Return: pointer to the inserted node.
 */

bst_t *bst_insertion(bst_t **tree, int value)
{
	bst_t *root;

	root = *tree;

	if (value < root->n)
	{
		if (!root->left)
		{
			root->left = (bst_t *) binary_tree_node(root, value);
			return (root->left);
		}
		else
			return (bst_insert(&(root->left), value));
	}
	if (value > root->n)
	{
		if (!root->right)
		{
			root->right = (bst_t *) binary_tree_node(root, value);
			return (root->right);
		}
		else
			return (bst_insert(&(root->right), value));
	}
	return (NULL);
}

/**
 * bst_insert - insert new node into correct location in binary search tree
 * @tree: double pointer to root of tree
 * @value: value of new node
 * Return: pointer to the inserted node.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	return (bst_insertion(tree, value));
}

