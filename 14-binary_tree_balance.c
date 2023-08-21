#include "binary_trees.h"

/**
 * binary_tree_height - Measures binary tree height.
 * @tree: pointer to root node of tree
 *
 * Return: NULL or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		/* Calculate the height of the left subtree recursively */
		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;

		/* Calculate the height of the right subtree recursively */
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		/* Return the maximum of the left and right subtree heights */
		return ((l > r) ? l : r);
	}
	/* If tree is NULL, return 0 as the height */
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor
 * @tree: pointer to root node
 *
 * Return: NULL or
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

