#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the node is NULL or has a parent */
	if (node == NULL || node->parent != NULL)
		return (0);

	/* If the node has no parent, it is the root node, so return 1 */
	return (1);
}
