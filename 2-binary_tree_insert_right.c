#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a right-child in a binary tree
 * @parent: A Pointer to the node where the left-child will be located.
 * @value: The value to store in the new node.
 *
 * Return: If an error happens or the parent is NULL - NULL
 * Otherwise - a pointer to the most recent code.
 *
 * Description: If parent already has right-child, new node
 * takes, it's place and the previous right-child,
 * is set on the right-side of the new code.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
