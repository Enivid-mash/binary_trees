#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: maximum of the left and right subtree heights or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Check if tree is not NULL */
	if (tree)
	{
		/* Variables to store the heights of left and right subtrees */
		size_t left_height = 0, right_height = 0;

		/* Calculate the height of the left subtree recursively */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/* Calculate the height of the right subtree recursively */
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Return the maximum of the left and right subtree heights */
		return ((left_height > right_height) ? left_height : right_height);
	}
	/* If tree is NULL, return 0 as the height */
	return (0);
}
