#include "binary_trees.h"

/**
 * array_to_bst - function to build binary search tree from array
 * @array: array of integers
 * @size: number of elements in array
 * Return: pointer to new search array
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t a = 0;

	if (array == NULL || size == 0)
		return (NULL);

	for (; a < size; a = a + 1)
		bst_insert(&tree, array[a]);

	if (a == size)
		return (tree);

	return (tree);
}
