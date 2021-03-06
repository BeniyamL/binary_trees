#include "binary_trees.h"
/**
 * binary_tree_delete - function to deleter the entire binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
