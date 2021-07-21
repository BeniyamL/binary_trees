#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of a node
 * @node: the given node
 *
 * Return: a pointer to the given node
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			uncle = node->parent->parent->right;
		else if (node->parent == node->parent->parent->right)
			uncle = node->parent->parent->left;
	}
	return (uncle);
}
