#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */

void deleteTree(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	deleteTree(tree->left);
	deleteTree(tree->right);
	free(tree);
};

void binary_tree_delete(binary_tree_t *tree)
{
	deleteTree(tree);
	*node_ref = NULL;
}
