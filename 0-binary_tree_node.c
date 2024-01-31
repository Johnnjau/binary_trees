#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 *@parent: the parent node
 *@value: the value of the node
 *
 *Return: the pointer to new node or NULL on error
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;
	return (newnode);
}
