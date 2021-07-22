#include "binary_trees.h"
/**
 * bst_search - function to search the value in BST
 * @tree: the pointer to the root node
 * @value: the given value
 *
 * Return: the ponter to the node container the required value
 **/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree == NULL)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
		{
			node = ((bst_t *)tree);
			break;
		}
		else if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (node);
}
