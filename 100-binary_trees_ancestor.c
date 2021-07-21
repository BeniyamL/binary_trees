#include "binary_trees.h"
/**
 * binary_trees_ancestor - find the lowest commend ancestor of first & second
 * @first: the first node
 * @second: the second node
 *
 * Return: the pointer to the lowest common ancestor
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *s_par;
	binary_tree_t *f_par;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	f_par = first->parent;
	s_par = second->parent;
	if (!f_par || first == s_par || (!f_par->parent && s_par))
		return (binary_trees_ancestor(first, s_par));
	else if (!s_par || second == f_par || (!s_par->parent && f_par))
		return (binary_trees_ancestor(second, f_par));
	else
		return (binary_trees_ancestor(f_par, s_par));
}
