#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 * Return: total number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Initialize the variable 'leaves' to 0 */
	size_t leaves = 0;

	/* Check if the tree is not NULL */
	if (tree)
	{
		/* Increment the 'leaves' by 1 if the current node is a leaf */
		leaves += (!tree->left && !tree->right) ? 1 : 0;

		/* Recursively count the leaves in the left subtree */
		leaves += binary_tree_leaves(tree->left);

		/* Recursively count the leaves in the right subtree */
		leaves += binary_tree_leaves(tree->right);
	}

	/* Return the total number of leaves in the tree */
	return (leaves);
}
