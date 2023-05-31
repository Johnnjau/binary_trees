#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child in a binary tree
 * @parent: A Pointer to the node where the left-child will be located.
 * @value: The valued stored in the new node.
 *
 * Return: If an error happens or the parent is NULL - NULL
 * Otherwise - a pointer to the most recent code.
 * Description: If parent already has left-child, new node
 * takes, it's place and the previous left-child,
 * is set on the left-side of the new code.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
