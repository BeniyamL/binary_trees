#include "binary_trees.h"
/**
 * bst_insert - fucntion to insert into bst
 * @tree: the root of the bst
 * @value: the value to be inserted
 *
 * Return: the pointer to the inserted node
 **/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;
	bst_t *cur = *tree, *parent;

	if (cur && tree)
	{
		while (cur)
		{
			parent = cur;
			if (value == cur->n)
			{	cur = NULL;
				new_node = NULL;
			}
			else if (value > cur->n)
				cur = cur->right;
			else if (value < cur->n)
				cur = cur->left;
		}
		if (value < parent->n)
		{
			new_node = binary_tree_node(parent, value);
			parent->left = new_node;
		}
		else if (value > parent->n)
		{
			new_node = binary_tree_node(parent, value);
			parent->right = new_node;
		}
	}
	else if (tree)
	{
		new_node = binary_tree_node(*tree, value);
		*tree = new_node;
	}
	else
		new_node = NULL;
	return (new_node);
}
