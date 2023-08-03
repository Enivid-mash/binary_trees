#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if both tree and func are not NULL */
	if (tree && func)
	{
		/* Recursively traverse the left subtree using post-order traversal */
		binary_tree_postorder(tree->left, func);

		/* Recursively traverse the right subtree using post-order traversal */
		binary_tree_postorder(tree->right, func);

		/* Call the function on the current node (root) */
		func(tree->n);
	}
}
