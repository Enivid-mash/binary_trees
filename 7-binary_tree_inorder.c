#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if both tree and func are not NULL */
	if (tree && func)
	{
		/* Recursively traverse the left subtree using in-order traversal */
		binary_tree_inorder(tree->left, func);

		/* Call the function on the current node (root) */
		func(tree->n);

		/* Recursively traverse the right subtree using in-order traversal */
		binary_tree_inorder(tree->right, func);
	}
}
