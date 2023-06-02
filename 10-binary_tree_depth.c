#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node.
 * @tree: A pointer to the node measuring depth.
 *
 * Return: If a tree is NULL, your function must return to 0, else return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
