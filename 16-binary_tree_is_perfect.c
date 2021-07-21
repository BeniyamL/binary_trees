#include "binary_trees.h"
int is_perfect(const binary_tree_t *tree, int d, int counter);
int find_depth(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - check whether a binary tree is perfect
 * @tree: the root of the BT
 *
 * Return: 1 if it is a binary 0 otherwise
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = find_depth(tree);
	return (is_perfect(tree, depth, 0));
}
/**
 * is_perfect - check the perfectness
 * @tree: the root of the BTi
 * @d: depth of the tree
 * @counter: the counter
 *
 * Return: 1 if it is a binary 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int d, int counter)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		if (d == counter + 1)
			return (1);
		else
			return (0);
	}
	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->right == NULL && tree->left != NULL))
		return (0);

	return (is_perfect(tree->left, d, counter + 1) &&
	is_perfect(tree->right, d, counter + 1));
}
/**
 * find_depth - function to find depth
 * @tree: root of the BT
 *
 * Return: depth
 **/
int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth += 1;
		tree = tree->left;
	}
	return (depth);
}
