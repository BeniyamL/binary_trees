#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
void level_order(const binary_tree_t *tree, void (*func)(int), int step);
/**
 * binary_tree_levelorder - traverse using level order traversal
 * @tree: the root of the BT
 * @func: function pointer
 *
 * Return: nothing
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i = 1;

	if (tree && func)
	{
		height = binary_tree_height(tree) + 1;
		while (i <= height)
		{
			level_order(tree, func, i);
			i++;
		}
	}
}

/**
 * level_order - function to print in level order
 * @tree: the root of BT
 * @func: function pointer
 * @step: counter for the level
 *
 * Return: nothing
 **/
void level_order(const binary_tree_t *tree, void (*func)(int), int step)
{
	if (tree)
	{
		if (step == 1)
			func(tree->n);
		else if (step >= 2)
		{
			level_order(tree->left, func, step - 1);
			level_order(tree->right, func,  step - 1);
		}
	}
}
/**
 * binary_tree_height - find the height of a binary tree
 * @tree: the root of the BT
 *
 * Return: the height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0, r_height = 0;

		if (tree->left)
			l_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);

		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
	return (0);
}

