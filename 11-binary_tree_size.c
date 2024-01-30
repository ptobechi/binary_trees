#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int sz = 0;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left and right subtrees */
	sz = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (sz);
}
