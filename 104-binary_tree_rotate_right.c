#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate....
 * Return: Pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (NULL);

	new_root = tree->left;
	new_root->parent = NULL;
	if (new_root->right)
		new_root->right->parent = tree;
	tree->left = new_root->right;

	tree->parent = new_root;
	new_root->right = tree;

	return (new_root);
}
