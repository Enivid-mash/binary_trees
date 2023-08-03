#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Initialize the size to 0 */
	size_t size = 0;

	/* Check if the tree is not NULL */
	if (tree)
	{
		/* Increment the size to account for the current node */
		size += 1;

		/* Recursively add the sizes of the left and right subtrees */
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	/* Return the total size of the tree */
	return (size);
}
