#include "binary_trees.h"
/**
 * binary_tree_postorder - print the binary tree in pre order
 * @tree: the root node of the bt
 * @func: function pointer
 *
 * Return: nothing
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
