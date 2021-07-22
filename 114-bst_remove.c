#include "binary_trees.h"
bst_t *bst_search(const bst_t *tree, int value);
/**
 * bst_remove - remove a node from a Binary search tree
 * @root: the root of a binary search tree
 * @value: the given value
 *
 * Return: pointer to the new node
 **/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp, *rplcd_node = NULL, *rqrd_node = NULL;

	rqrd_node = bst_search(root, value);
	if (rqrd_node)
	{
		if (rqrd_node->right)
		{
			if (rqrd_node->right->left)
			{
				tmp = rqrd_node->right;
				while (tmp->left)
					tmp = tmp->left;
				rplcd_node = tmp;
				rplcd_node->parent->left = rplcd_node->right;
				rplcd_node->right = rqrd_node->right;
				rplcd_node->left = rqrd_node->left;
			}
			else
			{
				rplcd_node = rqrd_node->right;
				rplcd_node->parent->right = rplcd_node->right;
				rplcd_node->left = rqrd_node->left;
			}
			if (rqrd_node->left)
				rqrd_node->left->parent = rplcd_node;
			rqrd_node->right->parent = rplcd_node;
		}
		else if (rqrd_node->left)
			rplcd_node = rqrd_node->left;
		else
		{
			if (rqrd_node->n < rqrd_node->parent->n)
				rqrd_node->parent->left = NULL;
			else if (rqrd_node->n > rqrd_node->parent->n)
				rqrd_node->parent->right = NULL;
		}
		if (rqrd_node != rplcd_node)
		{
			rplcd_node->parent = rqrd_node->parent;
			if (rqrd_node->parent)
			{
				if (value < rqrd_node->parent->n)
					rqrd_node->parent->left = rplcd_node;
				else if (value > rqrd_node->parent->n)
					rqrd_node->parent->right = rplcd_node;
			}
		}
		free(rqrd_node);
	}
	return ((rplcd_node && rplcd_node->parent) ? root : rplcd_node);
}
/**
 * bst_search - function to search the value in BST
 * @tree: the pointer to the root node
 * @value: the given value
 *
 * Return: the ponter to the node container the required value
 **/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree == NULL)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
		{
			node = ((bst_t *)tree);
			break;
		}
		else if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (node);
}

