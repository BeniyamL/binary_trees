#include "binary_trees.h"
/**
 * binary_tree_inorder - print the binary tree in pre order
 * @tree: the root node of the bt
 * @func: function pointer
 *
 * Return: nothing
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
