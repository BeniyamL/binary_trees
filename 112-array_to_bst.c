#include "binary_trees.h"
/**
 * array_to_bst - build a Binary search tree from an array
 * @array: the given array
 * @size: the size of the array
 *
 * Return: the pointer to the root of the created BST
 **/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	size_t i = 0;

	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
