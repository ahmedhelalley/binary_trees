#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling...
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 * has no sibling, or its parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
