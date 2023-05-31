#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a specific node is a root of the binary_tree.
 * @node: A pointer to the node for checking.
 * 
 * Return: If the node is a root - NULL 
 * Otherwise - a pointer to the new node.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return(1);
}
