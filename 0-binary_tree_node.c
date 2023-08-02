#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: A pointer to the parent of the node to create
 * @value: The value to put in the new node
 *
 * Return: NULL, or new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* Initialize the node with the provided values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return the newly created node */
	return (new_node);
}
