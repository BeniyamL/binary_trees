#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node to the right
 * @parent: the parent of the node to be inserted
 * @value: the value of the new node
 *
 * Return: the pointer to the new node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *cur;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right)
	{
		cur = parent->right;
		parent->right = new_node;
		new_node->right = cur;
		cur->parent = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
