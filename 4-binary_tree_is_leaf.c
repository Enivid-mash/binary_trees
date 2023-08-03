#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the node is NULL or has at least one child (left or right) */
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	/* If the node has no children, it is a leaf node, so return 1 */
	return (1);
}
