#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate....
 * Return: Pointer to the new root node of the tree once rotated..
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->right)
		return (NULL);

	new_root = tree->right;
	new_root->parent = NULL;
	if (new_root->left)
		new_root->left->parent = tree;
	tree->right = new_root->left;

	tree->parent = new_root;
	new_root->left = tree;

	return (new_root);
}
