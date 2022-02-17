#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is a root
 *	0 otherwise or if node is null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
