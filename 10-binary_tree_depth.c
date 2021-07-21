#include "binary_trees.h"
/**
 * binary_tree_depth - find the depth of the node from the root
 * @tree: the given node whose depth will be determined
 *
 * Return: the depth of the given node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t depth = 0;

	tree = tree->parent;
	while (tree)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
