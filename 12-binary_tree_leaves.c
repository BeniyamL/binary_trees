#include "binary_trees.h"
/**
 * binary_tree_leaves - function to count the number of leaves in BT
 * @tree: the pointer to the root node of the BT
 *
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
			leaf += 1;
	}
	return (leaf);
}
