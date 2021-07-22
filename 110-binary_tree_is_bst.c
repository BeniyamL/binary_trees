#include "binary_trees.h"
int is_bst(const binary_tree_t *tree, int lwr, int hgr);
/**
 * binary_tree_is_bst - fucntion to check whether a BT is a BST
 * @tree: the root node of the BT
 *
 * Return: 1 if it is a binary 0 otherwise
 **/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
/**
 * is_bst - check Binary search tree
 * @tree: the root node
 *
 * Return: 1 if ist is a bst 0 otherwise
 **/
int is_bst(const binary_tree_t *tree, int lwr, int hgr)
{
	if (tree == NULL)
		return (1);
	if (lwr >= tree->n || hgr <= tree->n)
		return (0);
	return (is_bst(tree->left, lwr, tree->n) &&
	is_bst(tree->right, tree->n, hgr));
}
