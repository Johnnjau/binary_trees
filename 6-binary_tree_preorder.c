#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses binary tree via pre-order method
 * @tree: Root node pointer for tree traversal.
 * @func: Callback function pointer for node processing.
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
