#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0;
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Calculate the balance factor */
	bf = left_height - right_height;

	return (bf);
}
