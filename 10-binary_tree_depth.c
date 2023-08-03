#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 1 plus the depth of its parent
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is not NULL and it has a parent, ... */
	/* return 1 plus the depth of its parent */
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
