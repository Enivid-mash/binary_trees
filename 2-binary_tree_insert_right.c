#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: NULL or new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the provided value */
	new_node = binary_tree_node(parent, value);

	/* Check if memory allocation was successful for the new node */
	if (new_node == NULL)
		return (NULL);

	/*If parent already has right child, re-arrange pointers to insert new node*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Set the new node as the right child of the parent node */
	parent->right = new_node;

	/* Return the newly inserted node */
	return (new_node);
}
