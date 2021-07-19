#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert to node as left-child
 * @parent: the parent of the node to be inserted
 * @value: the value to store in the new node
 *
 * Return: the pointer to the new node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *cur;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left)
	{
		cur = parent->left;
		parent->left = new_node;
		new_node->left = cur;
		cur->parent = new_node;
	}
	else
		parent->left = new_node;

	return (new_node);
}
