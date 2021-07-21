#include "binary_trees.h"
/**
 * binary_tree_balance - finds the balance factor of BT
 * @tree: the root of th BT
 *
 * Return: balance factor (height of left sub tree - height of righ sub tree)
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (tree)
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);
		return (l - r);
	}
	else
		return (0);
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
		else
			l_height = 1;
		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);
		else
			r_height = 1;

		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
	return (0);
}
