#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 *
 * @parent: pointer to the parent node to create
 * @value: value to store in the new node
 * @return: pointer to created node or
 *	NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t * parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if(new_node == NULL)
		return (NULL);
	else
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
}
