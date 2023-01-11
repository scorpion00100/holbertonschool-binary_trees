#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise or,
 *	   if tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left != right ? 0 : 1);
}
