#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: total number of nodes with at least one child in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Initialize the variable 'nodes' to 0 */
	size_t nodes = 0;

	/* Check if the tree is not NULL */
	if (tree)
	{
		/* Increment the 'nodes' by 1 if the current node has at least one child */
		nodes += (tree->left || tree->right) ? 1 : 0;

		/* Recursively count the nodes with at least one child in the left subtree */
		nodes += binary_tree_nodes(tree->left);

		/* Recursively count the nodes with at least one child in the right subtree*/
		nodes += binary_tree_nodes(tree->right);
	}

	/* Return the total number of nodes with at least one child in the tree */
	return (nodes);
}
