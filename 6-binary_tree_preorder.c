#include "binary_trees.h"
/**
 * binary_tree_preorder - print the binary tree in pre order
 * @tree: the root node of the bt
 * @func: function pointer
 *
 * Return: nothing
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
