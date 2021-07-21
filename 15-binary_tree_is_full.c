#include "binary_trees.h"
/**
 * binary_tree_is_full - check whether the BT is full or not
 * @tree: the root of the BT
 *
 * Return: 1 if it is full 0 otherwise
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (is_full(tree));
}
/**
 * is_full - check the fullnes
 * @tree: the root of bt
 *
 * Return: 1 if it is full 0 otherwise
 **/
int is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (is_full(tree->left) && is_full(tree->right));
	else
		return (0);
}
