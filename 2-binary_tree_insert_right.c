#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: pointer to node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created node
 *	NULL on failure || parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
