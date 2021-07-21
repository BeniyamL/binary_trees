#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of the given node
 * @node: the given node
 *
 * Return: the pointer to the the sibling node
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node == node->parent->left)
			sibling = node->parent->right;
		else if (node == node->parent->right)
			sibling = node->parent->left;
	}
	return (sibling);
}
