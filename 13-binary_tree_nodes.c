#include "binary_trees.h"
/**
 * binary_tree_nodes - count the node with at least 1 child
 * @tree: the root of the BT
 *
 * Return: th number of nodes which has at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			node += 1;
	}
	return (node);
}
